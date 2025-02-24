class Solution {
    public:
        int findCenter(vector<vector<int>>& edges) {
            for(int i =0; i < edges.size(); i++ ){
                if(edges[i][0] == edges[i+1][0] || edges[i][0] == edges[i+1][1])
                return edges[i][0];
                if(edges[i][1] == edges[i+1][0] || edges[i][1] == edges[i+1][1])
                return edges[i][1];
            }
            return -1;
        }
    };