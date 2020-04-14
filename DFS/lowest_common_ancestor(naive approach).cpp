#include <bits/stdc++.h>
#include "dfs.h"
using namespace std;

bool dfs(struct Node* node, vector<int>& path, int val){
    if (node == NULL) return false;
    path.push_back(node->data);

    if (node->data == val){
        return true;
    }

    if (dfs(node->left, path, val) || dfs(node->right, path, val)){
        return true;
    }

    path.pop_back();
    return false;
}

void lca(struct Node* node, int a, int b){
    vector<int> a_path, b_path;
    int i;
    if (dfs(node, a_path, a) && dfs(node, b_path, b)){
        for (i = 0; i < min(a_path.size(), b_path.size()); i++){
            if (a_path[i] != b_path[i]) break;
        }
        cout << "LCA is " << a_path[i-1] << "\n";
    }
    else
    {
        cout << "\nNo LCA exist.\n";
    }


}
