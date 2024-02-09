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
void union_by_rank(int nodeA, int nodeB)
{
    int leaderA = find_leader(nodeA);
    int leaderB = find_leader(nodeB);
    if (level[leaderA] > level[leaderB])
        parent[leaderB] = leaderA;
    else if (level[leaderB] > level[leaderA])
        parent[leaderA] = leaderB;
    else
    {
        parent[leaderA] = leaderB;
        level[leaderB]++;
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    bool cycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find_leader(a);
        int leaderB = find_leader(b);
        if (leaderA == leaderB)
            cycle = true;
        else
            union_by_rank(a, b);
    }
    if (cycle)
        cout << "Yess... Cycle Found";
    else
        cout << "Nooo.. Cycle Not Found";
    return 0;
}