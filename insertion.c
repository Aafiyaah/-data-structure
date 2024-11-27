#include<stdio.h>
int main()
{
int a[10],i,n,in,pos;
printf("enter the limit");
scanf("%d",&n);
printf("enter the numbers");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the element to be inserted");
scanf("%d",&pos);
for(i=n;i>=pos;i--)
{
a[i]=a[i-1];
}
a[pos-1]-in;
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
