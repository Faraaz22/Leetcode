class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>result;
        // BRUTE FORCE
        // for(int i =1; i <= n;i++){
        //     if(find(begin(nums), end(nums), i) == end(nums)){
        //         result.push_back(i);
        //     }
        // }
        // return result;

        //BETTER
        vector<bool>seen(n+1,false);
        for(auto i : nums) seen[i] = true;
        for(int i =1; i<= n;i++){
            if(seen[i] == false) result.push_back(i);
        } 
        return result;
    }
};