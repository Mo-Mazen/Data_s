struct BSTNode {
    int data;
    BSTNode *left, *right;
    BSTNode(int val) : data(val), left(NULL), right(NULL) {}
};

class BST {
    BSTNode* root;

    BSTNode* findMin(BSTNode* node) {
        while (node && node->left != NULL) node = node->left;
        return node;
    }

    BSTNode* deleteNode(BSTNode* root, int key) {
        if (root == NULL) return root;

        if (key < root->data) root->left = deleteNode(root->left, key);
        else if (key > root->data) root->right = deleteNode(root->right, key);
        else {
            
            if (root->left == NULL) {
                BSTNode* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == NULL) {
                BSTNode* temp = root->left;
                delete root;
                return temp;
            }
            
            BSTNode* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }

public:
    BST() { root = NULL; }
    void insert(int val) {
        root = insertNode(root, val);
    }
    void remove(int val) { root = deleteNode(root, val); }
};