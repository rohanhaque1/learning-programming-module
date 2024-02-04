#include <bits/stdc++.h>
#define INF INT_MAX
using namespace std;
class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
const int N = 1e+5;
int dis[N];
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> v;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back(Edge(a, b, c));
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }
    int src;
    cin >> src;
    dis[src] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : v)
        {
            int a, b, w;
            a = ed.a;
            b = ed.b;
            w = ed.c;
            if (dis[a] < INF && dis[a] + w < dis[b])
            {
                dis[b] = dis[a] + w;
            }
        }
    }
    bool flag = false;
    for (Edge ed : v)
    {
        int a, b, w;
        a = ed.a;
        b = ed.b;
        w = ed.c;
        if (dis[a] < INF && dis[a] + w < dis[b])
        {
            flag = true;
            break;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int D;
        cin >> D;
        if (flag)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
        else
        {
            if (dis[D] == INF)
                cout << "Not Possible" << endl;
            else
                cout << dis[D] << endl;
        }
    }
    return 0;
}