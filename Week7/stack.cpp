#include "stack.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

void CreateStack(Stack &S) {
    S.top = -1;
}

void Push(Stack &S, int value) {
    if (S.top < 99) {
        S.top++;
        S.data[S.top] = value;
    } else {
        cout << "Stack penuh!" << endl;
    }
}

void Pop(Stack &S) {
    if (S.top >= 0) {
        S.top--;
    } else {
        cout << "Stack kosong!" << endl;
    }
}

void printInfo(Stack S) {
    cout << "[TOP] ";
    for (int i = S.top; i >= 0; i--) { 
        cout << S.data[i] << " ";
    }
    cout << endl;
}

void balikStack(Stack &S) {
    int i = 0, j = S.top;
    while (i < j) {
        swap(S.data[i], S.data[j]);
        i++;
        j--;
    }
}


void pushAscending(Stack &S, int value) {
    Stack temp;
    CreateStack(temp);

    
    while (S.top != -1 && S.data[S.top] > value) {
        Push(temp, S.data[S.top]);
        Pop(S);
    }

    
    Push(S, value);

    
    while (temp.top != -1) {
        Push(S, temp.data[temp.top]);
        Pop(temp);
    }
}


void getInputStream(Stack &S) {
    cout << "Masukkan angka : ";
    string input;
    getline(cin, input); 

    for (char c : input) {
        if (isdigit(c)) {
            int value = c - '0'; 
            Push(S, value);
        }
    }
}