class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        vector<int>ans;
        // BRUTE FORCE O(N^2)
        // for(int i =0;i < n;i++){
        //     count = 0;
        //     for(int j =0;j < n;j++){
        //         if(nums[j] < nums[i]) count++;
        // }   
        // ans.push_back(count);
        // }

        // BETTER
        map<int,int> mp;    
        vector<int> temp=nums;
        
        sort(temp.begin(),temp.end());
        for(int i=n-1;i>=0;i--)
            mp[temp[i]]=i;
        
        for(int i=0;i<n;i++)
            nums[i]=mp[nums[i]];
        
        return nums;
    }
};