/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */




struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *p1=l1;
    struct ListNode *p2=l2;
    struct ListNode *first=NULL;
    struct ListNode *p3=NULL;
    int carry=0,i=0;
    while(p1!=NULL && p2!=NULL){
        int sum=p1->val+p2->val+carry;
        carry=0;
        if(sum>9){
            carry=1;
            sum=sum%10;
        }
        struct ListNode*newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->val=sum;
        newnode->next=NULL;
        if(i==0){
            p3=first=newnode;
        }else{
            p3->next=newnode;
            p3=p3->next;
        }
        p1=p1->next;
        p2=p2->next;
        i++;
    }
    while(p1!=NULL){
        struct ListNode*newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
        int sum=p1->val+carry;
        carry=0;
        if(sum>9){
            carry=1;
            sum=sum%10;
        }
        newnode->val=sum;
        newnode->next=NULL;
        p3->next=newnode;
        p3=p3->next;
        p1=p1->next;
    }
    while(p2!=NULL){
        struct ListNode*newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
        int sum=p2->val+carry;
        carry=0;
        if(sum>9){
            carry=1;
            sum=sum%10;
        }
        newnode->val=sum;
        newnode->next=NULL;
        p3->next=newnode;
        p3=p3->next;
        p2=p2->next;
    }
    if(carry==1){
        struct ListNode*newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->val=1;
        newnode->next=NULL;
        p3->next=newnode;
    }
    return(first);
}