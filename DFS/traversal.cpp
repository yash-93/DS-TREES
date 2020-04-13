#include <bits/stdc++.h>
#include "dfs.h"
using namespace std;

void Inorder(struct Node* node){
    if (node == NULL) return;
    Inorder(node->left);
    cout << node->data << " ";
    Inorder(node->right);
}

void Preorder(struct Node* node){
    if (node == NULL) return;
    cout << node->data << " ";
    Preorder(node->left);
    Preorder(node->right);
}

void Postorder(struct Node* node){
    if (node == NULL) return;
    Postorder(node->left);
    Postorder(node->right);
    cout << node->data << " ";
}

void traversal(struct Node* node){
    cout << "\nInorder : ";
    Inorder(node);  // Left Root Right
    cout << "\nPreorder : ";
    Preorder(node);  // Root Left Right
    cout << "\nPostorder : ";
    Postorder(node);  // Left Right Root
}
