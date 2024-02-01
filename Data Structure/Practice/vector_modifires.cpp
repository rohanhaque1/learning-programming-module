#include <bits/stdc++.h>
using namespace std;

int main()
{
    // // Type 1
    // vector<int> v = {10, 20, 30, 50};
    // vector<int> x = {1, 2, 4, 6};
    // v = x; // O(1)
    // // vector<int> v = {10, 20, 30, 50};
    // // vector<int> x = {1, 2, 4};
    // // v = x; // O(N)
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // // Typw 2
    // vector<int> v = {10, 20, 39, 49};
    // // v.push_back(20);
    // v.pop_back();
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // // Type 3
    // vector<int> v = {1, 2, 3, 4};
    // vector<int> x = {100, 200, 300, 400};
    // // v.insert(v.begin() + 2, 10);
    // v.insert(v.begin() + 3, x.begin(), x.end());  // insert another vector
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // // Type 4
    // vector<int> v = {1, 2, 3, 4, 5};
    // // v.erase(v.begin() + 3);  // delete single element
    // v.erase(v.begin() + 1, v.begin()+3);  // delete multiple element or
    // v.erase(v.begin() + 1, v.end()-1);  // delete multiple element
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // // Type 5 - replace all 5 with 500
    // vector<int> v = {1, 5, 3, 4, 5, 6, 7, 8, 5, 10};
    // // replace(v.begin(), v.end(), 5, 500);
    // replace(v.begin(), v.end() - 4, 5, 500);  // or specific portion
    // // for (int i = 0; i < v.size(); i++)
    // // {
    // //     cout << v[i] << " ";
    // // }
    // // or using range based for loop
    // for(int x:v)
    // {
    //     cout << x << " ";
    // }

    // Type 6 - find
    vector<int> v = {1, 5, 3, 4, 5, 6, 7, 8, 5, 10};
    // vector<int>::iterator it;
    // it = find(v.begin(), v.end(), 10);
    auto it = find(v.begin(), v.end(), 100);
    if (it == v.end())
        cout << "Not Found"<<endl;
    else
    {
        cout << "Found"<<endl;
    }
    // cout << *it << endl;
    return 0;
}
