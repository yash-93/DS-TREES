#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left, *right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

void DFS(struct Node* node, int height){
    if (node == NULL) return;
    DFS(node->left, height+1);
    cout << node->data << " is on level " << height << "\n" ;
    DFS(node->right, height+1);
}

void createTree(int find_heights){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    if (!find_heights){
        cout << "Aborting...";
        exit(0);
    }
    else{
        DFS(root, 0);
    }
}
