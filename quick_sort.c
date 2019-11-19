#include<stdio.h>
#include<stdlib.h>
void Quick_sort(int arr[],int,int);
int array_partition(int arr[],int,int);
void swap(int *,int *);
int main()
{
	int n,i;
	printf("Enter array size:\n");
	scanf("%d",&n);
	int *arr=(int *)malloc(n*sizeof(int));
	printf("Enter array elemens are:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Before sorting array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	
	Quick_sort(arr,0,n-1);
	
	printf("After quick sort elements are:\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");

free(arr);
	
}
void Quick_sort(int arr[],int l,int h)
{
	int pivot,i;
printf("quick\n");
	for(i=0;i<=h;i++)
		printf("%d ",arr[i]);
	printf("\n");
	if((l<h))
	{	
		pivot=array_partition(arr,l,h);
printf("pivot:%d\n",pivot);		
Quick_sort(arr,l,pivot-1);
		Quick_sort(arr,pivot+1,h);
	}
}
int array_partition(int arr[],int l,int h)
{
	int i,j,pivot,k;
	i=l-1;k=h-1;
	for(j=l;j<h;j++)
	{
		if(arr[j]>=pivot&&arr[k]<=pivot)
		{
			i++;
		swap(&arr[j],&arr[k]);
		}
	}
//		swap(&arr[i+1],&arr[h]);
printf("in swap\n");	
for(k=0;k<h;k++)
		printf("%d ",arr[k]);
	printf("\n");
	return i+1;
}
void swap(int *a1,int *a2)
{
	int t;
printf("hai\n");
	t=*a1;
	*a1=*a2;
	*a2=t;
}
