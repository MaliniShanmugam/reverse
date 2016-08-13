#include<stdio.h>
int main()
{
int a,b,sum=0;
while(a)
{
b=b%10;
a=a/10;
}
sum=sum+b;
printf("%d",sum);
return 0;
}
