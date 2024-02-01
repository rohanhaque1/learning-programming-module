#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> v;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        // // make pair
        // v.push_back(make_pair(a, b));

        // or more simple way to make pair
        v.push_back({a, b});
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }

    // // or shortcut
    // for (pair<int, int> p : v)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }

    // or more shortcut to auto detect
    for (auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}
