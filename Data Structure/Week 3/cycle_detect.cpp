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

// void insert_tail(Node *&head, Node *&tail, int val) // T.complexity O(1)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     tail->next = newNode;
//     newNode->prev = tail;
//     tail = tail->next;
// }

// void print_normal(Node *head) // T.complexity O(n)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }

int main()
{
    // Node *head = NULL;
    // Node *tail = NULL;
    // int val;
    // while (true)
    // {
    //     cin >> val;
    //     if (val == -1)
    //         break;
    //     insert_tail(head, tail, val);
    // }

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = a;

    Node *slow = head;
    Node *fast = head;
    bool flag = false;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "Cycle Detected" << endl;
    else
        cout << "No Cycle Detect" << endl;
    return 0;
}
