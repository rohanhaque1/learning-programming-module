#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    long long int sum = x + y;
    long long int multi = x * y;
    long long int sub = x - y;
    cout << x
         << " + "
         << y
         << " = " << sum << endl;
    cout << x
         << " * "
         << y
         << " = " << multi << endl;
    cout << x
         << " - "
         << y
         << " = " << sub << endl;
    return 0;
}
