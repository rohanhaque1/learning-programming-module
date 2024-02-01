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

void insert_at_head(Node *&head, int v) //complexity O(1)  // jehetu head update hobe tai head er pointer reference niye kaj korte hobe
{
    Node *newNode = new Node(v);  // Create a newnode for insert at head position
    newNode->next = head;  // newnode er address e head ke bosiye head connect kore dite hobe
    head = newNode;  // ekhon newnode ke update kore head baniye dite hobe
}

void insert_any_position(Node *head, int pos, int v) //complexity O(n)
{
    Node *newNode = new Node(v);       // jehetu new node insert hobe tai eta kora hoyeche
    Node *tmp = head;                  // head ke tmp dhore kaj korte hobe
    for (int i = 1; i <= pos - 1; i++) // jei position e newnode insert hobe sei position porjonto loop caliye jete hobe
    {
        tmp = tmp->next; // barbar tmp er value change hote thakbe loop er moddhe
    }
    newNode->next = tmp->next; // jei position e newnode insert hobe sei position er address ke newnode er next/address e bosate hobe
    tmp->next = newNode;       // jei position e newnode insert hobe sei position er ager node er address update kore newnode ke er sathe connect kore dite hobe
}

void insert_at_tail(Node *&head, Node *&tail, int v) //complexity O(1)
{
    Node *newNode = new Node(v);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void delete_at_position(Node *head, int pos)
{
    Node *tmp = head; // head ke tmp dhore kaj korte hobe
    for (int i = 1; i <= pos - 1; i++) // jei position e node delete hobe sei position porjonto loop caliye jete hobe
    {
        tmp = tmp->next; // barbar tmp er value change hote thakbe loop er moddhe
    }
    Node *deleteNode = tmp->next;  // ekta new node banate hobe and sei node er moddhe je position er node ke delete kprte hobe sei position er address rakhte hobe
    tmp->next = tmp->next->next;  // jei node delete kora hobe sei node er ager and porer 2 ta node ke connection koriye dite hobe. jehetu tmp er porer node delete hobe and tar porer node er sathe connect hobe sehetu tmp er address update hoye tmp er porer address(delete node er address) and tar porer address diye update korte hobe.
    delete deleteNode;
}

void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

int list_size(Node *head) //complexity O(n)
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

void print_linked_lis(Node *head)
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
    Node *head = new Node(5000);
    Node *a = new Node(100);
    Node *b = new Node(200);
    Node *c = new Node(300);
    Node *d = new Node(400);
    Node *tail = d;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    int pos, val;
    cout << "Insert position: ";
    cin >> pos >> val;
    if (pos > list_size(head))
    {
        cout << "Invalid index" << endl;
    }
    else if (pos==0)
    {
        insert_at_head(head, val);
    }
    else if(pos==list_size(head))
    {
        insert_at_tail(head, tail, val);
    }
    else
    {
        insert_any_position(head, pos, val);
    }
    delete_at_position(head, pos);
    print_linked_lis(head);
    return 0;
}