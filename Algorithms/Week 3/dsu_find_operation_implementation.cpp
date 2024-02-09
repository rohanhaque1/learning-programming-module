#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
    }
    parent[2] = 3;
    parent[3] = 4;
}
// // Naive approach
// int find_leader(int node)  // Time complexity O(N)
// {
//     if (parent[node] == -1)
//     {
//         return node;
//     }
//     return find_leader(parent[node]);
// }

// Optimize approach using path compression
int find_leader(int node) // Time complexity O(logN)
{
    if (parent[node] == -1)
    {
        return node;
    }
    int leader = find_leader(parent[node]);
    parent[node] = leader;
    return leader;
}
int main()
{
    dsu_initialize(7);
    cout << find_leader(0) << endl;
    cout << find_leader(1) << endl;
    cout << find_leader(2) << endl;
    cout << find_leader(3) << endl;
    cout << find_leader(4) << endl;
    cout << find_leader(5) << endl;
    cout << find_leader(6) << endl;
    return 0;
}
