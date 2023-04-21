#include <stdio.h>
int even(int a){
    if (a%2==0)
    return 1; 
    else 
    return 0;
}

int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    even(a);
    if (even(a)==1)
    printf("%d is even number..\n",a);
    else 
    printf("%d is odd number",a);
    return 0;
}
