class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // BRUTE
        // for(int i =0; i<n-1;i++){
        //     for(int j = i+1; j < n; j++){
        //         int sum = nums[i] + nums[j];
        //         if (sum == target) return {i, j};
        //     }
        // }
        
        //OPTIMIZED
        unordered_map<int,int>mpp;
        for(int i =0; i< n;i++){
            int complement = target - nums[i];
            if(mpp.count(complement)) return {mpp[complement],i};
            mpp[nums[i]] = i;
        }
        return {};
    }
};