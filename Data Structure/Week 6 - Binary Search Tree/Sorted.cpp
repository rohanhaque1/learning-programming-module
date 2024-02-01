#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        list<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        a.sort();
        a.unique();
        for (int val : a)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}
