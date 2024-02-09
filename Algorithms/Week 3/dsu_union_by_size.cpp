#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int group_size[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}
int find_leader(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = find_leader(parent[node]);
    parent[node] = leader;
    return leader;
}
void dsu_union_by_size(int nodeA, int nodeB) // Time complexity near constant : 4 / O(logN) / O(alphaM)
{
    int leaderA = find_leader(nodeA);
    int leaderB = find_leader(nodeB);
    if (group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}
int main()
{
    dsu_initialize(7);
    dsu_union_by_size(1, 2);
    dsu_union_by_size(2, 3);
    dsu_union_by_size(4, 5);
    dsu_union_by_size(5, 6);
    dsu_union_by_size(3, 4);
    cout << find_leader(2) << endl;
    cout << find_leader(4) << endl;
    return 0;
}