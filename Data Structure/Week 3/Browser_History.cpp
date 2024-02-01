#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_position(Node *&head, Node *&tail, string s)
{
    Node *newnode = new Node(s);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = tail->next;
}
void history_check(Node *head, Node *&cur, string s)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val == s)
        {
            cout << temp->val << endl;
            cur = temp;
            return;
        }
        temp = temp->next;
    }
    cout << "Not Available" << endl;
}
void previous_tab(Node *&cur)
{
    if (cur->prev != NULL)
    {
        cout << cur->prev->val << endl;
        cur = cur->prev;
    }
    else if (cur->prev == NULL)
    {
        cout << "Not Available" << endl;
    }
}
void next_tab(Node *&cur)
{
    if (cur->next != NULL)
    {
        cout << cur->next->val << endl;
        cur = cur->next;
    }
    else if (cur->next == NULL)
    {
        cout << "Not Available" << endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *cur = NULL;
    while (true)
    {
        string s;
        cin >> s;
        if (s == "end")
        {
            break;
        }
        else
        {
            insert_at_position(head, tail, s);
        }
    }
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        string vst;
        cin >> vst;
        if (vst == "visit")
        {
            string v;
            cin >> v;
            history_check(head, cur, v);
        }
        else if (vst == "prev")
        {
            previous_tab(cur);
        }
        else if (vst == "next")
        {
            next_tab(cur);
        }
    }

    return 0;
}