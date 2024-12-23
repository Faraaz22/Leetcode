class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size(); 
        int ans = 0;
        for(int i =0; i < n-1;i++){
            int X = abs(points[i+1][0] - points[i][0]);
            int Y = abs(points[i+1][1] - points[i][1]);
            ans += max(X,Y);
        }
        return ans;
    }
};
// USE CHEBYSHEV DISTANCE FORMULA
// The time to move between two points is simply the maximum of the horizontal and vertical differences.
//  This is because the Chebyshev distance between two points (x1, y1) and (x2, y2) is defined as:
// Chebyshev distance = max(|x2 - x1|, |y2 - y1|)
// In the context of the problem, you want to move from one point to another using the minimum time,
//  and the time to move between any two points will be the Chebyshev distance.
