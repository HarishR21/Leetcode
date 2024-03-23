/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* l1=list1;
    struct ListNode* l2=list2;
    struct ListNode* newnode=NULL;
    struct ListNode* list3=NULL;
    struct ListNode* l3=NULL;

    while(l1!=NULL && l2!=NULL){
        while((l1!=NULL && l2!=NULL) && l1->val<=l2->val){
            newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
            newnode->val=l1->val;
            newnode->next=NULL;
            if(list3==NULL){
                list3=l3=newnode;
            }else{
                l3->next=newnode;
                l3=l3->next;
            }
            l1=l1->next;
        }
        while((l1!=NULL && l2!=NULL) && l2->val<=l1->val){
            newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
            newnode->val=l2->val;
            newnode->next=NULL;
            if(list3==NULL){
                list3=l3=newnode;
            }else{
                l3->next=newnode;
                l3=l3->next;
            }
            l2=l2->next;
        }
    }
    while(l1!=NULL){
        newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->val=l1->val;
        newnode->next=NULL;
        if(list3==NULL){
            list3=l3=newnode;
        }else{
            l3->next=newnode;
            l3=l3->next;
        }
        l1=l1->next;
    }
    while(l2!=NULL ){
        newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->val=l2->val;
        newnode->next=NULL;
        if(list3==NULL){
            list3=l3=newnode;
        }else{
            l3->next=newnode;
            l3=l3->next;
        }
        l2=l2->next;
    }
    
    return(list3);
}