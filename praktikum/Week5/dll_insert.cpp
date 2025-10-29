#include <iostream>
#define Nil NULL
using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
    address prev;
};

struct List {
    address first;
    address last;
};

void insertFirst(List &L, address p) {
    p->next = L.first;
    p->prev = Nil;

    if (L.first != Nil) L.first->prev = p;
    else L.last = p;
    L.first = p;
}

void insertLast(List &L, address p) {
    p->prev = L.last;
    p->next = Nil;

    if (L.last != Nil) L.last->next = p;
    else L.first = p;
    L.last = p;
}

void insertAfter(List &L, address p, address r) {
    p->next = r->next;
    p->prev = r;

    if (r->next != Nil) r->next->prev = p;
    else L.last = p;
    r->next = p;
}

address alokasi(infotype x) {
    address p = new elmlist;
    p->info = x;
    p->next = Nil;
    p->prev = Nil;
    return p;
}

void printInfo(List L) {
    address p = L.first;
    while (p != Nil) {
        cout << p->info << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    List L;
    L.first = Nil;
    L.last = Nil;

    address P1 = alokasi(1);
    insertFirst(L, P1);

    address P2 = alokasi(2);
    insertLast(L, P2);

    address P3 = alokasi(3);
    insertAfter(L, P3, P1);

    printInfo(L);
    return 0;
}



