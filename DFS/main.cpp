#include <bits/stdc++.h>
#include "dfs.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Input integer except 0s to print height of each node
    int find_heights;
    cin >> find_heights;
    createTree(find_heights);

    return 0;
}
