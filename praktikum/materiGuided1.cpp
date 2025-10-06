#include <iostream>
using namespace std;

struct charML {
    string nama;
    charML *next;
};

int main() {
    charML *head, *tail, *curr;

    curr = new charML;
    curr->nama = "lucam";
    head = curr;
    tail = curr;

    curr = new charML;
    curr->nama = "mila";
    tail->next = curr;
    tail = curr;

    
    curr = new charML;
    curr->nama = "zilong";
    tail->next = curr;
    tail = curr;


    curr = new charML;
    curr->nama = "valir";
    tail->next = curr;
    tail = curr;

    
    curr = new charML;
    curr->nama = "gatot";
    tail->next = curr;
    tail = curr;

    
    curr = new charML;
    curr->nama = "ruby";
    tail->next = curr;
    tail = curr;

    
    curr = new charML;
    curr->nama = "aldous";
    tail->next = curr;
    tail = curr;



    tail->next = nullptr;
     
    cout << "nama hero mobile legends" << endl;
    curr = head;
    while (curr != nullptr) {
        cout << curr->nama << endl;
        curr = curr->next;
    }

    return 0;
}
