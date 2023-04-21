#include <stdio.h>
int prime(int n){
int j, check = 1;
    for (j = 2; j <= n / 2; ++j) {
    if (n%j==0) {
      check=0;
      break;
    }
  }
  return check;
}
int main() {
  int n1, n2, i, check;
  printf("Enter two positive integers: ");
  scanf("%d %d",&n1,&n2);
  if (n1>n2){
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;}
  printf("Prime numbers between %d and %d are:", n1, n2);
  for (i=n1+1 ; i<n2 ;++i) {
    check = prime(i);
    if (check==1) {
      printf("%d ", i);
    }
  }
  return 0;
}
