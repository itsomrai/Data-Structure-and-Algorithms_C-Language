#include<stdio.h>
int removeDuplicates(int arr[], int size) {
    int temp[100];//temporary array to store unique elements
    int count=0;//number of unique elements

    for(int i=0;i<size; i++){
        int isDuplicate=0;

        //check if the array is already i the temp array
        for(int j=0;j<count;j++){
            if(arr[i]==temp[j]){
                isDuplicate=1;
                break;
            }
        }
        if(isDuplicate==0){
            temp[count]=arr[i];
            count++;
        }
    }
    for(int i=0;i<count;i++){
        arr[i]=temp[i];
    }
return count;
}
int main(){
    int arr[]={5,3,5,2,2,6};
    int size=6;

    size=removeDuplicates(arr,size);
    //print result
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}

