#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() { head = NULL; }


    void delete_node(int key) {
        if (head == NULL) return;

        Node *temp = head, *prev = NULL;
        if (temp != NULL && temp->data == key) {
            head = temp->next;
            delete temp;
            return;
        }
        while (temp != NULL && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) return; 

        prev->next = temp->next;
        delete temp;
    }
};