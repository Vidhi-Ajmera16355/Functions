#include <stdio.h>
int cube(int c){
    return c*c*c;
}
int main()
{
    int c;
    printf("Enter a number:\n");
    scanf("%d",&c);
    int k= cube(c);
    printf("%d",k);
    return 0;
}
