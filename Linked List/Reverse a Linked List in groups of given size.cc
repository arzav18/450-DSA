#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node*next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = n;
}

void display(node* head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node* reverse(node* &head, int k)
{
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    int c = 0;

    while(currptr!=NULL && c<k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
        c++;
    }
    if(nextptr!=NULL)
    {
        head->next = reverse(nextptr,k);
    }
    return prevptr;
}

int main()
{
    int k;
    cin>>k;
    node*head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
    display(head);

    node* newhead = reverse(head,k);
    display(newhead);
    return 0;
}

