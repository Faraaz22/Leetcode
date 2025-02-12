class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        int maxsum = -1;
        // brute
    //     vector<int>mapsum(n);
    //     for(int i=0; i<n;i++){
    //         int num = nums[i];
    //         int sum =0;
    //         while(num){
    //             int temp = num%10;
    //             sum += temp;
    //             num = num/10;
    //         }
    //         mapsum[i] = sum;
    //     }
    //  for(int i=0; i<n;i++){
    //     for(int j = i+1; j < n;j++){
    //         if(mapsum[i] == mapsum[j]) maxsum = max(maxsum,nums[i]+nums[j]);
    //     }
    //  }

    // optimal
    unordered_map<int,int>mpp;
    for(auto num:nums){
        int sum =0;
        int originalnum = num;
        while(num){
                int temp = num%10;
                sum += temp;
                num = num/10;
            }
            if(mpp.find(sum) != mpp.end()){
                maxsum = max(maxsum, originalnum + mpp[sum]);
            }
        // Store the maximum number for the current digit sum
        mpp[sum] = max(mpp[sum], originalnum);
    }
     return maxsum;
    }
};