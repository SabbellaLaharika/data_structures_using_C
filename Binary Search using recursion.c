#include<stdio.h>
int binary_search_recur(int *arr,int l,int h,int se)
{
	if(l>h)
	{
		return -1;
	}
	int mid;
	mid = (l+h)/2;
	if (arr[mid] == se)
	{
		return mid;
	}
	else if(arr[mid]>se)
	{
		h = mid - 1;
	}
	else
	{
		l = mid + 1;
	}
	return binary_search_recur(arr,l,h,se);
}
int main()
{
   int n,i,key,res;
   printf("Enter the size of an array :- ");
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
    {
       	printf("a[%d] = ",i);
   	    scanf("%d",&a[i]);
    }	
   printf("Enter the key element :- ");
   scanf("%d",&key);
   res = binary_search_recur(a,0,n-1,key);
    if(res == -1)
	printf("%d not found",key);
	else
	printf("%d is found at %d index position",key,res); 
}
