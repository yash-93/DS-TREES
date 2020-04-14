#include <bits/stdc++.h>
#include "dfs.h"
using namespace std;


void heightOfNodes(struct Node* node, int height){
    if (node == NULL) return;
    heightOfNodes(node->left, height+1);
    cout << "\t" << node->data << " is on level " << height << "\n" ;
    heightOfNodes(node->right, height+1);
}

void createTree(int find_heights, int traverse, int lcaparam){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    if (find_heights == 1){
        cout << "Heights : \n";
        heightOfNodes(root, 0);
    }

    if (traverse == 1){
        traversal(root);
    }

    if (lcaparam == 1){
        int a, b;
        cout << "\n\nEnter the two nodes : ";
        cin >> a >> b;
        lca(root, a, b);
    }

    if (traverse != 1 || find_heights != 1){
        exit(0);
    }
}
