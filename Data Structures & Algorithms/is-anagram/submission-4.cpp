class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>ans(26,0);
        int n=s.length();
        if(s.length() != t.length()){
            return false;
        }
        for(int i=0;i<n;i++){
            int c= s[i]-'a';
            ans[c]++;
            int d=t[i]-'a';
            ans[d]--;
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i] !=0){
                return false;
            }
        }
        return true;
    }
};
