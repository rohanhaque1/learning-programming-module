// #include<bits/stdc++.h>
// using namespace std;

// class Student
// {
//     public:
//         int roll;
//         int cls;
//         double gpa;
//         Student(int roll, int cls, double gpa)
//         {
//             this->roll = roll;
//             this->cls = cls;
//             this->gpa = gpa;
//         }
// };

// Student fun()
// {
//     Student rahim(3, 9, 4.54);
//     return rahim;
// }

// int main()
// {
//     Student result = fun();
//     cout << result.roll << " " << result.cls << " " << result.gpa << endl;
//     return 0;
// }


// // make a pointer for rahim variable
// #include<bits/stdc++.h>
// using namespace std;

// class Student
// {
//     public:
//         int roll;
//         int cls;
//         double gpa;
//         Student(int roll, int cls, double gpa)
//         {
//             this->roll = roll;
//             this->cls = cls;
//             this->gpa = gpa;
//         }
// };

// Student* fun()
// {
//     Student rahim(3, 9, 4.54);
//     Student *p = &rahim;
//     return p;
// }

// int main()
// {
//     Student* result = fun();
//     // cout << (*result).roll << " " << (*result).cls << " " << (*result).gpa << endl;
//     cout << result->roll << " " << result->cls << " " << result->gpa << endl;
//     return 0;
// }


// // create dynamic object
// #include<bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     int roll;
//     int cls;
//     double gpa;
//     Student(int roll, int cls, double gpa)
//     {
//         this->roll = roll;
//         this->cls = cls;
//         this->gpa = gpa;
//     }
// };

// int main()
// {
//     // normal object
//     Student rahim(34, 8, 4.66);
//     // dynamic object
//     Student * result = new Student(34, 11, 4.95);
//     cout << result->roll << " " << result->cls << " " << result->gpa << endl;
//     return 0;
// }


// function return using dynamic object
#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* fun()
{
    // use new keyword for dynamic object and return the dynamic object address as a pointer
    Student *rahim = new Student(12, 6, 3.78);
    return rahim;
}

int main()
{
    Student* result = fun();
    cout << result->roll << " " << result->cls << " " << result->gpa << endl;
    delete result;
    // cout << result->roll << " " << result->cls << " " << result->gpa << endl;
    return 0;
}
