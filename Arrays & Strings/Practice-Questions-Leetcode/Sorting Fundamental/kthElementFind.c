#include<stdio.h>
int findKthLargest(int* nums, int numsSize, int k) {
    int left =0;
    int right=numsSize - 1;
    int target=numsSize-k;

    while(left<=right){
        int pivot=nums[right];
        int i=left;

        for(int j=left;j<right;j++){
            if(nums[j]<=pivot){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                i++;
            }
        }
        nums[right]=nums[i];
        nums[i]=pivot;

        if(i==target){
            return nums[i];
        }else if(i<target){
            left=i+1;
        }else{
            right=i-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=3;
    int result=findKthLargest(arr,size,target);
    printf("%d",result);
    return 0;
}