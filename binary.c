#include <stdio.h>
int main()
{
int n, i, num;
printf("Enter the size of the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements of the array: ");
for(i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
printf("Enter the element to search: ");
scanf("%d", &num);
int left = 0, right = n - 1, mid;
while(left <= right)
{
mid = (left + right) / 2;
if(arr[mid] == num)
{
printf("%d found at index %d\n", num, mid);
return 0;
}
else if(arr[mid] < num)
{
left = mid + 1;
} else
{
right = mid - 1;
}
}
printf("%d not found in the array\n", num);
return 0;
}

