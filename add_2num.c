#include<stdio.h>
#include<string.h>
int main()
{
  extern int k;
int a,b,c;
printf("Enter a and b value:");
scanf("%d %d",&a,&b);
c=a+b;
printf("the c value is:%d",c);
printf("%c\n",k);
}
int k;
