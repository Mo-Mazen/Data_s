struct DNode {
    int data;
    DNode *next, *prev;
};

class DoublyLinkedList {
    DNode* head;
public:
    DoublyLinkedList() { head = NULL; }

    void insert_front(int val) {
        DNode* newNode = new DNode{val, head, NULL};
        if (head != NULL) head->prev = newNode;
        head = newNode;
    }

    void delete_node(int val) {
        DNode* curr = head;
        while (curr != NULL && curr->data != val) curr = curr->next;
        if (curr == NULL) return;

        if (curr->prev != NULL) curr->prev->next = curr->next;
        else head = curr->next;

        if (curr->next != NULL) curr->next->prev = curr->prev;
        delete curr;
    }
};