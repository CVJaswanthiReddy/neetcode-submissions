class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>>ans;
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        for(auto &p:mp){
            ans.push_back({p.first, p.second});
        }
        sort(ans.begin(),ans.end(),[]
        (const pair<int,int>&a , const pair<int,int>&b){
            return a.second > b.second;
        }
        );
        vector<int>res;
        for(int i=0;i<k && i<ans.size();i++){
            res.push_back(ans[i].first);
        }
        return res;
    }
};
