#include<stdio.h>
int firstUniqChar(char* s) {
    int freq[26]={0};

    for(int i=0 ; s[i]!='\0';i++){
        freq[*(s+i)- 'a']++;

    }

    for(int i=0;s[i]!='\0';i++){
        if(freq[*(s+i) - 'a']==1){
            return i;
        }
    }
    return -1;
}
int main(){
    char str[]="loveleetcode";
    int result=firstUniqChar(str);
    printf("the unique characters in %s are %d\n",str,result);
    return 0;
}