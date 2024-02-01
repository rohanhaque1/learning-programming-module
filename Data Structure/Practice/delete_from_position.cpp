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
void insert_at_tail(Node *&head, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        cout << endl
             << "Inserted at head" << endl
             << endl;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newnode;
    cout << endl
         << "Inserted at tail" << endl
         << endl;
}

void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Youe linked list: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

void insert_at_pos(Node *head, int pos, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    cout << "Inserted at position " << pos << endl
         << endl;
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Inserted at head" << endl
         << endl;
}

void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option - 1: Insert at Head" << endl;
        cout << "Option - 2: Insert at Tail" << endl;
        cout << "Option - 3: Print linked list" << endl;
        cout << "Option - 4: Insert at any position" << endl;
        cout << "Option - 5: Delete from any position" << endl;
        cout << "Option - 6: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 2)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 3)
        {
            print_linked_list(head);
        }
        else if (op == 4)
        {
            int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_pos(head, pos, v);
            }
        }
        else if(op==5)
        {
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            delete_from_position(head, pos);
        }
        else if (op == 6)
        {
            break;
        }
    }
    return 0;
}