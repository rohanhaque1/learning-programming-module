#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005];

void bfs(int src, int des)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;
    bool levelFound = false;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int parent = p.first;
        int parentLevel = p.second;
        if (parent == des)
        {
            cout << parentLevel << endl;
            levelFound = true;
        }
        for (int child : v[parent])
        {
            if (!vis[child])
            {
                q.push({child, parentLevel + 1});
                vis[child] = true;
            }
        }
    }
    if (!levelFound)
    {
        cout << -1 << endl;
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    bfs(src, 3);
    return 0;
}
