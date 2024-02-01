// #include<bits/stdc++.h>
// using namespace std;
// class Student
// {
// public:
//     char myName[100];
//     int age;
//     double cgpa;
// };
// int main()
// {
//     Student a,b;
//     // cin >> a.myName >> a.age >> a.cgpa;
//     // cin >> b.myName >> b.age >> b.cgpa;
//     // // a.age = 21;
//     // // a.cgpa = 4.00;
//     // // char tmp[100] = "Rohan";
//     // // strcpy(a.myName, tmp);

//     // cout << a.myName <<" " << a.age<<" "<< a.cgpa<< endl;
//     // cout << b.myName <<" " << b.age<<" "<< b.cgpa<< endl;

//     cin.getline(a.myName, 100);
//     cin >> a.age >> a.cgpa;
//     getchar();
//     cin.getline(b.myName, 100);
//     cin >> b.age >> b.cgpa;
//     cout << a.myName << " " << a.age << " " << a.cgpa<<endl;
//     cout << b.myName << " " << b.age << " " << b.cgpa<<endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

class Bike
{
    public:
        char name[100];
        int price;
        int speed;
        int milage;
};

int main()
{
    Bike Honda;
    cin.getline(Honda.name, 100);
    cin >> Honda.price >> Honda.speed >> Honda.milage;
    getchar();
    cout<<Honda.name<<" " << Honda.price << " " << Honda.speed << " " << Honda.milage << endl;
    cin.getline(Honda.name, 100);
    cin >> Honda.price >> Honda.speed >> Honda.milage;
    cout<<Honda.name<<" " << Honda.price << " " << Honda.speed << " " << Honda.milage << endl;
    return 0;
}
