#include<stdio.h>
#include<stdlib.h>
//Selection sort decleration
void select_sort(int ptr[],int n);

int main(void)
{
	int n,i;
	printf("Enter Array size\n");
	scanf("%d",&n);
	int *ptr=(int *)malloc(n*sizeof(int));//Dynamic memory allocation for array
	
//scaning array elements and printing them before sorting
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Before sorting array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",ptr[i]);
	}
	
	printf("\nAfter select sort elements are:\n");
	select_sort(ptr,n);//calling the select_sort function
	printf("\n");

}
//select sort function defination
void select_sort(int ptr[],int n)
{
	int i,j,min,t,c,k;

	for(i=0;i<n;i++)
	{
		c=i;
		min=ptr[i];
		for(j=i+1;j<n;j++)
		{
			if(ptr[j]<min)//Identifying the minimum number in the array
			{
				min=ptr[j];
				c=j;//Index of minimum number
			}
		}
	if(ptr[i]>min)//Swapping
		{
			t=ptr[i];
			ptr[i]=min;
			ptr[c]=t;			
		}
	}
//printing array elements after sorting
	for(i=0;i<n;i++)
	printf("%d ",ptr[i]);
}
