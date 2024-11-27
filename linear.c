#include<stdio.h>
void main()
{
int a[50],i,n,s;
printf("enter the size of the array");
scanf("%d",&n);
printf("\n enter the array element:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("the array elements are:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\n enter the number to be search:\n");
scanf("\n%d",&s);
printf("\n the element to be search is:%d",s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
printf("\n the given number position is %d\n",i+1);
break;
}
}
if(i==n)
{
printf("\n the given number is not in list");
}
}
