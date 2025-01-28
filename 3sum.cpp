class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        set<vector<int>>set;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        // O(N3)
        // for(int i =0; i <n; i++){
        //     for(int j =i+1; j <n; j++){
        //         for(int k =j+1; k <n; k++){
        //             if(nums[i] + nums[j] + nums[k] == 0 && i != j && i != k && j != k){
        //                 set.insert({nums[i],nums[j],nums[k]});
        //             }
        //         }
        //     }
        // }
        // for(auto it : set){
        //     res.push_back(it);
        // }

        // Better Solution
        for(int i =0;i<n-2;i++){
            if( i > 0 && nums[i] == nums[i-1]) continue;
            int low = i+1, high = n-1;
            while(low < high){
                if(nums[i] + nums[low]+ nums[high] < 0) low++;
                else if(nums[i] + nums[low]+ nums[high] > 0) high--;
                else {
                    res.push_back({nums[i],nums[low],nums[high]});
                    // Remove repeating solutions 
                    while(low < high && nums[low] == nums[low+1]) low++;
                    while(low < high && nums[high] == nums[high-1]) high--;
                    low++;
                    high--;
                }
            }
        }
        return res;
    }
};