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

void insert_tail(Node *&head, Node *&tail, int v)
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

void max_val(Node *head)
{
    Node *tmp = head;
    int max_value = INT_MIN;
    while(tmp != NULL)
    {
        if(max_value < tmp->val)
        {
            max_value = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << "max value - " << max_value << endl;
}

void print_list(Node *head)
{
    Node *tmp = head;
    cout << "List is: ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cout << "Insert value: ";
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    // print_list(head);
    max_val(head);
    return 0;
}