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
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void delete_node(Node *head, int v)
{
    Node *tmp2 = head;
    while (tmp2->next != NULL)
    {
        if (tmp2->next->val == v)
        {
            Node *deleteNode = tmp2->next;
            tmp2->next = deleteNode->next;
            delete deleteNode;
        }
        else
            tmp2 = tmp2->next;
    }
}

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    Node *tmp = head;
    while (tmp != NULL)
    {
        delete_node(tmp, tmp->val);
        tmp = tmp->next;
    }
    print_list(head);
    return 0;
}