#include <stdio.h>
void fun(int n){
    for(int i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }
}
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Natural numbers from 1 to %d : \n", n);
    fun(n);
    return 0;
}
