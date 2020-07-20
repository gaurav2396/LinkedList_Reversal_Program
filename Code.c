# LinkedList_Reversal_Program

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *next1,*prev,*current;
    if(head->next==NULL)
    {
        return head;
    }
    else
    {
        prev=NULL;
        current=head;
        while(current!=NULL)
        {
            next1=current->next;
            current->next=prev;
            prev=current;
            current=next1;

        }
    }
    return prev;
}
