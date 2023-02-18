class Solution {
public:
   ListNode* reverseBetween(ListNode* head, int left, int right) {
       if(left  == right) return head;
       //finding start node from where the linked list as to beb reversed
       ListNode *leftNode = head, *prevLeft = NULL;
       for(int i = 1; i < left; i++){
           prevLeft = leftNode;
           leftNode = leftNode->next;
       }
       //reverse the sublilst;
       ListNode *prev = leftNode, *curr = leftNode->next;
       for(int i = left; i < right; i++){
           ListNode *next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = next;
       }
       leftNode->next = curr;
       
       if(prevLeft != NULL) prevLeft->next = prev; 
       else head = prev;
       
       return head;
   }
};