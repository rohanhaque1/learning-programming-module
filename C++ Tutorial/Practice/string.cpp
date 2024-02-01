// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // shortcut for loop / ranged based for loop in string
//     string s;
//     cin >> s;
//     for(char c:s)
//     {
//         cout << c << endl;
//     }
//     return 0;
// }

// word printing using stringstream
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);
//     // stringstream x(s);  //or
//     stringstream x;
//     x << s;
//     string word;
//     while(x>>word)
//     {
//     cout << word << endl;
//     }
//     return 0;
// }

// // word printing using stringstream in recursion
// #include<bits/stdc++.h>
// using namespace std;

// void print_word(stringstream &ss)
// {
//     string word;
//     if(ss>>word)
//     {
//         cout << word << endl;
//         print_word(ss);
//     }
// }

// int main()
// {
//     string s;
//     getline(cin, s);
//     stringstream ss(s);
//     print_word(ss);
//     return 0;
// }

// reverse word printing

// // reference
// #include<bits/stdc++.h>
// using namespace std;

// void print(string &x)  // & diye dile reference bujhay
// {
//     x = "Mohaiminul Haque";
// }

// int main()
// {
//     string s="Rohan Haque";
//     print(s);
//     cout << s << endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void print_word(stringstream &ss)
// {
//     string word;
//     if(ss>>word)
//     {
//         print_word(ss);
//         cout << word << endl;
//     }
// }

// int main()
// {
//     string s;
//     getline(cin, s);
//     stringstream ss(s);
//     print_word(ss);
//     return 0;
// }

// // function inside class
// // #include<bits/stdc++.h>
// // using namespace std;

// // class Person{
// //     public:
// //         string name;
// //         int age;
// //         Person(string nm, int ag){
// //             name=nm;
// //             age = ag;
// //         }
// //         void print_hello()
// //         {
// //             // cout << "Hello" << endl;
// //             cout << name << " " << age << endl;
// //         }
// // };

// // int main()
// // {
// //     Person rohan("Rohan haque", 21);
// //     rohan.print_hello();
// //     // cout << rohan.name << " " << rohan.age << endl;
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;

// class Person{
//     public:
//         string name;
//         int age;
//         int mark1;
//         int mark2;
//         Person(string nm, int ag, int mk1, int mk2){
//             name=nm;
//             age = ag;
//             mark1 = mk1;
//             mark2 = mk2;
//         }
//         int total_mark()
//         {
//             return mark1 + mark2;
//         }
// };

// int main()
// {
//     Person rohan("Rohan haque", 21, 98, 100);
//     cout<< rohan.total_mark()<<endl;
//     return 0;
// }

// // this keyword
// #include<bits/stdc++.h>
// using namespace std;

// class Person{
//     public:
//         string name;
//         int age;
//         Person(string name, int age){
//             this->name=name;
//             this->age=age;
//         }
// };

// int main()
// {
//     Person rohan("Rohan haque", 21);
//     cout << rohan.name << " " << rohan.age << endl;
//     return 0;
// }

// // copy dynamic object
// #include <bits/stdc++.h>
// using namespace std;
// class Person
// {
// public:
//     string name;
//     int age;
//     Person(string name, int age)
//     {
//         this->name = name;
//         this->age = age;
//     }
// };
// int main()
// {
//     Person *rohan = new Person("Rohan Haque", 21);
//     Person *moni = new Person("Sirajum Monira", 20);
//     *rohan = *moni;
//     // delete moni;
//     cout << rohan->name << endl;
//     return 0;
// }
