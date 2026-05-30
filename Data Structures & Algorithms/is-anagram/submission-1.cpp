class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        map<char, int>mp1;
        for(char c:s){
            mp1[c]++;
        }
        map<char, int>mp2;
        for(char c:t){
            mp2[c]++;
        }
        return mp1==mp2;
    }
};
