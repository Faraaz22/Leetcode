class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // TC- O(N^2), SC- O(N^2)
        // for(int i =0; i < nums.size(); i++){
        //     for(int j=i+1; j < nums.size(); j++){
        //         if(nums[i] == nums[j]) return true;
        //     }
        // }
        // return false; 

        // TC- O(N), SC- O(N)
        unordered_set<int>numSet;
        for(int i =0; i< nums.size(); i++){
            if(numSet.find(nums[i]) != numSet.end()) return true;

            numSet.insert(nums[i]);
        }
        return false;

        // We can also use set lenght to determine true or false
        // if set length is same as nums length then true else false
    }
};