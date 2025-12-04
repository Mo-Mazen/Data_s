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

    Node* getHead() { return head; }

    void add_at_first(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        if (head == NULL) {
            head = newNode;
            newNode->next = NULL;
        } else {
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
            cout << "Position out of bounds" << endl;
            return;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    void insert_after_21(int newvalue) {
        Node* current = head;
        bool found = false;
        while (current != NULL) {
            if (current->data == 21) {
                Node* newNode = new Node();
                newNode->data = newvalue;
                newNode->next = current->next;
                current->next = newNode;
                found = true;
                current = newNode->next;
            } else {
                current = current->next;
            }
        }
        if (!found) cout << "21 not found" << endl;
    }

    void make_circular() {
        if (head == NULL) return;
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = head;
    }

    void merge_circular(linkedlist& otherList) {
        if (head == NULL || otherList.getHead() == NULL) return;

        Node* tail1 = head;
        while (tail1->next != head) {
            tail1 = tail1->next;
        }

        Node* head2 = otherList.getHead();
        Node* tail2 = head2;
        while (tail2->next != head2) {
            tail2 = tail2->next;
        }

        tail1->next = head2;
        tail2->next = head;
    }

    void reverse() {
        if (head == NULL || head->next == head) return;

        Node* prev = NULL;
        Node* current = head;
        Node* nextNode = NULL;
        Node* tail = head;

        Node* last = head;
        while(last->next != head && last->next != NULL) {
            last = last->next;
        }
        last->next = NULL;

        while (current != NULL) {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }

        head = prev;
        tail->next = head;
    }
};

int main() {
    linkedlist list1;
    list1.add_at_last(10);
    list1.add_at_last(20);
    list1.add_at_last(30);
    
    list1.make_circular();

    linkedlist list2;
    list2.add_at_last(40);
    list2.add_at_last(50);
    list2.make_circular();

    list1.merge_circular(list2);

    list1.reverse();

    return 0;
}