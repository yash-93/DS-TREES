struct Node{
    int data;
    struct Node *left, *right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

void createTree(int find_heights, int traverse);
void traversal(struct Node* node);
