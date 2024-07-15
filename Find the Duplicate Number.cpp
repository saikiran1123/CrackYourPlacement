class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int flag=-1;
        while(i<n){
            if(nums[i]==i+1) i++;
            
            while(nums[i]!=i+1){
                if(nums[i]==nums[nums[i]-1]){
                    flag=nums[i];
                    break;
                }
                int k=nums[i];
                int s=nums[nums[i]-1];
                nums[nums[i]-1]=k;
                nums[i]=s;
            }
            if(flag!=-1) break;
        }
        return flag;
    }
};