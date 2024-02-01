#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
bool ans;
int parentArray[N];

void bfs_cycle(int parent)
{
    queue<int> q;
    q.push(parent);
    vis[parent] = true;
    while (!q.empty())
    {
        int fr = q.front();
        q.pop();
        for (int child : v[fr])
        {
            if (vis[child] && parentArray[parent] != child)
                ans = true;
            if (!vis[child])
            {
                q.push(child);
                parentArray[child] = parent;
                vis[child] = true;
            }
        }
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
    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
    ans = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            bfs_cycle(i);
        }
    }
    if (ans)
        cout << "Connected";
    else
        cout << "Not Connected";
    return 0;
}
