#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int level[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        level[i] = 0;
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
void dsu_union_by_level(int nodeA, int nodeB)
{
    int leaderA = find_leader(nodeA);
    int leaderB = find_leader(nodeB);
    if (level[leaderA] > level[leaderB])
    {
        parent[leaderB] = leaderA;
    }
    else if (level[leaderB] > level[leaderA])
    {
        parent[leaderA] = leaderB;
    }
    else
    {
        parent[leaderB] = leaderA;
        level[leaderA]++;
    }
}
int main()
{
    dsu_initialize(7);
    dsu_union_by_level(1, 2);
    dsu_union_by_level(2, 3);
    dsu_union_by_level(4, 5);
    dsu_union_by_level(5, 6);
    dsu_union_by_level(1, 4);
    cout << find_leader(1) << endl;
    cout << find_leader(4) << endl;
    return 0;
}