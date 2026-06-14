class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
       int left=0;
       int right=n-1;
       int pos=n-1;
       vector<int>ans(n,0);
       while(left <= right){
        int squareLeft=nums[left]*nums[left];
        int squareRight=nums[right]*nums[right];
        if(squareLeft < squareRight){
            ans[pos]=squareRight;
            right--;
        }
        else{
            ans[pos]=squareLeft;
            left++;
        }
        pos--;
       }
       return ans;
    }
};