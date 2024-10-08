class Solution {
private:
    ListNode* getMiddle(ListNode* head){
        if(head == NULL || head -> next == NULL){
            return head;
        }

        if(head -> next -> next == NULL){
            return head->next;
        }

        ListNode* slow = head;
        ListNode* fast = head -> next;

        while(fast != NULL){
            fast = fast -> next;
            if(fast != NULL){
                fast = fast -> next;
            }

            slow = slow -> next;
        }

        return slow;
    }
public:
    ListNode* middleNode(ListNode* head) {
       return getMiddle(head);
    }
};
