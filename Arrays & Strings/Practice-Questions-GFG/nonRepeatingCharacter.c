#include<stdio.h>
#include<string.h>
char nonRepeatingChar(char *s) {
    // Array to store the frequency of 26 lowercase English letters
    int freq[26] = {0};
    
    // Step 1: Count frequencies of each character
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }
    
    // Step 2: Find the first unique character
    for (int i = 0; s[i] != '\0'; i++) {
        if (freq[s[i] - 'a'] == 1) {
            return s[i];
        }
    }
    
    // Return '$' if no non-repeating character exists
    return '$';
}
int main() {
    // Test Case 1: Standard string with a unique character
    char str1[] = "geeksforgeeks";
    printf("Input: %s -> Output: %c\n", str1, nonRepeatingChar(str1)); // Expected: f

    // Test Case 2: All characters repeat
    char str2[] = "aabbcc";
    printf("Input: %s -> Output: %c\n", str2, nonRepeatingChar(str2)); // Expected: $

    // Test Case 3: First character itself is unique
    char str3[] = "racecar";
    printf("Input: %s -> Output: %c\n", str3, nonRepeatingChar(str3)); // Expected: e

    return 0;
}    
