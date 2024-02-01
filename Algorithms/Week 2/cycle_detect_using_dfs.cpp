#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
bool ans;
int parentArray[N];

void dfs_cycle(int parent)
{
    vis[parent] = true;
    for (int child : v[parent])
    {
        if (vis[child] && parentArray[parent] != child)
            ans = true;
        if (!vis[child])
        {
            parentArray[child] = parent;
            dfs_cycle(child);
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
            dfs_cycle(i);
        }
    }
    if (ans)
        cout << "Cycle Detected";
    else
        cout << "Cycle not detected";
    return 0;
}
