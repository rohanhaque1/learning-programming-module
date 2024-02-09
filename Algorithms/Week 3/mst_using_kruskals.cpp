#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int level[N];
class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        level[i] = 0;
    }
}
int find(int node)
{
    if (parent[node] == -1)
        return node;
    return parent[node] = find(parent[node]);
}
void Union(int nodeA, int nodeB)
{
    int leaderA = find(nodeA);
    int leaderB = find(nodeB);
    if (level[leaderA] != level[leaderB])
    {
        swap(leaderA, leaderB);
    }
    parent[leaderB] = leaderA;
    level[leaderA]++;
}
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main()
{

    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    dsu_initialize(n);
    bool cycle = false;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        EdgeList.push_back(Edge(a, b, w));
    }
    sort(EdgeList.begin(), EdgeList.end(), cmp);
    int totalCost = 0;
    for (Edge ed : EdgeList)
    {
        int leaderU = find(ed.u);
        int leaderV = find(ed.v);
        if (leaderU == leaderV)
            continue;
        else
        {
            Union(ed.u, ed.v);
            totalCost += ed.w;
        }
    }
    cout << totalCost;
    return 0;
}
