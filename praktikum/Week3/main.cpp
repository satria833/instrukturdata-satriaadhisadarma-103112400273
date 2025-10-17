#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct SLL {
    Node* head;
};

// Membuat list kosong
void CreateList(SLL &L) {
    L.head = nullptr;
}

// Menampilkan isi list
void ViewList(SLL L) {
    Node* temp = L.head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Insert di awal
void InsertFirst(SLL &L, int x) {
    Node* newNode = new Node{x, L.head};
    L.head = newNode;
}

// Insert di akhir
void InsertLast(SLL &L, int x) {
    Node* newNode = new Node{x, nullptr};
    if (L.head == nullptr) {
        L.head = newNode;
    } else {
        Node* temp = L.head;
        while (temp->next != nullptr) temp = temp->next;
        temp->next = newNode;
    }
}

// Insert setelah node tertentu
void InsertAfter(Node* prev, int x) {
    if (prev == nullptr) return;
    Node* newNode = new Node{x, prev->next};
    prev->next = newNode;
}

// Hapus node pertama
void DeleteFirst(SLL &L) {
    if (L.head == nullptr) return;
    Node* temp = L.head;
    L.head = L.head->next;
    delete temp;
}

// Hapus node terakhir
void DeleteLast(SLL &L) {
    if (L.head == nullptr) return;
    if (L.head->next == nullptr) {
        delete L.head;
        L.head = nullptr;
        return;
    }
    Node* temp = L.head;
    while (temp->next->next != nullptr) temp = temp->next;
    delete temp->next;
    temp->next = nullptr;
}


void DeleteAfter(Node* prev) {
    if (prev == nullptr || prev->next == nullptr) return;
    Node* temp = prev->next;
    prev->next = temp->next;
    delete temp;
}

int main() {
    SLL L;
    CreateList(L);

    cout << "InsertFirst 10, 20" << endl;
    InsertFirst(L, 10);
    InsertFirst(L, 20);
    ViewList(L);

    cout << "InsertLast 30, 40" << endl;
    InsertLast(L, 30);
    InsertLast(L, 40);
    ViewList(L);

    cout << "DeleteFirst" << endl;
    DeleteFirst(L);
    ViewList(L);

    cout << "DeleteLast" << endl;
    DeleteLast(L);
    ViewList(L);

    cout << "InsertAfter node pertama (50)" << endl;
    InsertAfter(L.head, 50);
    ViewList(L);

    cout << "DeleteAfter node pertama" << endl;
    DeleteAfter(L.head);
    ViewList(L);

    return 0;
}