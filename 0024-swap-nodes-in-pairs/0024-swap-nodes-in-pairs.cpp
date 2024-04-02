/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr){return nullptr;}
        else if(head->next==nullptr){return head;}
        else{
            ListNode*ptr=head;
            ListNode*prev=nullptr;
            ListNode*temp=nullptr;
            while(ptr->next!=nullptr){
                if(ptr==head){
                    temp=head;
                    head=head->next;
                    temp->next=(temp->next)->next;
                    head->next=temp;
                    prev=temp;
                    if(temp->next==nullptr){break;}
                    else{ptr=temp->next;}
                }else{
                    temp=ptr->next;
                    prev->next=ptr->next;
                    ptr->next=temp->next;
                    temp->next=ptr;
                    prev=ptr;
                    if(ptr->next==nullptr){break;}
                    else{ptr=ptr->next;}
                }
            }

        }
        return(head);
    }
};