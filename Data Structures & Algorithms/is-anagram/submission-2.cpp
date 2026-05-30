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
        auto it1=mp1.begin();
        auto it2=mp2.begin();
        while(it1!= mp1.end()){
            if(it1->first != it2->first || it1->second != it2->second){
                return false;
            }
            it1++;
            it2++;
        }
        return true;
    }
};
