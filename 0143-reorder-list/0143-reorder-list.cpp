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
    ListNode* middle(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* reverseList(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL) return;
        ListNode* midVal=middle(head);
        ListNode* reverseNode=reverseList(midVal->next);

        midVal->next = NULL;
        
        ListNode* temp=head;
        ListNode* dummy=new ListNode(-1);
        ListNode* temp1=dummy;
        while(midVal!=NULL && reverseNode!=NULL){
            temp1->next=temp;
            temp1=temp1->next;
            temp=temp->next;

            temp1->next=reverseNode;
            temp1=temp1->next;
            reverseNode=reverseNode->next;
        }
        if(midVal!=NULL){
            temp1->next=temp;
        }else{
            temp1->next=reverseNode;
        }
        head=dummy->next;
    }
};