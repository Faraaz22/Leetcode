class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int currsum =nums[0];
        int maxsum=currsum;
        if(nums.size() == 1) return currsum;
        for(int i =1; i< nums.size() ; i++){
            if(nums[i] > nums[i-1]){//ascending
            currsum += nums[i];
            }else{//not ascending
                currsum = nums[i];
            }
            maxsum = max(maxsum, currsum);
        }
        return maxsum;
    }
};