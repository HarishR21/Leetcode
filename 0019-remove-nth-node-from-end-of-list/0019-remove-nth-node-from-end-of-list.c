/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode*ptr=head;
    int length=0;
    while(ptr!=NULL){
        length++;
        ptr=ptr->next;
    }
    int x=length-n;

    if(x==0){
        ptr=head->next;
        return(ptr);
    }else{
        ptr=head;
        while(x>1){
            ptr=ptr->next;
            x--;
        }
        ptr->next=(ptr->next)->next;
        return(head);
    }
    
}