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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        stack<int> st;

        ListNode* newHead  = NULL;
        while(head != NULL){
            ListNode *next = head ->next;
            head->next = newHead;
            newHead = head;
            head = next;
        }
        
        while(newHead != nullptr){
            if(st.empty()) ans.push_back(0);
            else if(!st.empty() && st.top() > newHead->val) ans.push_back(st.top());
            else if(!st.empty() && st.top() <= newHead->val){
                while(!st.empty() && st.top() <= newHead->val){
                    st.pop();
                }
                if(!st.empty()) ans.push_back(st.top());
                else  ans.push_back(0);
            }
            st.push(newHead->val);
            newHead = newHead->next;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};