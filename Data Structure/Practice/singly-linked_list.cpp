// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
// };

// int main()
// {
//     Node a, b;
//     a.val = 10;
//     b.val = 20;
//     a.next = &b;
//     b.next = NULL;

//     // cout << b.val;
//     cout << a.next->val<<endl;
//     return 0;
// }

// // using constructor
// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//         int val;
//         Node *next;
//         Node(int val)
//         {
//             this->val = val;
//             this->next = NULL;
//         }
// };

// int main()
// {
//     Node a(10);
//     Node b(20);

//     a.next = &b;

//     cout << a.val << endl;
//     cout << b.val << endl;
//     cout << a.next << endl;
//     cout << b.next << endl;
//     cout << a.next->val << endl;
//     return 0;
// }

// // dynamic node
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };
// int main()
// {
//     // normal node
//     // Node head(100); // first element of the node are known as head
//     // create dynamic node
//     Node *head = new Node(100);
//     Node *a = new Node(200);
//     // link between node
//     head->next = a;

//     cout << head->val << endl;  // get the value of head
//     cout << a->val << endl;  // get the value of a
//     cout << head->next << endl;  // get the address of a inside the head node
//     cout << head->next->val << endl;  // get the address of a inside the head node and dereference the value of a node inside the head node

//     return 0;
// }

// printing singly linked list
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    Node *head = new Node(100);
    Node *a = new Node(200);
    Node *b = new Node(300);
    Node *c = new Node(400);
    Node *d = new Node(500);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // // wrost way to print node
    // cout << head->val << endl;
    // cout << head->next->val << endl;
    // cout << head->next->next->val << endl;
    // cout << head->next->next->next->val << endl;
    // cout << head->next->next->next->next->val << endl;

    // best way to print node
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    return 0;
}
