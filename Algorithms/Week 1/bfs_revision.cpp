// // Normal bfs traversal
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> v[1005];
// bool vis[1005];

// void bfs_traversal(int src)
// {
//     queue<int> q;
//     q.push(src);
//     vis[src] = true;
//     while (!q.empty())
//     {
//         int fr = q.front();
//         q.pop();
//         cout << fr << " ";
//         for (auto child : v[fr])
//         {
//             if (!vis[child])
//             {
//                 q.push(child);
//                 vis[child] = true;
//             }
//         }
//     }
// }

// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     while (e--)
//     {
//         int a, b;
//         cin >> a >> b;
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }
//     int src;
//     cin >> src;
//     memset(vis, false, sizeof(vis));
//     bfs_traversal(src);
//     return 0;
// }

// // BFS level track
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> v[1005];
// bool vis[1005];
// int level[1005];
// void bfs_traversal(int src)
// {
//     queue<int> q;
//     q.push(src);
//     vis[src] = true;
//     level[src] = 0;
//     while (!q.empty())
//     {
//         int fr = q.front();
//         q.pop();
//         cout << fr << " ";
//         for (auto child : v[fr])
//         {
//             if (!vis[child])
//             {
//                 q.push(child);
//                 vis[child] = true;
//                 level[child] = level[fr] + 1;
//             }
//         }
//     }
//     cout << endl;
// }

// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     while (e--)
//     {
//         int a, b;
//         cin >> a >> b;
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }
//     int src;
//     cin >> src;
//     memset(vis, false, sizeof(vis));
//     memset(level, -1, sizeof(level));
//     bfs_traversal(src);
//     for (int i = src; i < n; i++)
//     {
//         cout << "Level of " << i << " is " << level[i] << endl;
//     }
//     return 0;
// }

// // BFS level traversal with pair
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> v[1005];
// bool vis[1005];

// void bfs_traversal(int src, int dest)
// {
//     queue<pair<int, int>> q;
//     q.push({src, 0});
//     vis[src] = true;
//     bool findLevel = false;
//     while (!q.empty())
//     {
//         pair<int, int> p = q.front();
//         q.pop();
//         int fr = p.first;
//         int level = p.second;
//         if (fr == dest)
//         {
//             cout << level << endl;
//             findLevel = true;
//         }
//         for (auto child : v[fr])
//         {
//             if (!vis[child])
//             {
//                 q.push({child, level + 1});
//                 vis[child] = true;
//             }
//         }
//     }
//     if (!findLevel)
//     {
//         cout << -1 << endl;
//     }
// }

// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     while (e--)
//     {
//         int a, b;
//         cin >> a >> b;
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }
//     int src;
//     cin >> src;
//     memset(vis, false, sizeof(vis));
//     bfs_traversal(src, 5);
//     return 0;
// }

// BFS path printing
#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005];
int parent[1005];

void path_print(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int fr = p.first;
        int level = p.second;
        for (auto child : v[fr])
        {
            if (!vis[child])
            {
                q.push({child, level + 1});
                vis[child] = true;
                parent[child] = fr;
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
    int src, destination;
    cin >> src >> destination;
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    path_print(src);
    int x = destination;
    vector<int> path;
    while (x != -1)
    {
        path.push_back(x);
        x = parent[x];
    }
    reverse(path.begin(), path.end());
    for (auto val : path)
    {
        cout << val << " ";
    }
    return 0;
}
