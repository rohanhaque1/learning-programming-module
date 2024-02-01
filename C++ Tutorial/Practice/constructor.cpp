// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     int roll;
//     int cls;
//     double gpa;
//     // using normal constructor
//     // Student(int r, int c, double g)
//     // {
//     //     roll = r;
//     //     cls = c;
//     //     gpa = g;
//     // }

//     // using this keyword inside constructor
//     Student(int roll, int cls, double gpa)
//     {
//         this->roll = roll;    //(*this).roll=roll
//         this->cls = cls;      //(*this).cls=cls
//         this->gpa = gpa;      //(*this).gpa=gpa
//     }
// };
// int main()
// {
//     Student rahim(50, 9, 4.69);
//     Student karim(90, 2, 5.01);
//     cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
//     cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

class Bike
{
    public:
        // char name[100];
        int price;
        int speed;
        int milage;
        // Bike(int p,int s,int m)
        // {
        //     price = p;
        //     speed = s;
        //     milage = m;
        // }

        // Or using this keyword
        Bike(int price, int speed, int milage)
        {
            this->price = price;
            this->speed = speed;
            this->milage = milage;
        }
};

int main()
{
    Bike Yamaha(500000, 200, 35);
    Bike Royal_Enfield(600000, 350, 30);
    Bike Kawasaki(860000, 550, 45);
    cout << Yamaha.price << " " << Yamaha.speed << " " << Yamaha.milage << endl;
    cout << Royal_Enfield.price << " " << Royal_Enfield.speed << " " << Royal_Enfield.milage << endl;
    cout << Kawasaki.price << " " << Kawasaki.speed << " " << Kawasaki.milage << endl;
    return 0;
}
