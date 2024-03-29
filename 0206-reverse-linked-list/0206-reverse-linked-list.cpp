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
    ListNode* reverseList(ListNode* head) {
        struct ListNode*ptr=head;
        if(ptr==nullptr){return head;}
        struct ListNode*newnode=new ListNode(ptr->val,nullptr);
        ptr=ptr->next;
        while(ptr!=nullptr){
            newnode=new ListNode(ptr->val,newnode);
            ptr=ptr->next;
        }
        return newnode;
    }    
};