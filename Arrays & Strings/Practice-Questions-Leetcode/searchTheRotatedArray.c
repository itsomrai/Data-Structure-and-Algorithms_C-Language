//CONCEPT IS LINEAR SEARCH
int search(int* nums, int numsSize, int target) {
    int low=0;
    int high=numsSize-1;
    while(low<=high){
        int mid =low + (high -low)/2;
        if(nums[mid]==target){
            return mid;
        }
        //case1: left half is sorted
        if(nums[low]<=nums[mid]){
            if(target >= nums[low]&& target <nums[mid])
            high =mid-1;
            else low= mid+1;       
            }
            //case2: right half is sorted 
            else{
                if(target>nums[mid]&& target<=nums[high])
                low= mid +1;
                else high=mid -1;
            }
    }
    return -1;
}
   