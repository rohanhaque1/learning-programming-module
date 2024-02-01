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

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_from_position(Node *&head, int pos)
{
    if (head == NULL)
    {
        return;
    }
    if(pos ==0)
    {
        delete_head(head);
        return;
    }
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL)
        {
            return;
        }
    }
    if (tmp->next == NULL)
    {
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
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
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, v);
        }
        else if (x == 2)
        {
            if (v == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, v);
            }
        }
        print_list(head);
        cout << endl;
    }
    return 0;
}

// void delete_from_position(Node *&head, int pos)
// {
//     if (head == NULL)
//     {
//         return;
//     }

//     if (pos == 0)
//     {
//         delete_head(head);
//         return;
//     }

//     Node *tmp = head;
//     for (int i = 0; i < pos - 1; i++)
//     {
//         if (tmp == NULL || tmp->next == NULL)
//         {
//             return;
//         }
//         tmp = tmp->next;
//     }

//     Node *deleteNode = tmp->next;
//     if (deleteNode == NULL)
//     {
//         return;
//     }

//     tmp->next = tmp->next->next;
//     delete deleteNode;
// }