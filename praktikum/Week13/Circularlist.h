#ifndef CIRCULARLIST_H
#define CIRCULARLIST_H

#include <string>
#include <iostream>

using namespace std;

/* ---- Tipe data mahasiswa ---- */
struct mahasiswa {
    string nama;
    string nim;
    char   jenis_kelamin; // 'l' atau 'p'
    float  ipk;
};
typedef mahasiswa infotype;

/* ---- Node elemen list ---- */
struct ElmList {
    infotype info;
    ElmList* next;
};
typedef ElmList* address;

/* ---- List dengan pointer first ---- */
struct List {
    address first;
};

/* ---- 11 prosedur/fungsi ---- */
void    createList(List &L);
address alokasi(infotype x);
void    dealokasi(address &P);

void    insertFirst(List &L, address P);
void    insertAfter(List &L, address Prec, address P);
void    insertLast(List &L, address P);

void    deleteFirst(List &L, address &P);
void    deleteAfter(List &L, address Prec, address &P);
void    deleteLast(List &L, address &P);

address findElm(List L, infotype x);   // cari berdasarkan x.nim
void    printInfo(List L);             // format output persis seperti contoh

/* ---- Helper: buat node dari field ---- */
address createData(const string &nama,
                   const string &nim,
                   char jenis_kelamin,
                   float ipk);

#endif // CIRCULARLIST_H
