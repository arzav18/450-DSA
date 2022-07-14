class Solution{
  public:
    bool isPalindrome(ListNode* head)
    {
        if(head==NULL || head->next==NULL)
            return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = reverseList(slow->next);
        slow = slow->next;
        while(slow!=NULL)
        {
            if(head->val!=slow->val) return false;
            slow = slow->next;
            head = head->next;
        }
        return true;
    }
    ListNode* reverseList(ListNode* head)
    {
        ListNode* prevptr = NULL;
        ListNode* currptr = head;
        ListNode* nextptr;
        while(currptr!=NULL)
        {
            nextptr = currptr->next;
            currptr->next = prevptr;
            prevptr = currptr;
            currptr = nextptr;
        }
        return prevptr;
    }
};
