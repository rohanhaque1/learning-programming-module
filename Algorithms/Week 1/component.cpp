#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
void dfs_traversal(int src)
{
    cout << src << " ";
    vis[src] = true;
    for (auto child : v[src])
    {
        if (!vis[child])
        {
            dfs_traversal(child);
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
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs_traversal(i);
            c++;
        }
    }
    cout << endl;
    cout << "component - " << c << endl;
    return 0;
}
