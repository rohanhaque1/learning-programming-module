#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const int N = 1e5 + 5;
int dis[N];

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        EdgeList.push_back(Edge(a, b, c));
    }
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : EdgeList)
        {
            int x, y, z;
            x = ed.u;
            y = ed.v;
            z = ed.c;
            if (dis[x] < INT_MAX && dis[x] + z < dis[y])
            {
                dis[y] = dis[x] + z;
            }
        }
    }
    bool cycle = false;
    for (Edge ed : EdgeList)
    {
        int x, y, z;
        x = ed.u;
        y = ed.v;
        z = ed.c;
        if (dis[x] < INT_MAX && dis[x] + z < dis[y])
        {
            cycle = true;
            break;
        }
    }
    if (cycle)
        cout << "Cycle Found";
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << " -> " << dis[i] << endl;
        }
    }
    return 0;
}
