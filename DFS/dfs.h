struct Node{
    int data;
    struct Node *left, *right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

void createTree(int find_heights, int traverse, int lcaparam);
void traversal(struct Node* node);
void lca(struct Node* node, int a, int b);
