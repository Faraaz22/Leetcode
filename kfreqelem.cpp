class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mapp;
        vector<int>result;
        priority_queue<pair<int, int>> maxHeap;
     for(auto num: nums){
        mapp[num]++;
     }  
     for(auto elem: mapp){
            maxHeap.push({elem.second, elem.first});
        }
    for(int i =0; i <k;i++){
        result.push_back(maxHeap.top().second);
        maxHeap.pop();
    }
    return result;
    }
};