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

// Mengecek apakah list kosong
bool IsEmpty(SLL L) {
    return L.head == nullptr;
}

// Menampilkan isi list
void ViewList(SLL L) {
    if (IsEmpty(L)) {
        cout << "List kosong." << endl;
        return;
    }
    Node* p = L.head;
    cout << "Isi list: ";
    while (p != nullptr) {
        cout << p->data;
        if (p->next != nullptr) cout << " -> ";
        p = p->next;
    }
    cout << " -> NULL" << endl;
}

// Insert di awal
void InsertFirst(SLL &L, int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = L.head;
    L.head = newNode;
}

// Insert di akhir
void InsertLast(SLL &L, int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = nullptr;

    if (IsEmpty(L)) {
        L.head = newNode;
    } else {
        Node* p = L.head;
        while (p->next != nullptr) {
            p = p->next;
        }
        p->next = newNode;
    }
}

// Insert setelah node tertentu
void InsertAfter(Node* prevNode, int x) {
    if (prevNode != nullptr) {
        Node* newNode = new Node;
        newNode->data = x;
        newNode->next = prevNode->next;
        prevNode->next = newNode;
    }
}

// Hapus node pertama
void DeleteFirst(SLL &L) {
    if (!IsEmpty(L)) {
        Node* temp = L.head;
        L.head = L.head->next;
        delete temp;
    }
}

// Hapus node terakhir
void DeleteLast(SLL &L) {
    if (!IsEmpty(L)) {
        if (L.head->next == nullptr) {
            delete L.head;
            L.head = nullptr;
        } else {
            Node* p = L.head;
            while (p->next->next != nullptr) {
                p = p->next;
            }
            delete p->next;
            p->next = nullptr;
        }
    }
}

// Hapus setelah node tertentu
void DeleteAfter(Node* prevNode) {
    if (prevNode != nullptr && prevNode->next != nullptr) {
        Node* temp = prevNode->next;
        prevNode->next = temp->next;
        delete temp;
    }
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