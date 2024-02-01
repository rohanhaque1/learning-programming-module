#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> arr[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        // for undirected graph
        arr[a].push_back(b);
        arr[b].push_back(a);
        
        // // for directed graph
        // arr[a].push_back(b);
    }
    // vector<int> v;
    // for (int i = 0; i < arr[0].size(); i++)
    // {
    //     cout << arr[0][i] << " ";
    // }

    // or
    for(int v:arr[1])
    {
        cout << v << " ";
    }
    return 0;
}
