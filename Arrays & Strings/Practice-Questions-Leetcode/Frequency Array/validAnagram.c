#include<stdio.h>
#include <stdbool.h>
#include <string.h>
bool isAnagram(char* s, char* t) {
    if(strlen(s)!=strlen(t))
    return false;
    int arr[26]={0};

    for(int i=0; s[i]!='\0'; i++){
        arr[s[i]-'a']++;
        arr[t[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(arr[i]!=0)
        return false;
    }
    return true;
    }
int main(){

    char s1[]="anagram";
    char t1[]="nagaram";
    char s2[]="cat";
    char t2[]="rat";
    printf("Test 1 (\"anagram\", \"nagaram\"): %s\n", isAnagram(s1,t1)? "passed" : "failed");
    printf("Test 2 (\"cat\", \"rat\"): %s\n", isAnagram(s2,t2)? "passed" : "failed");
    return 0;
    }