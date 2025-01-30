class Solution {
public:
    vector<int> countBits(int n) {
    //  vector<int>ans;
    //  for(int i =0; i <= n; i++){
    //     int sum = 0;
    //     int num = i;
    //     while(num != 0){
    //         sum += num%2;
    //         num = num /2;
    //     }
    //     ans.push_back(sum);
    //  }   
    //  return ans;
    // DYNAMIC PROGRAMMING SOLUTION
    vector<int>dp(n+1, 0);
    int off = 1;
    for(int i =1; i <=n;i++){
        if(off*2 == i) off = i;
        dp[i] = 1 + dp[i - off];
    }
    return dp;
    }
};