class Solution {
    public:
        vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
            unordered_map<int,int>mapp;
            vector<int>result;
            for(auto num : nums1){
                mapp[num]++;
            }
            for(auto num : nums2){
                if(mapp[num] > 0){
                    result.push_back(num);
                    mapp[num]--;
                }
            }
            return result;
        }
    };