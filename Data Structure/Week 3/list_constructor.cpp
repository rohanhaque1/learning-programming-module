#include <bits/stdc++.h>
using namespace std;

int main()
{
    // constructor
    // // list<int> myList;
    // // list<int> myList(20);
    // // list<int> myList(10, 5);
    // // int a[5] = {10, 20, 30, 40, 50};
    // vector<int> v = {100, 200, 300, 400};
    // // list<int> myList = {1, 2, 3, 4, 5};
    // // list<int> myList2(a, a+5);
    // list<int> myList2(v.begin(), v.end());
    // // for (auto it = myList2.begin(); it != myList2.end(); it++)
    // // {
    // //     cout << *it << endl;
    // // }
    // for(int val:myList2)
    // {
    //     cout << val << " ";
    // }

    // // capacity
    // list<int> myList = {10, 20, 30};
    // // cout << myList.max_size() << endl;
    // // myList.clear();
    // // myList.resize(2);
    // // myList.resize(5, 100);
    // cout << myList.size() << endl;
    // for (int val : myList)
    // {
    //     cout << val << " ";
    // }

    // modifires
    // list<int> mylist = {1, 3, 3, 4, 5, 3, 7};
    // list<int> newlist = {10, 20, 30, 40, 50};
    // newlist = mylist;
    // newlist.assign(mylist.begin(), mylist.end());
    // mylist.push_back(100);
    // mylist.push_front(500);
    // mylist.pop_back();
    // mylist.pop_front();
    // mylist.insert(next(mylist.begin(), 2), 500); // for inserting single value
    // mylist.insert(next(mylist.begin(), 2), {100, 200, 300, 400}); // for inserting multiple value
    // mylist.insert(next(mylist.begin(), 2), newlist.begin(), newlist.end()); // for inserting a newlist inside any position of mylist
    // mylist.erase(next(mylist.begin(), 3)); // next is the built in function for insert, delete any element at any position in a linked list, T.Complexity(O(N))
    // mylist.erase(next(mylist.begin(), 2), next(mylist.begin(), 5)); // for deleting multiple value in a certein position
    // replace(mylist.begin(), mylist.end(), 3, 10); // for replacing value
    // auto it = find(mylist.begin(), mylist.end(), 8);
    // if(it == mylist.end())
    // {
    //     cout << "Not Found";
    // }
    // else
    // {
    //     cout << "Found";
    // }

    // for (int val : mylist)
    // {
    //     cout << val << " ";
    // }

    // // operations
    // list<int> mylist = {10, 20, 30, 40, 50, 10, 10, 20, 60};
    // // mylist.remove(10);  // to remove all similer values
    // // mylist.sort();  // sort in ascending order
    // // mylist.sort(greater<int>()); // sort in descending order
    // // mylist.unique();  // it will helps us to remove duplicate values. in this case first need to sort the list then it will work.
    // // mylist.reverse(); // reverse the list

    // for(int val:mylist)
    // {
    //     cout << val << " ";
    // }

    // element access
    list<int> mylist = {10, 20, 30, 40, 50};
    // cout << mylist.back() << endl; // access the last element
    // cout << mylist.front() << endl; // access the first element
    // cout << *next(mylist.begin(), 3) << endl;  // it access the ith element. it returns iterator so that we need to dereference the functions
    return 0;
}
