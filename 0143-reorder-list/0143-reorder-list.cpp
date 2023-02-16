class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode *slow  = head, *fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *firstHalf = head;
        ListNode *secondHalf = reverse(slow);
        
        while(firstHalf != NULL && secondHalf != NULL){
            ListNode *temp1 = firstHalf->next, *temp2 = secondHalf->next;
            firstHalf->next = secondHalf;
            secondHalf->next = temp1;
            firstHalf = temp1;
            secondHalf = temp2;
        }
        
        if(firstHalf != NULL){
            firstHalf->next = NULL;
        }
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