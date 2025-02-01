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
    bool isPalindrome(ListNode* head) {
        vector<int>store;
        if(head ==  NULL) return false;
        if(head->next == NULL) return true;
        // TWO POINTERS APPROACH
    //     while(head){
    //         store.push_back(head->val);
    //         head = head->next;
    //     }
    //     int left = 0;
    //     int right = store.size()-1;
    //     while(store[left] == store[right] && left < right){
    //         left++;
    //         right--;
    //     }
    //    return left>=right;

    // STACK APPROACH
    stack<int>st;
    ListNode* curr = head;
    while(curr){
        st.push(curr->val);
        curr =curr->next;
    }
    curr =head;
    while(curr && curr->val == st.top()){
        st.pop();
        curr = curr->next;
    }
    return st.empty();
    }
};