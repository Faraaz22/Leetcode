class Solution {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            vector<int>res;
            unordered_set<int>s1(nums1.begin(), nums1.end());
            unordered_set<int>s2(nums2.begin(), nums2.end());
            for(auto i : s1 ){
                if(s2.count(i)) res.push_back(i);
            }
            return res;
        }
    };