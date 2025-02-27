class Solution {
    public:
        bool areOccurrencesEqual(string s) {
            unordered_map<char,int>mapp;
            for(char c: s){
                mapp[c]++;
            }
            int val = mapp[s[0]];
            for(auto c: s){
                if(mapp[c] != val ) return false;
            }
            return true;
        }
    };