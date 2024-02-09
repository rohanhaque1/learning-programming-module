#include <bits/stdc++.h>
#define ll long long int
using namespace std;
class disti
{
public:
    ll a, b, w;
    disti(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};
const ll N = 1e+5;
ll dis[N];
int main()
{
    ll n, e;
    cin >> n >> e;
    vector<disti> v;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v.push_back(disti(a, b, w));
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = 1e+18;
    }
    ll src;
    cin >> src;
    dis[src] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (disti ed : v)
        {
            int a, b, w;
            a = ed.a;
            b = ed.b;
            w = ed.w;
            if (dis[a] < 1e+18 && dis[a] + w < dis[b])
            {
                dis[b] = dis[a] + w;
            }
        }
    }
    bool flag = false;
    for (disti ed : v)
    {
        int a, b, w;
        a = ed.a;
        b = ed.b;
        w = ed.w;
        if (dis[a] < INT_MAX && dis[a] + w < dis[b])
        {
            flag = true;
            break;
        }
    }
    ll t;
    cin >> t;
    while (t--)
    {

        int D;
        cin >> D;
        if (flag)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
        else
        {

            if (dis[D] == 1e+18)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[D] << endl;
            }
        }
    }
    return 0;
}