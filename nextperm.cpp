class Solution {
    public:
        void nextPermutation(vector<int>& nums) {
            int  n= nums.size();
            int i= n-2;
            // Find the breakpoint 
            while(i >= 0 && nums[i] >= nums[i+1]){
                i--;
            }
            // find the samllest element larger than the number
            if(i >= 0){
                int j = n-1;
                while(nums[j] <= nums[i]) j--;
                // Swap the numbers
                swap(nums[i], nums[j]);
            }
            // Reverse subarray to the right of i
            reverse(nums.begin() + i + 1, nums.end());
        }
    };