#include <bits/stdc++.h>
using namespace std;
const int N = 3005;
bool vis[N][N];
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
char a[N][N];
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
        int ci = si + v[i].first;
        int cj = sj + v[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] != '-')
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    dfs(si, sj);
    if (vis[di][dj])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}