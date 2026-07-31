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
    ListNode* reverseList(ListNode* head){
        ListNode* prev=NULL;
        ListNode* next=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* updated(ListNode* head, int n){
        if(head==NULL) return head;
        ListNode* temp=head;
        if(n==1) {
            ListNode* del=head;
            head=head->next;
            delete del;
            return head;
        }
        int count=1;
        while(temp->next!=NULL){
            count++;
            if(count==n){
                ListNode* del=temp->next;
                temp->next=del->next;
                delete del;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* reversal=reverseList(head);
        ListNode* newList=updated(reversal,n);
        ListNode* finalList=reverseList(newList);
        return finalList;
    }
};