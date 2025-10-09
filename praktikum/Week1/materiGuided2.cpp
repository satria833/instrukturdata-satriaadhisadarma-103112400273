#include <iostream>
using namespace std;

struct Teman {
    string nama;
    Teman* next;
};

Teman* head = nullptr;


void tambahDepan(string nama) {
    Teman* baru = new Teman();
    baru->nama = nama;
    baru->next = head;
    head = baru;
}


void tambahBelakang(string nama) {
    Teman* baru = new Teman();
    baru->nama = nama;
    baru->next = nullptr;

    if (head == nullptr) {
        head = baru;
    } else {
        Teman* tail = head;
        while (tail->next != nullptr) {
            tail = tail->next;
        }
        tail->next = baru;
    }
}


void tambahSetelah(string yangDicari, string namaBaru) {
    Teman* insert = new Teman();
    insert->nama = namaBaru;

    Teman* after = head;
    while (after != nullptr && after->nama != yangDicari) {
        after = after->next;
    }

    if (after != nullptr) {
        insert->next = after->next;
        after->next = insert;
    } else {
        cout << "Teman dengan nama " << yangDicari << " tidak ditemukan." << endl;
    }
}


void hapusNode(string namaHapus) {
    if (head == nullptr) return;

    if (head->nama == namaHapus) {
        Teman* hapus = head;
        head = head->next;
        delete hapus;
        return;
    }

    Teman* prev = head;
    Teman* curr = head->next;
    while (curr != nullptr && curr->nama != namaHapus) {
        prev = curr;
        curr = curr->next;
    }

    if (curr != nullptr) {
        prev->next = curr->next;
        delete curr;
    } else {
        cout << "Teman dengan nama " << namaHapus << " tidak ditemukan." << endl;
    }
}


void cetakList() {
    Teman* curr = head;
    while (curr != nullptr) {
        cout << curr->nama << " -> ";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

int main() {
  
    tambahDepan("alok");
    tambahBelakang("misha");
    tambahBelakang("ford");
    tambahSetelah("carola", "crono");

    cout << "Isi Linked List Awal: ";
    cetakList();

    hapusNode("cr");
    cout << "Isi Linked List Setelah Hapus X: ";
    cetakList();

    return 0;
}