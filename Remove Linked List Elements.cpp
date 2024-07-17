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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* ans = new ListNode(0);
        ans->next = head;
        ListNode* temp=ans;
        while(temp!=NULL){
            if(temp->next!=NULL && temp->next->val==val)
                temp->next=temp->next->next;
            else temp=temp->next;
        }
        return ans->next;
    }
};