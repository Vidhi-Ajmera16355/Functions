#include <stdio.h>
int circle(int r){
    int d=2*r;
    printf("Diameter is : %d\n",d);
    int c=2*3.14*r;
    printf("Circumference is : %d\n",c);
    int a=3.14*r*r;
    printf("Area is : %d\n",a);
}
int main()
{
    int r;
    printf("Enter radius of circle:\n");
    scanf("%d",&r);
    circle(r);
    return 0;
}
