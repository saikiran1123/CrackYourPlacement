class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0,sum=0;;
        map<int,int> kiran;
        kiran[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int s=sum%k;
            if(s<0) s+=k;
            if(kiran.find(s)!=kiran.end()){
                count+=kiran[s];
                kiran[s]+=1;
            }
            else kiran[s]=1;
        }
        
        return count;
    }
};