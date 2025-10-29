#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    void insertEnd(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            cout << "Inserted " << data << " as head\n";
            return;
        }
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        cout << "Inserted " << data << " at end\n";
    }

    void insertBefore(int target, int data) {
        if (!head) {
            cout << "List is empty\n";
            return;
        }
        Node* temp = head;
        while (temp) {
            if (temp->data == target) {
                Node* newNode = new Node(data);
                newNode->next = temp;
                newNode->prev = temp->prev;
                if (temp->prev)
                    temp->prev->next = newNode;
                else
                    head = newNode;
                temp->prev = newNode;
                cout << "Inserted " << data << " before " << target << "\n";
                return;
            }
            temp = temp->next;
        }
        cout << "Target " << target << " not found\n";
    }

    void printReverse() {
        if (!head) {
            cout << "List is empty\n";
            return;
        }
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        cout << "List in reverse:\n";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << "\n";
    }

    void deleteByValue(int value) {
        Node* temp = head;
        while (temp) {
            if (temp->data == value) {
                if (temp->prev)
                    temp->prev->next = temp->next;
                else
                    head = temp->next;
                if (temp->next)
                    temp->next->prev = temp->prev;
                delete temp;
                cout << "Deleted node with value " << value << "\n";
                return;
            }
            temp = temp->next;
        }
        cout << "Value " << value << " not found\n";
    }

    void deleteAll() {
        int count = 0;
        while (head) {
            cout << "Deleting " << head->data << "\n";
            Node* temp = head;
            head = head->next;
            delete temp;
            count++;
        }
        cout << "All nodes deleted. Total: " << count << "\n";
    }

    void smartInsert(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            cout << "smartInsert: List was empty\n";
            return;
        }
        if (data < head->data) {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
            cout << "smartInsert: Inserted " << data << " at beginning\n";
            return;
        }
        Node* temp = head;
        while (temp->next && temp->next->data < data)
            temp = temp->next;
        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next)
            temp->next->prev = newNode;
        temp->next = newNode;
        cout << "smartInsert: Inserted " << data << " after " << temp->data << "\n";
    }

    void conditionalDelete(bool (*condition)(int)) {
        Node* temp = head;
        int count = 0;
        while (temp) {
            Node* nextNode = temp->next;
            if (condition(temp->data)) {
                cout << "Deleting " << temp->data << " due to condition\n";
                if (temp->prev)
                    temp->prev->next = temp->next;
                else
                    head = temp->next;
                if (temp->next)
                    temp->next->prev = temp->prev;
                delete temp;
                count++;
            }
            temp = nextNode;
        }
        cout << "Total nodes deleted by condition: " << count << "\n";
    }

    void printList() {
        Node* temp = head;
        cout << "Current List:\n";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};


bool greaterThan30(int x) {
    return x > 30;
}


int main() {
    DoublyLinkedList dll;
    dll.insertEnd(10);
    dll.insertEnd(20);
    dll.insertEnd(30);
    dll.insertEnd(40);
    dll.printList();

    dll.insertBefore(30, 25);
    dll.printList();
    dll.printReverse();

    dll.deleteByValue(20);
    dll.printList();

    dll.smartInsert(5);
    dll.smartInsert(35);
    dll.smartInsert(50);
    dll.smartInsert(15);
    dll.printList();

    dll.conditionalDelete(greaterThan30);
    dll.printList();

    dll.deleteAll();
    dll.printList();

    return 0;
}