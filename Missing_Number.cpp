class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // TC O(2N)
        // int xorr = 0;
        // for(int i =1;i <=nums.size();i++){
        //     xorr = xorr ^i;
        // }
        // for(int i =0;i < nums.size();i++){
        //     xorr = xorr ^nums[i];
        // }
        // return xorr;

        int n = nums.size();
        vector<int>v(n+1,-1);
        for(int i =0;i<nums.size();i++){
            v[nums[i]] = nums[i];
        }
        for(int i =0;i<v.size();i++){
            if(v[i]==-1)return i;
        }
        return 0;
        }
};

// NOTE WE CAN ALSO SUM ALL NUMBERS UPTO THE RANGE AND SUBTRACT
//  THE SUM OF NUMBERS IN THE VECTOR