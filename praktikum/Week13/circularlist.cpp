#include "circularlist.h"
#include <sstream>
#include <iomanip>

/* ================== Utility internal ================== */
static bool isEmpty(const List &L) {
    return L.first == nullptr;
}

/* ================== Implementasi fungsi ================== */

void createList(List &L) {
    L.first = nullptr;
}

address alokasi(infotype x) {
    address P = new (nothrow) ElmList;
    if (P) {
        P->info = x;
        P->next = P; // circular default
    }
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = nullptr;
}

/* ---------- INSERT ---------- */

void insertFirst(List &L, address P) {
    if (!P) return;

    if (isEmpty(L)) {
        L.first = P;
        P->next = P;
    } else {
        address last = L.first;
        while (last->next != L.first) last = last->next;

        P->next = L.first;
        last->next = P;
        L.first = P;
    }
}

void insertAfter(List &L, address Prec, address P) {
    if (!P) return;
    if (isEmpty(L)) {
        L.first = P;
        P->next = P;
        return;
    }
    if (!Prec) return;

    P->next = Prec->next;
    Prec->next = P;
}

void insertLast(List &L, address P) {
    if (!P) return;

    if (isEmpty(L)) {
        L.first = P;
        P->next = P;
    } else {
        address last = L.first;
        while (last->next != L.first) last = last->next;

        last->next = P;
        P->next = L.first;
    }
}

/* ---------- DELETE ---------- */

void deleteFirst(List &L, address &P) {
    P = nullptr;
    if (isEmpty(L)) return;

    if (L.first->next == L.first) {
        P = L.first;
        L.first = nullptr;
        P->next = nullptr;
    } else {
        address last = L.first;
        while (last->next != L.first) last = last->next;

        P = L.first;
        L.first = L.first->next;
        last->next = L.first;
        P->next = nullptr;
    }
}

void deleteAfter(List &L, address Prec, address &P) {
    P = nullptr;
    if (isEmpty(L) || !Prec) return;

    P = Prec->next;

    if (P == Prec && P == L.first) {
        L.first = nullptr;
        P->next = nullptr;
        return;
    }

    if (P == L.first) {
        L.first = L.first->next;
    }

    Prec->next = P->next;
    P->next = nullptr;
}

void deleteLast(List &L, address &P) {
    P = nullptr;
    if (isEmpty(L)) return;

    if (L.first->next == L.first) {
        P = L.first;
        L.first = nullptr;
        P->next = nullptr;
    } else {
        address prev = nullptr;
        address curr = L.first;
        while (curr->next != L.first) {
            prev = curr;
            curr = curr->next;
        }
        // curr = last
        P = curr;
        prev->next = L.first;
        P->next = nullptr;
    }
}

/* ---------- FIND & PRINT ---------- */

address findElm(List L, infotype x) {
    if (isEmpty(L)) return nullptr;

    address q = L.first;
    do {
        if (q->info.nim == x.nim) return q;
        q = q->next;
    } while (q != L.first);

    return nullptr;
}

/* Helper: format IPK tanpa trailing zero dan titik (4.0 -> 4, 3.50 -> 3.5) */
static std::string fmtIpk(float v) {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2) << v; // basis 2 desimal
    std::string s = oss.str();
    while (!s.empty() && s.back() == '0') s.pop_back();  // buang '0' di akhir
    if (!s.empty() && s.back() == '.') s.pop_back();     // buang '.' jika tersisa
    return s;
}

void printInfo(List L) {
    if (isEmpty(L)) {
        std::cout << "List kosong\n";
        return;
    }

    address p = L.first;

    // Header persis seperti contoh
    std::cout << "coba insert first, last, dan after\n";

    // Blok data dengan spasi dan baris kosong sesuai contoh
    do {
        std::cout << "Nama : " << p->info.nama << '\n';
        std::cout << "NIM  : " << p->info.nim  << '\n';
        std::cout << "L/P  : " << p->info.jenis_kelamin << '\n';
        std::cout << "IPK  : " << fmtIpk(p->info.ipk) << "\n\n";
        p = p->next;
    } while (p != L.first);
}

/* ---------- CREATE DATA (helper) ---------- */
address createData(const string &nama,
                   const string &nim,
                   char jenis_kelamin,
                   float ipk) {
    infotype x;
    x.nama = nama;
    x.nim = nim;
    x.jenis_kelamin = jenis_kelamin;
    x.ipk = ipk;
    return alokasi(x);
}
