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
    ListNode* mid(ListNode* head){
        ListNode* temp=head;
        ListNode* slow=temp;
        ListNode* fast=temp;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* reverselist(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* midVal=mid(head);
        ListNode* reverseL=reverselist(midVal);
        if(head==NULL) return true;
        if(head->next==NULL) return true;
        ListNode* temp=head;
        while(reverseL!=NULL){
            if(reverseL->val!=temp->val){
                return false;
            }
            temp=temp->next;
            reverseL=reverseL->next;
        }
        return true;
    }
};