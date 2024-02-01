#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
char a[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] != '#')
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    int ax, ay, bx, by;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'A')
            {
                ax = i;
                ay = j;
            }
            else if (a[i][j] == 'B')
            {
                bx = i;
                by = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    dfs(ax, ay);
    if (vis[bx][by])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}