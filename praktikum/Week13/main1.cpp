#include "circularlist.h"
#include <iostream>
using namespace std;

int main() {
    List L;
    createList(L);

    address P;
    infotype x;

    // Urutan hasil cetak: Ali -> Bobi -> Cindi -> Danu -> Eli -> Fahmi -> Gita -> Hilmi

    // Ali di awal (first)
    P = createData("Ali",   "01", 'l', 3.3f);
    insertFirst(L, P);

    // Bobi setelah Ali (pakai insertLast agar first tetap Ali)
    P = createData("Bobi",  "02", 'l', 3.71f);
    insertLast(L, P);

    // Cindi setelah Bobi
    x.nim = "02";
    address prec = findElm(L, x);
    P = createData("Cindi", "03", 'p', 3.5f);
    insertAfter(L, prec, P);

    // Danu di akhir
    P = createData("Danu",  "04", 'l', 4.0f);
    insertLast(L, P);

    // Eli setelah Danu
    x.nim = "04";
    prec = findElm(L, x);
    P = createData("Eli",   "05", 'p', 3.4f);
    insertAfter(L, prec, P);

    // Fahmi di akhir
    P = createData("Fahmi", "06", 'l', 3.45f);
    insertLast(L, P);

    // Gita di akhir
    P = createData("Gita",  "07", 'p', 3.75f);
    insertLast(L, P);

    // Hilmi di akhir
    P = createData("Hilmi", "08", 'l', 3.3f);
    insertLast(L, P);

    // Cetak (format persis contoh)
    printInfo(L);

    return 0;
}
