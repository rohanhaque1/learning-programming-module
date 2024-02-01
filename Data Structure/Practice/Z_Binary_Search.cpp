// // normal search
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, q;
//     cin >> n >> q;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     while (q--)
//     {
//         int x;
//         cin >> x;
//         bool flag = false;
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] == x)
//             {
//                 flag = true;
//                 break;
//             }
//         }
//         if (flag)
//         {
//             cout << "found" << endl;
//         }
//         else
//         {
//             cout << "not found" << endl;
//         }
//     }
//     return 0;
// }

// binary search for time complexity
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    while (q--)
    {
        int x;
        cin >> x;
        int l = 0;
        int r = n - 1;
        bool flag = false;
        while (l <= r)
        {
            int mid_point = (l + r) / 2;
            if (a[mid_point] == x)
            {
                flag = true;
                break;
            }
            if (x > a[mid_point])
            {
                l = mid_point + 1;
            }
            else
            {
                r = mid_point - 1;
            }
        }
        if (flag == true)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}
