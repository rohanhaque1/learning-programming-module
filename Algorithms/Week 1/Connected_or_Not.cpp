#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
int parent[N];

void bfs_traversal(int src)
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
    }
    int q;
    cin >> q;
    while (q--)
    {

        int A, B;
        cin >> A >> B;
        bool flag = false;
        for (int child : v[A])
        {
            if (child == B)
            {
                flag = true;
            }
        }

        if (flag == true || A == B)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}