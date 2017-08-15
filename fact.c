#include<stdio.h>
int main()
{
int n=5,fact=1;
printf("the given number is:%d",n);
for(int i=1;i<5;i++)
{
  fact=fact*i;
}
printf("\nthe factorial is:%d",fact);
return 0;
}

