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

void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_list(Node *head)
{
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

// void normal_print_with_recursion(Node *head)
// {
//     Node *tmp = head;
//     if(tmp == NULL)
//         return;
//     cout << tmp->val << " ";
//     normal_print_with_recursion(tmp->next);
// }
// void reverse_print_with_recursion(Node *head)
// {
//     Node *tmp = head;
//     if(tmp == NULL)
//         return;
//     reverse_print_with_recursion(tmp->next);
//     cout << tmp->val << " ";
// }

// void reverse_print_with_singly_linked_list(Node *&head)
// {
//     Node *tmp = head;
//     while(tmp != NULL)
//     {
//         head = tmp->next;
//         tmp = tmp->next;
//     }
//     head->next = tmp;
//     tmp->next = NULL;
// }

void reverse_print_with_singly_linked_list(Node *&head, Node *crntVal)
{
    if (crntVal->next == NULL)
    {
        head = crntVal;
        return;
    }
    reverse_print_with_singly_linked_list(head, crntVal->next);
    crntVal->next->next = crntVal;
    crntVal->next = NULL;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val==-1) break;
        insert_at_tail(head, tail, val);
    }
    // normal_print_with_recursion(head);
    // reverse_print_with_recursion(head);
    reverse_print_with_singly_linked_list(head, head);
    print_list(head);
    return 0;
}