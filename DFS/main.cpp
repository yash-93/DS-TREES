#include <bits/stdc++.h>
#include "dfs.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Input 1 1 to print height of each node and traversals.
    int find_heights, traverse;
    cin >> find_heights >> traverse;
    createTree(find_heights, traverse);

    return 0;
}
