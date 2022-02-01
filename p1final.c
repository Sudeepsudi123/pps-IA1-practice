#include <stdio.h>
int input()
{
  int a;
  printf("enter the value");
  scanf("%d",&a);
  return a;
}
int add(int a,int b)
{
  int c;
  c=a+b;
  return c;
}

void output(int a,int b,int c)
{
  printf("sum of 2 numbers %d + %d =%d",a,b,c);
}

int main()
{
  int a,b,sum;
a=input();
b=input();
sum=add(a,b);
output(a,b,sum);
return 0;
}