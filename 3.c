#include <stdio.h>
int min(int a, int b){
    return (a<b) ? a:b; 
}
int max(int a , int b){
    return (a>b) ? a:b;
}
int main()
{
    int a,b;
    printf("Enter two number:\n");
    scanf("%d %d",&a,&b);
    int minimum= min(a,b);
    printf("%d is minimum number..\n",minimum);
    int maximum= max(a,b);
    printf("%d is maximum number..",maximum);
    return 0;
}
