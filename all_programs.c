#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int sum();
int armstrong();
int table();
void prime();
int main()
{
    int n;
    printf("Enter 1 for sum:\n Enter 2 for armstrong:\n Enter 3 for table:\n Enter 4 for prime:\n Enter 5 for exit:\n");
    scanf("%d",&n);
    switch(n){
        case 1:
        int a,b;
        int j = sum(a,b);
        printf("%d",j);
        break;
        case 2:
        int p;
        printf("enter p\n");
        scanf("%d",&p);
       int k= armstrong(p);
       if (k==1)
       printf("%d is armstrong",p);
       else
       printf("%d is not armstrong",p);
        break;
        case 3:
        int o;
        table(o);
        break;
        case 4:
        int r;
        scanf("%d",&r);
        prime(r);
        break;
        case 5:
        exit(1);
        break;
        default:
        printf("Enter number between 1 to 5...");
    }
    return 0;
}
 int sum(int a,int b){
     printf("Enter the value of a and b:\n");
        scanf("%d %d",&a,&b);
        return (a+b);
    }
    int armstrong(int c){
        int x,rem,res=0,count;
        count=log10(c)+1;
        x=c;
        while(c!=0){
            rem=c%10;
            res+=pow(rem,count);
            c/=10;
        }
        if (res==x){
        return 1;
        }
        else {
            return 0;
        }
    }
    void prime(int d){
        int i,f=1;
        for (i=2;i<=d/2;i++){
        if (d%i==0)
            {f=0;
            break;
            }
        }
        if(f==1)
            printf("%d is a prime number",d);
            
        
        else{
            printf("%d is not a prime number",d);
        }
    
    }
    int table (int e){
        scanf("%d",&e);
        for (int i=1;i<=10;i++){
            printf("%d * %d = %d\n",e,i,e*i);
        }
        return 1;
    }
