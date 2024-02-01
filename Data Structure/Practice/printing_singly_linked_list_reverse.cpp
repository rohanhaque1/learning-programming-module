#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};

void reverse_fun(Node *head) //complexity O(n)
{
    if(head == NULL)
        return;
    // reverse print
    reverse_fun(head->next);
    cout << head->val << " ";
    // normal print
    // cout << head->val << " ";
    // reverse_fun(head->next);
}
int main()
{
    Node *head = new Node(50);
    Node *a = new Node(100);
    Node *b = new Node(200);
    Node *c = new Node(300);
    Node *d = new Node(400);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    reverse_fun(head);
    return 0;
}