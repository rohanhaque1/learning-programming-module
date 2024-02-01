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

void insert_at_head(Node *&head, Node *&tail, int val) // T.complexity O(1)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_any_position(Node *head, int pos, int val) // T.complexity O(n)
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
    // tmp = newNode->prev;  !?
    newNode->prev = tmp;
}

void insert_tail(Node *&head, Node *&tail, int val) // T.complexity O(1)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int list_size(Node *head) // T.complexity O(n)
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

void print_normal(Node *head) // T.complexity O(n)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail) // T.complexity O(n)
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
    // Node *head = NULL;
    // Node *tail = NULL;

    int val;
    cin >> val;
    insert_tail(head, tail, val);

    // int val, pos;
    // cin >> pos >> val;
    // if (pos == 0)
    // {
    //     insert_at_head(head, tail, val);
    // }
    // else if (pos == list_size(head))
    // {
    //     insert_tail(tail, val);
    // }
    // else if (pos >= list_size(head))
    // {
    //     cout << "Invalid position" << endl;
    // }
    // else
    // {
    //     insert_at_any_position(head, pos, val);
    // }

    print_normal(head);
    print_reverse(tail);
    return 0;
}