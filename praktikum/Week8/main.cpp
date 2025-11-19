#include <iostream>
#include "queue.h"
using namespace std;

int main() {
    Queue Q;
    createQueue(Q);
    printInfo(Q);

    cout << "\nEnqueue 3 Elemen" << endl;
    enqueue(Q, 5);
    printInfo(Q);
    enqueue(Q, 2);
    printInfo(Q);
    enqueue(Q, 7);
    printInfo(Q);

    cout << "\nDequeue 1 Elemen" << endl;
    cout << "Element Keluar: " << dequeue(Q) << endl;
    printInfo(Q);

    cout << "\nEnqueue 1 Elemen" << endl;
    enqueue(Q, 4);
    printInfo(Q);

    cout << "\nDequeue 2 Elemen" << endl;
    cout << "Element keluar: " << dequeue(Q) << endl;
    cout << "Element keluar: " << dequeue(Q) << endl;
    printInfo(Q);

    return 0;
}