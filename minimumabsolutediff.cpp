class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
     sort(arr.begin(), arr.end());  
     int n = arr.size();
     int mindiff= INT_MAX;
     vector<vector<int>>result;
     for(int i=1; i< n; i++){
            mindiff = min(mindiff, arr[i]- arr[i-1]);
     }
     for(int i=1; i< n; i++){
        if((arr[i]- arr[i-1]) == mindiff ){
            mindiff = min(mindiff, arr[i]- arr[i-1]);
            result.push_back({arr[i-1], arr[i]});
        }
     } 
     return result;
    }
};