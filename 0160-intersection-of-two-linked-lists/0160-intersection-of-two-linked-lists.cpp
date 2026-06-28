/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* Pa=headA;
        ListNode* Pb=headB;
        while(Pa!=Pb){
            if(Pa==NULL){
                Pa=headB;
            }else{
                Pa=Pa->next;
            }
            if(Pb==NULL){
                Pb=headA;
            }else{
                Pb=Pb->next;
            }
        }
        return Pa;
    }
};