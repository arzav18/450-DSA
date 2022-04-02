#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void removeDuplicates(node* head)
{
    node* temp = head;
    node* nextNode;

    if(temp==NULL)
    {
        return;
    }
    while(temp->next!=NULL)
    {
        if(temp->data == temp->next->data)
        {
            nextNode = temp->next->next;
            free(temp->next);
            temp->next = nextNode;
        }
        else
        {
            temp = temp->next;
        }
    }
}

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

int main()
{
    node*head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,4);
    insertAtTail(head,5);
    cout<<"before:";
    display(head);
    removeDuplicates(head);
    cout<<"after:";
    display(head);
    return 0;
}
