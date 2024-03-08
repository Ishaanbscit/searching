#include<stdio.h>
int bs(int a[], int item, int size)
{
	int l=0,h=size-1,mid;
	mid=(l+h)/2;
	while(a[mid]!=item && (l<=h))
	{
		if(item<a[mid])
		h=mid-1;
		else
		l=mid+1;
		mid=(l+h)/2;
	}
	if(l<=h)
	return mid;
	else
	return -1;
}
void main()
{
	int n,s;
	printf("\nEnter the size:-");
	scanf("%d",&n);
	int a[n];
	printf("\n Enter element in ascending order:-");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n List contains:\n");
	for(int i=0;i<n;i++)
	{
		printf("%3d",a[i]);
	}
	printf("\nEnter search item:");
	scanf("%d",&s);
	int m=bs(a,s,n);
	if(m==-1)
	printf("\n Search data not found.");
	else
	printf("\n Search data found on the location %d",m+1);
}