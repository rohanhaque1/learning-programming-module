#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_node = v.size() - 1;
        while (cur_node != 0)
        {
            int parent_node = (cur_node - 1) / 2;
            if (v[parent_node] < v[cur_node])
            {
                swap(v[parent_node], v[cur_node]);
            }
            else
                break;
            cur_node = parent_node;
        }
    }
    for (int val : v)
        cout << val << " ";
    return 0;
}
