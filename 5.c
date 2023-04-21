#include <stdio.h>
int prime(int a){
    int i=2;
    while (i<a/2){
        if (a%i==0)
        return 0;
        else i++;
    }
    return 1;
}
int isArmstrong(int number) 
{
  int lastDigit = 0;
  int power = 0;
  int sum = 0;
  int n = number;

  while(n!=0) {
     lastDigit = n % 10;
     power = lastDigit*lastDigit*lastDigit;
     sum += power;

     // remove last digit
     n /= 10;
  }

  if(sum == number) return 0;
  else return 1;
}
 int perfect(int numbr){
          int a=1, sum=0;
          while(a< numbr){
          if(numbr % a == 0)
          sum=sum+a;
          a++;
          }
          return(sum);
          }
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    prime(a);
    if (prime(a)==1){
        printf("%d is a prime number\n",a);
    }
    else 
    printf("%d is not prime number\n",a);
    int isArmstrong(int a);
    if(isArmstrong(a) == 0)
    printf("%d is an Armstrong number.\n", a);
    else
    printf("%d is not an Armstrong number.\n", a);
    int s=perfect(a);
    if (s==a)
    printf("%d is perfect number",a);
    else printf("%d is not a perfect",a);
    return 0;
}
