

/*
Node is defined as 

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    Node * insert(Node * root, int dataa) {
        if(root == NULL) {
            return new Node(dataa);
        }
        if(dataa <= root->data) {
            root->left = insert(root->left,dataa);
        }
        else {
            root->right = insert(root->right,dataa);
        }
        return root;
    }

