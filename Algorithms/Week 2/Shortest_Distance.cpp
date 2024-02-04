#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n][n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                adj[i][j] = 0;
            else
                adj[i][j] = 1e18;
        }
    }
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (c < adj[a][b])
        {
            adj[a][b] = c;
        }
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        ll x, y;
        cin >> x >> y;
        if (adj[x][y] == 1e18)
            cout << "-1" << endl;
        else
            cout << adj[x][y] << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main()
// {
//     ll n, e;
//     cin >> n >> e;
//     ll adj[n][n];
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == j)
//             {
//                 adj[i][j] = 0;
//             }
//             else
//             {
//                 adj[i][j] = 1e18;
//             }
//         }
//     }
//     while (e--)
//     {
//         ll a, b, w;
//         cin >> a >> b >> w;
//         if (w < adj[a][b])
//         {
//             adj[a][b] = w;
//         }
//     }
//     for (int k = 1; k <= n; k++)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= n; j++)
//             {
//                 if (adj[i][k] + adj[k][j] < adj[i][j])
//                 {
//                     adj[i][j] = adj[i][k] + adj[k][j];
//                 }
//             }
//         }
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         ll x, y;
//         cin >> x >> y;
//         if (adj[x][y] == 1e18)
//         {
//             cout << "-1" << endl;
//         }
//         else
//         {
//             cout << adj[x][y] << endl;
//         }
//     }
//     return 0;
// }