#include<stdio.h>
#include<stdlib.h>
void merge_sublist(int arr[],int,int);
void merge_sort(int arr[],int,int,int);
int main()
{
	int n,i,j;
	printf("Enter array size:\n");
	scanf("%d",&n);
	int * arr=(int *)malloc(n*sizeof(int));
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Before Sort Array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");

	merge_sublist(arr,0,n-1);

	printf("After merge sort the array elements are\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	free(arr);
}

void merge_sublist(int arr[],int l,int h)
{
	int mid;
	if(l<h)
	{
		mid=(l+h)/2;
	//array divide into the two sub arrays
		merge_sublist(arr,l,mid);
		merge_sublist(arr,mid+1,h);
	//combine
	merge_sort(arr,l,mid,h);
	}

}

void merge_sort(int arr[],int l,int m,int h)
{
	int i,j,k,n1,n2,a1[50],a2[50];
	n1=m-l+1;
	n2=h-m;                

	for(i=0;i<n1;i++)
		a1[i]=arr[l+i];
	for(j=0;j<n2;j++)
		a2[j]=arr[m+j+1];

	a1[i]=6666;// To mark the end of temporary array
	a2[j]=6666;
	
	i=0;j=0;
	for(k=l;k<=h;k++)
	{
		if(a1[i]<=a2[j])
		{
			arr[k]=a1[i];
			i++;
		}
		else
		{
			arr[k]=a2[j];
			j++;
		}
	}
}

