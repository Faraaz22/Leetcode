class Solution {
    public:
        vector<int> minOperations(string boxes) {
            vector<int>result;
            for(int i =0; i < boxes.length();i++){
                int moves = 0;
                for(int j =0; j < boxes.length();j++){
                    if(boxes[j] == '1') moves += abs(i-j);
                }
                result.push_back(moves);
            }
            return result;
        }
    };