#include<stdio.h>
int linearsearch(int *arr,int m,int se);
int main()
{
	int n,a[100],i,key,res;
	printf("Enter the value of size of array :- ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		printf("\n");
	}
	printf("Enter the search element :- ");
	scanf("%d",&key);
	res = linearsearch(a,n,key);
	if(res == -1)
	printf("Element not found");
	else
	printf("Element is found at %d index position",res);
}
int linearsearch(int *arr,int m,int se)
{
	int j;
	for(j=0;j<m;j++)
	{
		if(arr[j] == se)
		return j;
	}
	return -1;
}