class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> kiran;
        int n=nums.size();
        vector<int> arpi;
        for(int i=0;i<n;i++){
            if(kiran[nums[i]]==1){
                arpi.push_back(nums[i]);
                kiran[nums[i]]++;
            }
            else kiran[nums[i]]++;
        }
        return arpi;
    }
};