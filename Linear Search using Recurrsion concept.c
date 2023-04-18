#include<stdio.h>
int linearsearch_recur(int *arr,int m,int j,int se);
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
	res = linearsearch_recur(a,n,0,key);
	if(res == -1)
	printf("Element not found");
	else
	printf("Element is found at %d index position",res);
}
int linearsearch_recur(int *arr,int m,int j,int se)
{
	if(j==m)
	{
		return -1;
	}
	if(arr[j]==se)
	{
		return j;
	}
	linearsearch_recur(arr,m,j+1,se);
}