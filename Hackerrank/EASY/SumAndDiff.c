#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int a,b;
    float x,y;
    scanf("%d %d\n %f %f",&a,&b,&x,&y);
    int sum=a+b;
    int subs=a-b;
    float sum1=x+y;
    float subs1=x-y;
    printf("%d %d\n",sum,subs);
    printf("%.1f %.1f",sum1,subs1);
    return 0;
}
