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

void delete_head(Node *&head, Node *&tail) // T.complexity O(1)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

void delete_tail(Node *&head, Node *&tail) // T.complexity O(1)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if(tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void delete_at_position(Node *head, int pos) // T.complexity O(n)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
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

    // // if there is only one value to delete
    // Node *head = new Node(10);
    // Node *tail = head;

    int pos;
    cin >> pos;
    if(pos >= list_size(head))
    {
        cout << "Invalid position" << endl;
    }
    else if(pos == 0)
    {
        delete_head(head, tail);
    }
    else if(pos == list_size(head) -1)
    {
        delete_tail(head, tail);
    }
    else
        delete_at_position(head, pos);

    print_normal(head);
    print_reverse(tail);
    return 0;
}