class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        while(head){
            ListNode* nxt=head->next;
            head->next=prev;
            prev=head;
            head=nxt;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow=reverse(slow);
        while(slow){
            if(head->val!=slow->val)
                return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
};
