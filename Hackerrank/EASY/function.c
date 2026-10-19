#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    int max;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max=a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    if(d>max){
        max=d;
    }
    printf("%d", max);
    
    return 0;
}
