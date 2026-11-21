class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m=nums1.size();
        int n=nums2.size();
        int arr[2000];
        int i=0,j=0,k=0;

        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                arr[k]=nums1[i];
                i++;
            }
            else{
                arr[k]=nums2[j];
                j++;
            }
            k++;
        }
        while(i<m){
            arr[k]= nums1[i];
            i++;
            k++;
        }
        while(j<n){
            arr[k]=nums2[j];
            j++;
            k++;
        }
        int total=m+n;
        if(total%2==1){
            return arr[total/2];
        }
        else{
            return (arr[total/2]+arr[total/2-1])/2.0;
        
        }
    }
};