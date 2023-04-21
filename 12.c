#include <stdio.h>
int even(int n){
    for(int i=1; i<=n; i++)
    {   if(i%2 == 0) printf("Even are %d\n", i);
    }
    for(int i=1; i<=n; i++)
    { 
    if (i%2!=0) printf("Odd are %d\n",i);
}
}
int main()
{
    int  n;
    printf("Print all even numbers till: ");
    scanf("%d", &n);
    even(n);
    return 0;
}
