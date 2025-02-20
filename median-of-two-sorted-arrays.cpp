class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            vector<int>mergedarr;
            int n1 = nums1.size();
            int n2 = nums2.size();
            for(int i = 0; i < n1;i++){
                mergedarr.push_back(nums1[i]);
            }
            for(int i = 0 ; i < n2;i++){
                mergedarr.push_back(nums2[i]);
            }
            int n = mergedarr.size(); 
            sort(mergedarr.begin(), mergedarr.end());
            if(n%2== 0){
                return double((mergedarr[n/2 - 1] + mergedarr[n/2])/2.0); 
            }else{
            return double(mergedarr[n/2]);
            }
            return 0;
        }
    };