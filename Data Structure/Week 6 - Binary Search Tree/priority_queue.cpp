// // for max heap
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     priority_queue<int> pq;
//     while(true)
//     {
//         int c;
//         cin >> c;
//         if(c==0) // push korar jonno
//         {
//             int x;
//             cin >> x;
//             pq.push(x);  // o(logN) e push hoye gache
//         }
//         else if(c == 1) // delete korar jonno
//         {
//             pq.pop(); // o(logN) e delete hoye gache
//         }
//         else if(c== 2) // top er value dekhar jonno
//         {
//             cout << pq.top() << endl;  // o(1)
//         }
//         else break;
//     }
//     return 0;
// }




// for min heap
#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    while (true)
    {
        int c;
        cin >> c;
        if (c == 0) // push korar jonno
        {
            int x;
            cin >> x;
            pq.push(x); // o(logN) e push hoye gache
        }
        else if (c == 1) // delete korar jonno
        {
            pq.pop(); // o(logN) e delete hoye gache
        }
        else if (c == 2) // top er value dekhar jonno
        {
            cout << pq.top() << endl; // o(1)
        }
        else
            break;
    }
    return 0;
}
