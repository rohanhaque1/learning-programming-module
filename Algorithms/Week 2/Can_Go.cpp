#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 1e+5;
vector<pair<ll, ll>> v[N];
ll dis[N];
class cmp
{
public:
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<ll, ll> parent = pq.top();
        pq.pop();
        ll parentNode = parent.first;
        ll parentCost = parent.second;

        for (pair<ll, ll> child : v[parentNode])
        {
            ll childNode = child.first;
            ll childCost = child.second;
            if (parentCost + childCost < dis[childNode])
            {
                dis[childNode] = parentCost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}
int main()
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = 1e+18;
    }
    ll src;
    cin >> src;
    dijkstra(src);
    ll t;
    cin >> t;
    while (t--)
    {
        ll d, dw;
        cin >> d >> dw;
        if (dis[d] <= dw)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}