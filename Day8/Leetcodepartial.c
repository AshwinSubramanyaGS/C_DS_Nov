struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode* temp1=NULL;
    struct ListNode* insertAtBegin(struct ListNode* head,struct ListNode* temp);
    struct ListNode* deleteAtend(struct ListNode* head);

    while(k>0)
    {
        temp1=deleteAtend(head);
        head=insertAtBegin(head,temp1);
        k--;
    }
    return head;


}

struct ListNode* insertAtBegin(struct ListNode* head,struct ListNode* temp)
{
    temp->next=head;
    return temp;
}

struct ListNode* deleteAtend(struct ListNode* head)
{
    struct ListNode *temp=head,*t2=NULL;
    while(temp->next->next!=NULL)
        temp=temp->next;
    t2=temp->next;
    temp->next=NULL;
    return t2;
}