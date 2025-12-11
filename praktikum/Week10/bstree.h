
#ifndef BSTREE_H
#define BSTREE_H

#include <iostream>
using namespace std;

typedef int infotype;

struct Node {
    infotype info;
    Node* left;
    Node* right;
};

typedef Node* address;

address newNode(infotype x);
address insertNode(address root, infotype x);
void inOrder(address root);

#endif


