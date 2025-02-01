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
    ListNode* middleNode(ListNode* head) {
        int len =0;
        struct ListNode* ptr1 = head;
        struct ListNode* ptr2 = head;
        while(ptr1 != NULL){
            ptr1= ptr1 ->next;
            len++;
        }
        len = (int)len/2;
        while(len != 0){
            ptr2 = ptr2->next;
            len--;
        }
        return ptr2;
    }
};