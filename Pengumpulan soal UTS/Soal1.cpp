#include <iostream>
#include <string>
using namespace std;

struct Node {
    string nama;
    Node* next;
};

Node* head = nullptr;


void insertNama(string nama) {
    Node* newNode = new Node();
    newNode->nama = nama;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}


void deleteNama(string nama) {
    if (head == nullptr) return;

    Node* temp = head;
    Node* prev = nullptr;

    while (temp != nullptr && temp->nama != nama) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) return;

    if (prev == nullptr) {
        head = head->next;
    } else {
        prev->next = temp->next;
    }

    delete temp;
}


void viewList() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->nama << " ";
        temp = temp->next;
    }
    cout << "\n";
}


void hitungGenap() {
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->nama.length() % 2 == 0) {
            count++;
        }
        temp = temp->next;
    }
    cout << "Jumlah nama dengan huruf genap: " << count << "\n";
}

int main() {
    int pilihan;
    string nama;

    do {
        cout << "Menu: 1 insert, 2 delete, 3 view, 4 hitung genap, 0 exit\n";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama: ";
                cin >> nama;
                insertNama(nama);
                break;
            case 2:
                cout << "Masukkan nama untuk delete: ";
                cin >> nama;
                deleteNama(nama);
                break;
            case 3:
                viewList();
                break;
            case 4:
                hitungGenap();
                break;
            case 0:
                break;
            default:
                break;
        }
    } while (pilihan != 0);

    return 0;
}