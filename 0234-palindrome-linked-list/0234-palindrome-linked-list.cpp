class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *reversedList = reverse(slow);
        while(head != NULL && reversedList != NULL){
            if(head->val != reversedList->val) return false;
            head = head->next;
            reversedList = reversedList->next;
        }
        return true;
    }
    ListNode *reverse(ListNode *head){
        ListNode *nextNode, *prevNode = NULL;
        while(head != NULL){
            nextNode = head->next;
            head->next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        return prevNode;
    }
};