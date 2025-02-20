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
        ListNode* mergeKLists(vector<ListNode*>& lists) {
            // make min heap
            if(lists.size() == 0) return NULL;
            ListNode* head = NULL;
            priority_queue<int, vector<int>, greater<int>> minHeap;
            for(int i = 0 ; i < lists.size(); i++){
                ListNode* temp = lists[i];
                if(!temp) continue;
                while(temp){
                    minHeap.push(temp->val);
                    temp = temp->next;
                }  
            }
            // pop elements into the linked list
            if(!minHeap.size()) return head;
            head= new ListNode(minHeap.top());
            ListNode* curr=head;
            minHeap.pop();
            while(minHeap.size()){
                curr->next = new ListNode(minHeap.top());
                minHeap.pop();
                curr =curr->next;
            }
            return head;
        }
    };