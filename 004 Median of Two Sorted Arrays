int min(int a,int b){return a<b?a:b;}
int kth(int *nums1,int m,int *nums2,int n,int k)
{
    int a,b;
    if(m>n) return kth(nums2,n,nums1,m,k);
    if(!m) return nums2[k-1];
    if(k==1) return min(nums1[0],nums2[0]);
    a=min(k/2,m);b=k-a;
    if(nums1[a-1]<nums2[b-1])
        return kth(nums1+a,m-a,nums2,n,k-a);
    if(nums1[a-1]>nums2[b-1])
        return kth(nums1,m,nums2+b,n-b,k-b);
    return nums1[a-1];
}
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int sum=nums1Size+nums2Size;
    if(sum&1)
        return kth(nums1,nums1Size,nums2,nums2Size,sum/2+1);
    return (kth(nums1,nums1Size,nums2,nums2Size,sum/2)+kth(nums1,nums1Size,nums2,nums2Size,sum/2+1))/2.0;
}
