class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int left=0;
       while(left < nums.size()){
        if(nums[left] == 0){
            int j=left+1;
            while(j<nums.size()){
                if(nums[j] !=0){
                    int temp=nums[j];
                    nums[j]=nums[left];
                    nums[left]=temp;
                    break;
                }
                j++;
            }
           
        }
        left++;
       }
    }
};