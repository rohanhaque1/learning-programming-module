#include <bits/stdc++.h>
using namespace std;
bool vis[105][105];
vector<pair<int, int>> v = {{-2, 1}, {-2, -1}, {-1, 2}, {-1, -2}, {1, 2}, {1, -2}, {2, 1}, {2, -1}};
int level[105][105];
int n, m;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void dfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int ci = parent.first + v[i].first;
            int cj = parent.second + v[i].second;
            if (valid(ci, cj) == true && vis[ci][cj] == false)
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[parent.first][parent.second] + 1;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int si, sj;
        cin >> si >> sj;
        int qi, qj;
        cin >> qi >> qj;
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        dfs(si, sj);
        cout << level[qi][qj] << endl;
    }
    return 0;
}