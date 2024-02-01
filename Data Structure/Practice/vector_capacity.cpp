#include <bits/stdc++.h>
using namespace std;

int main()
{
    // // Type 1 - v.size()
    // vector<int> v;
    // cout << v.size() << endl;

    // // Type 2 - v.maz_size()
    // vector<int> v;
    // cout << v.max_size() << endl;

    // // Type 3 - v.capacity()
    // vector<int> v;  // capacity 0
    // vector<int> v={1, 2, 4, 3};  // capacity 4
    // cout << v.capacity() << endl;

    // // Type 4 - v.clear()
    // vector<int> v = {1, 2, 4, 5};
    // v.clear();
    // cout << v.size();

    // Type 5 - v.empty()
    // vector<int> v = {1, 2, 4, 5};
    // cout << v.empty();

    // Type 6 - v.resize()
    vector<int> v = {1, 3, 5, 3, 2};
    v.resize(3);
    // v.resize(7, 9);
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
