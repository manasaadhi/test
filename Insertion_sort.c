#include<stdio.h>
#define N 10
void Insertion_sort(int a[],int );
int main()
{
	int arr[N],i,j;
	printf("Enter Array elements:\n");
	for(i=0;i<N;i++)
		scanf("%d",&arr[i]);//Reading array elements
	printf("The array elements before sorting:\n");
	for(i=0;i<N;i++)
		printf("%d ",arr[i]);//Printing array elements before sorting
	printf("\n\n");
	Insertion_sort(arr,N);//Insertion function call
}

void Insertion_sort(int a[],int n)
{
	int i,j,k,t;
	for(i=1;i<n;i++)
	{
		k=i;
	for(j=i-1;k;j--,k--)
		{
			if(a[k]<a[j])
			{
				t=a[j];
				a[j]=a[k];
				a[k]=t;
			}
		}

	}
	printf("After sorting array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
