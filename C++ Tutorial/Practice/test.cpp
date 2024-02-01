// #include <iostream>
// int main()
// {
//     // std::cout << "Hello World"
//     //           << " From Dubai"
//     //           << "\n"
//     //           << "Rohan";

//     int a = 10;
//     std::cout << "The result of a is "
//               << a<< std::endl<< "I am Rohan Haque";
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a;
//     char c;
//     long long int b;
//     cin >> a >> b >> c;
//     int ascii = c;
//     cout << a << endl
//          << b << endl
//          << c << endl
//          << ascii;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     long long int a=10;
//     long long int b = (long long int) (a);
//     char c='D';
//     cin >> a >> b >> c;
//     // int ascii = c;
//     cout << a << endl
//          << b << endl
//          << c << endl
//          << int(c);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a, b;
//     while(cin >>a>>b)
//     {
//         cout << a << " " << b;
//     }
//     return 0;
// }

// // setprecision
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     double a;
//     cin >> a;
//     cout << fixed << setprecision(3) << a;
//     return 0;
// }

// // condition(ternary operator)
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 10;
//     x > 5 ? cout << "Big Bang" : cout << "Chota bhim";
//     return 0;
// }

// // max and min
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     // int a,b;
//     // cin >> a >> b;
//     // int c = min(a, b);
//     // int d = max(a, b);
//     // cout << c<<endl;
//     // cout << d << endl;

//     int a, b, c, d;
//     cin >> a >> b >> c >> d;
//     int minresult = min({a, b, c, d});
//     cout << minresult;
//     return 0;
// }

// // swaping
// #include<iostream>
// #include<utility>
// using namespace std;
// // void my_swap(int *a, int *b)
// // {
// //     int tmp = *a;
// //     *a = *b;
// //     *b = tmp;
// //     // cout << a << " " << b;
// // }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     // my_swap(&a, &b);
//     swap(a, b);
//     cout << a << " " << b;
//     // int tmp = a;
//     // a = b;
//     // b = tmp;
//     // cout << a << " "<< b;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int ar[n];
//     for (int i = 0; i < n;i++)
//     {
//         cin >> ar[i];
//     }
//     for (int i = 0; i < n;i++)
//     {
//         cout << ar[i]<<endl;
//     }
//         return 0;
// }

// string length and multistring
// #include<iostream>
// #include<string.h>
// #include<string>
// using namespace std;

// int main()
// {
//     char r[100];
//     cin.getline(r, 100);
//     cout << r;
//     // cin >> r;
//     // cout << strlen(r);
//     return 0;
// }

#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    char s[100];
    int n;
    cin >> n;
    getchar();
    cin.getline(s, 100);
    cout << n << endl;
    cout << s << endl;
    return 0;
}
