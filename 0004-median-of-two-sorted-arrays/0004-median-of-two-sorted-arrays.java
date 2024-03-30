class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int x=nums1.length,y=nums2.length,i=0,j=0,k=0;
        int [] mergedarray=new int[x+y];
        float median=0;
        while(i<x && j<y){
            if(nums1[i]<nums2[j]){mergedarray[k]=nums1[i];i++;k++;}
            else{mergedarray[k]=nums2[j];j++;k++;}
        }
        while(i<x){mergedarray[k]=nums1[i];i++;k++;}
        while(j<y){mergedarray[k]=nums2[j];j++;k++;}
        if((x+y)%2==0){
            median=(mergedarray[(x+y)/2]+mergedarray[((x+y)/2)-1]);
            median=median/2;
        }
        else{median=mergedarray[(x+y)/2];}
        return median;
    }
}