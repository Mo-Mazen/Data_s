#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class linkedlist {

private:
    Node* head;

public: 
    linkedlist() { head = NULL; }

    void add_at_frist(int value)
    {
        Node* newNode = new Node();
        newNode->data = value;
        if (head == NULL)
        {
            head = newNode;
            newNode->next = NULL;
        }
        else {
            newNode->next = head;
            head = newNode;
        }

    }
    void add_at_last(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* endelement = head;
        while (endelement->next != NULL) {
            endelement = endelement->next;
        }
        endelement->next = newNode;
    }

    void add_at_position(int pos, int value) {
        
        Node* newNode = new Node();
        newNode->data = value;

        if (pos == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* current = head;
        
        for (int i = 0; current != NULL && i < pos - 1; i++) {
            current = current->next;
        }

        if (current == NULL) {
            cout << "Position " << pos << " is out of bounds. Cannot insert." << endl;
            delete newNode;
            return;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    void insert_after_21(int newvalue)
    {
        Node* current = head;
        while (current != NULL) {
            if (current->data == 21) {
                Node* newNode = new Node();
                newNode->data = newvalue;
                newNode->next = current->next;
                current->next = newNode;
                current = newNode->next;

            }
            else {
                current = current->next;
            }
            cout << "21 not found" << endl;
        }
    }
}; 

int main() {
    linkedlist list;

    list.add_at_frist(10);
    list.add_at_last(20);
    list.add_at_last(21);
    list.add_at_last(30);
    list.insert_after_21(101);    

    return 0;
}
