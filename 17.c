#include <stdio.h>
int sumofdigits(int n)
{
  int s=0,rem=0;
  while(n>0)
  {
     rem=n%10;
     s+=rem;	  	  
     n=n/10;
  }
  return s;
}
int main()
{
  int n,s;
  printf("Enter a number:\n") ;
  scanf("%d",&n);	   
  s=sumofdigits(n);	 
  printf("Sum of Digits is %d ",s);
  return 0;
}
