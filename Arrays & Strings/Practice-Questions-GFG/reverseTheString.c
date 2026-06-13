//CONCEPT: SWAPPING
#include<stdio.h>
#include<string.h>
char* reverseString(char* s) {
    int left =0;
    int right=strlen(s)-1;
    char temp;
    while(left<right){
        temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        
        left++;
        right--;
    }
    //return s; GFG STUF
}
int main() {
    char s[] = "GeeksforGeeks";
    
    reverseString(s);
    printf("Reversed: %s\n", s);
    
    return 0;
}