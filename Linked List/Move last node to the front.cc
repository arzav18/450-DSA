void moveToFront(node* &head)
{
    if(head==NULL || head->next==NULL)
        return;
    node* secLast = NULL;
    node* last = head;
    while(last->next != NULL)
    {
        secLast = last;
        last = last->next;
    }
    secLast->next = NULL;
    last->next = head;
    head = last;
    return head;
}
