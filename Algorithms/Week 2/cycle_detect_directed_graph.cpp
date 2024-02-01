#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
bool pathVis[N];
bool ans;

void dfs_cycle(int src)
{
    vis[src] = true;
    pathVis[src] = true;
    for (auto child : v[src])
    {
        if (pathVis[child])
        {
            ans = true;
        }
        if (!vis[child])
        {
            dfs_cycle(child);
        }
    }
    // kaj sesh then pathvisit
    pathVis[src] = false;
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
    }
    memset(vis, false, sizeof(vis));
    memset(pathVis, false, sizeof(pathVis));
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs_cycle(i);
        }
    }
    if (ans)
        cout << "Cycle found" << endl;
    else
        cout << "Cycle not found" << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 5;
// vector<int> v[N];
// bool vis[N];
// bool pathVis[N];
// bool ans;

// void dfs_cycle(int parent)
// {
//     vis[parent] = true;
//     pathVis[parent] = true;
//     for (int child : v[parent])
//     {
//         if (pathVis[child])
//             ans = true;
//         if (!vis[child])
//         {
//             dfs_cycle(child);
//         }
//     }
//     pathVis[parent] = false;
// }
// int main()
// {
//     int n, e;
//     while (e--)
//     {
//         int a, b;
//         cin >> a >> b;
//         v[a].push_back(b);
//     }
//     memset(vis, false, sizeof(vis));
//     memset(pathVis, false, sizeof(pathVis));
//     for (int i = 0; i < n; i++)
//     {
//         if (!vis[i])
//         {
//             dfs_cycle(i);
//         }
//     }
//     if (ans)
//         cout << "Cycle Found";
//     else
//         cout << "Cycle Not Found";
//     return 0;
// }
