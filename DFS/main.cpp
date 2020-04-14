#include <bits/stdc++.h>
#include "dfs.h"
using namespace std;

int main()
{
    // Input 1 1 to print height of each node and traversals.
    int find_heights, traverse, lcaparam;
    cin >> find_heights >> traverse >> lcaparam;
    createTree(find_heights, traverse, lcaparam);

    return 0;
}
