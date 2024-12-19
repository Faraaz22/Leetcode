class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>>result;
    sort(nums.begin(),nums.end());
    set<vector<int>>set;
    int low,high;
    int n = nums.size();
    for(int i =0; i < n-3;i++){
        for(int j =i+1;j < n-2; j++){
            low = j+1;
            high=n-1;
            long long newTarget = (long long)target - nums[i] - nums[j];
            while(low <high){
                if(nums[low] + nums[high] < newTarget) low++;
                else if(nums[low] + nums[high] > newTarget) high--;
                else{
                    set.insert({nums[i], nums[j], nums[low],nums[high]});
                    low++;
                    high--;
                }
            }
        }
    }
    for(auto it: set) result.push_back(it);
    return result;
    }
};

// 1. SORT 
// 2. Take first two elements using loops i and j. 
// i runs only till n-3((n-1) - last two elements) and j runs till n-2(n-1 - last element)
// 3.take low as the first element after loop  and high as the last element 
// find the difference between the first two values and target
// 4. add low and high to reach the newtarget, if its less increse low if its more increase high
// if the sum is equal to target then add the current four numbers to a set and move both low and high
// 5. Repeat this process for all possible pairs of i and j
// 6. Return the set of all unique combinations that sum up to target