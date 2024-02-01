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

void inser_tail(Node *&head, Node *&tail, int v)
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

void search_index(Node *head, int x)
{
    int index = 0;
    bool flag = false;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val == x)
        {
            flag = true;
            break;
        }
        index++;
    }
    if (flag == true)
    {
        cout << index << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            inser_tail(head, tail, val);
        }
        int x;
        cin >> x;
        search_index(head, x);
    }
    return 0;
}