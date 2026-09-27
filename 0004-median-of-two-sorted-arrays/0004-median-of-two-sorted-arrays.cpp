class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size())
            swap(nums1,nums2);

        int m=nums1.size(),n=nums2.size();
        int low=0,high=m;

        while(low<=high){
            int i=(low+high)/2;
            int j=(m+n+1)/2-i;

            int a=(i>0)?nums1[i-1]:INT_MIN;
            int b=(i<m)?nums1[i]:INT_MAX;
            int c=(j>0)?nums2[j-1]:INT_MIN;
            int d=(j<n)?nums2[j]:INT_MAX;

            if(a<=d&&c<=b){
                if((m+n)%2)
                    return max(a,c);
                return (max(a,c)+min(b,d))/2.0;
            }
            else if(a>d)
                high=i-1;
            else
                low=i+1;
        }

        return 0.0;
    }
};