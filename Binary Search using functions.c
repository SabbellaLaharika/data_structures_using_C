#include<stdio.h>
int binary_search(int *arr,int m,int se);
int main()
{
   int n,i,key,res;
   printf("Enter the size of an array :- ");
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
    {
       	printf ("a[%d] = ",i);
   	    scanf("%d",&a[i]);
    }	
   printf("Enter the key element :- ");
   scanf("%d",&key);
   res = binary_search(a,n,key);
    if(res == -1)
	printf("Element not found");
	else
	printf("Element is found at %d index position",res); 
}
int binary_search(int *arr,int m,int se)
{
	int l = 0,h = m - 1 ,mid;
	while(l<=h)
	{
		mid = (l+h)/2;
		if (arr[mid] == se)
		return mid;
		else if(arr[mid]>se)
		h = mid - 1;
		else
		l = mid + 1;
	}
	return -1;
}