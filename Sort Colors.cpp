class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int n=i;
        while(n<=j){
            if(nums[n]==0){
                nums[n]=nums[i];
                nums[i]=0;
                i++;
                n++;
            }
            else if(nums[n]==2){
                nums[n]=nums[j];
                nums[j]=2;
                j--;
            }
            else n++;
        }
    }
};