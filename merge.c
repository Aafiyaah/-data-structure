#include<stdio.h>
void main()
{
int a[10],b[10],c[20];
int i,j,n,m,k,size;
printf("enter the size of first array:");
scanf("%d",&n);
printf("enter the size of second array:");
scanf("%d",&n);
printf("\n enter the first array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter the second array:");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
printf("\n enter the first array elements:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\n enter the second array elements:");
for(i=0;i<m;i++)
{
printf("%d",b[i]);
}
size=n+m;
for(i=0;i<n;i++)
{
c[i]=a[i];
}
for(i=0;i<size;i++)
{
c[i+n]=b[i];
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(c[i]>c[j])
{
k=c[i];
c[i]=c[j];
c[j]=k;
}
}}
printf("the merged array is:\n");
for(i=0;i<size;i++)
{
printf("%d",c[i]);
}
}
