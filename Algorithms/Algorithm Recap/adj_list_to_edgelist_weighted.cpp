#include <bits/stdc++.h>
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

int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> v[n];
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }
    vector<Edge> edgelist;
    for (int i = 0; i < n; i++)
    {
        for (pair<int, int> child : v[i])
        {
            int childNode = child.first;
            int cost = child.second;
            edgelist.push_back(Edge(i, childNode, cost));
        }
    }
    for (Edge edge : edgelist)
    {
        cout << "{" << edge.a << " -> " << edge.b << ", = " << edge.c << "}" << endl;
    }
    return 0;
}