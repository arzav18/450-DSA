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

node* reverse(node* &head)
{
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr!=NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

node* addOne(node *head)
{
        head = reverse(head);
        bool f = true;
        node* curr = head;
        while(curr!= NULL && f==true)
        {
            if(curr->next == NULL && curr->data == 9)
            {
                curr->data = 1;
                node* temp = new node(0);
                temp->next = head;
                head = temp;
                curr = curr->next;
            }
            else if(curr->data == 9)
            {
                curr->data = 0;
                curr = curr->next;
            }
            else
            {
                curr->data = curr->data + 1;
                curr = curr->next;
                f = false;
            }

        }
        head = reverse(head);
        return head;
}

int main()
{
    node*head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    cout<<"before:";
    display(head);
    reverse(head);
    addOne(head);
    reverse(head);
    cout<<"after: ";
    display(head);
    return 0;
}
