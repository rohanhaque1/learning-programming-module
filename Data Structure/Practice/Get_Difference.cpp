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

int max_val(Node *head)
{
    Node *tmp = head;
    int max_value = INT_MIN;
    while (tmp != NULL)
    {
        if (max_value < tmp->val)
        {
            max_value = tmp->val;
        }
        tmp = tmp->next;
    }
    return max_value;
}

int min_val(Node *head)
{
    Node *tmp = head;
    int min_value = INT_MAX;
    while (tmp != NULL)
    {
        if (min_value > tmp->val)
        {
            min_value = tmp->val;
        }
        tmp = tmp->next;
    }
    return min_value;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    int max_value = max_val(head);
    int min_value = min_val(head);
    cout << max_value - min_value << endl;
    return 0;
}