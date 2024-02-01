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

int list_size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;
    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
            break;
        insert_tail(head1, tail1, val1);
    }
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_tail(head2, tail2, val2);
    }
    int len1 = list_size(head1);
    int len2 = list_size(head2);
    bool flag = true;

    if (len1 != len2)
    {
        flag = false;
    }
    else
    {
        Node *tmp1 = head1;
        Node *tmp2 = head2;

        while (tmp1 != NULL && tmp2 != NULL)
        {
            if (tmp1->val != tmp2->val)
            {
                flag = false;
                break;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}