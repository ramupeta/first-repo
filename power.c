#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int power(int x, int y)
{
int i,p=1;
for(i=0;i<y;i++)
{
p=p*x;
}
return p;
}
int main()
{
int x,y;
printf("enter x and y values:");
scanf("%d %d",&x,&y);
int z=power(x,y);
printf("%d\n",z);
}
