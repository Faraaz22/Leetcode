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
        ListNode* swapPairs(ListNode* head) {
            if(head== NULL )return NULL;
            if(head->next == NULL) return head;
           ListNode* curr = head;
           ListNode* succesor = curr->next;
           int i = 1;
           while(succesor ){
            if(i % 2 != 0){
            int temp =curr->val;
            curr->val =succesor->val;
            succesor->val = temp;
            }
            curr = curr->next;
            succesor = succesor->next;
            i++;
           } 
           return head;
        }
    };