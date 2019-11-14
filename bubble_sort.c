#include<stdio.h>
#define N 20
void Bubble_sort(int arr[],int );
int main()
{
	int arr[N],i;
	printf("Enter array elements:\n");
	for(i=0;i<N;i++)
		scanf("%d",&arr[i]);
	printf("Before Sorting Array Elements are:\n");
	for(i=0;i<N;i++)
		printf("%d ",arr[i]);
	printf("\n");
	Bubble_sort(arr,N);

} 
void Bubble_sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		
		}
	}
	printf("After sorting array elements are:\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n\n");
	
}
