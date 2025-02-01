class Solution {
public:
vector<vector<int>>result;
unordered_set<int>st;
int n;
void solve(vector<int>temp, vector<int>nums){
    if(temp.size() == n){
        result.push_back(temp);
        return;
    }
    for(auto num: nums){
        if(st.find(num) == st.end()){
            temp.push_back(num);
            st.insert(num);
            solve(temp,nums);
            temp.pop_back();
            st.erase(num);
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        n = nums.size();
        vector<int>temp;
        solve(temp,nums);
        return result;
    }
};