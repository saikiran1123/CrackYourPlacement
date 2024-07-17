class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=m+n-1,i=m-1,j=n-1;
        if(n==0) return;
        if(m==0){
            for(int z=0;z<n;z++){
                nums1[z]=nums2[z];
            }
            return;
        }
        while(i<m && j<n && i>=0 && j>=0 && k>=0){
            if(nums1[i]>=nums2[j]){
                nums1[k]=nums1[i];
                nums1[i]=0;
                cout<<k<<" ";
                k--;
                i--;
                
            }
            else if(nums1[i]<nums2[j]){
                nums1[k]=nums2[j];
                cout<<k<<" ";
                k--;
                j--;
            }

            if(i==-1){
                for(int z=0;z<=j;z++){
                    nums1[z]=nums2[z];
                }
            }
        }
    }
};