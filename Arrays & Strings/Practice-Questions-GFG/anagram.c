#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int areAnagrams(char *s1, char *s2) {
    if(strlen(s1) != strlen(s2)){
      return false;
    }
    int count[26]={0};
    
    for(int i=0;s1[i]!='\0';i++){
        count[s1[i]-'a']++;
        count[s2[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    char s1[]="listen";
    char s2[]="silent";

    if(areAnagrams(s1,s2)){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    return 0;
}
