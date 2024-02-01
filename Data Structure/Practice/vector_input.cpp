#include <bits/stdc++.h>
using namespace std;

int main()
{
    // // Type 1
    // vector<int> v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // for (int val : v)
    // {
    //     cout << val << " ";
    // }

    // Type 2 - Take input like array (simple way)
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}
