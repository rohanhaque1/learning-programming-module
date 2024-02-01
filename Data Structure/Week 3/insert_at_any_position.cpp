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

void insert_at_any_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    // tmp = newNode->prev;
    newNode->prev = tmp;
}

int list_size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *tmp2 = tail;
    while (tmp2 != NULL)
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
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    // cout << head->next->val << endl;  // head er next mane a, tar value mane a er value = 20
    // cout << a->next->val << endl;  // a er next mane b, tar value mane b er value = 30
    // cout << b->prev->val << endl;  // b er prev mane a, tar value mane a er value = 20
    // cout << a->prev->val << endl;  // a er prev mane head, tar value mane head er value = 10

    int val, pos;
    cin >> pos >> val;
    if (pos >= list_size(head))
    {
        cout << "Invalid position" << endl;
    }
    else
    {
        insert_at_any_position(head, pos, val);
    }

    print_normal(head);
    print_reverse(tail);
    return 0;
}