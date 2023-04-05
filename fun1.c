#include <stdio.h>
#include <math.h>
int min(int a , int b){
    return (a>b)? b:a ;
}
int max (int c , int d){
    return (c>d)?c:d;
}
int main()
{
 
  int q,w;
    scanf("%d %d",&q,&w);
    int z1=max( q, w);
    printf("maximum number is %d",z1);   
    int x,y;
    scanf("%d %d",&x,&y);
    int z=min( x, y);
    printf("minimum number is %d",z);
    int k=sqrt(z);
    printf("\n%d",k);
    return 0;
} 
