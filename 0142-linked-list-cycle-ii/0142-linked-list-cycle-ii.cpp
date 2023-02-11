class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        int cycleLength = 0;
        ListNode *fast = head, *slow = head;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                ListNode *currNode = slow;
                do{
                    slow = slow->next;
                    cycleLength++;
                }while(slow != currNode);
                break;
            }
        }
        if(cycleLength == 0) return NULL;
        return startOfCycle(head, cycleLength);
    }
    ListNode *startOfCycle(ListNode *head, int cycleLength){
        ListNode *p1 = head, *p2 = head;
        while(cycleLength > 0){
            p2 = p2->next;
            cycleLength--;
        }
        
        while(p1 != p2){
            p1 = p1->next;
            p2 = p2->next;
        }
        return p1;
    }
};