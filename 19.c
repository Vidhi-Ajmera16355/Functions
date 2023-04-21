#include<stdio.h>
int fab(int n){
    int t1 = 0, t2 = 1, nextTerm = 0, i;
if(n == 0 || n == 1) 
printf("%d", n); 
else
nextTerm = t1 + t2;
for (i = 3; i <= n; ++i)
{
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
}
printf("%d", t2);
}
int main()
{
int n;
printf("Enter the n value: ");
scanf("%d", &n);
fab(n);
}
