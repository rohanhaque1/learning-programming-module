#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print_normal(Node *head)
{
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *tmp2 = tail;
    while(tmp2 != NULL)
    {
        cout << tmp2->val << " ";
        tmp2 = tmp2->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    // cout << head->next->val << endl;  // head er next mane a, tar value mane a er value = 20
    // cout << a->next->val << endl;  // a er next mane b, tar value mane b er value = 30
    // cout << b->prev->val << endl;  // b er prev mane a, tar value mane a er value = 20
    // cout << a->prev->val << endl;  // a er prev mane head, tar value mane head er value = 10

    print_normal(head);
    print_reverse(tail);
    return 0;
}