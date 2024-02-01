// // normal pair
// #include <bits/stdc++.h>
// using namespace std;

// class Pair
// {
// public:
//     int first, second;
//     void make_pair(int a, int b)
//     {
//         first = a;
//         second = b;
//     }
// };

// int main()
// {
//     Pair p;
//     // p.first = 10;
//     // p.second = 20;
//     // or
//     p.make_pair(50, 100);
//     cout << p.first << " " << p.second << endl;
//     return 0;
// }

// STL pair
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<string, int> p;
    p = make_pair("Rohan", 50);
    cout << p.first << " " << p.second << endl;
    return 0;
}
