#include<stdio.h>
#include<stdlib.h>
//select sort function defination
void select_sort(int ptr[],int n)
{
	int i,j,min,t,c,k,b[10]={1,2,3,4,5,6,7,8,9,10};
	FILE *fp;
	fp=fopen("output.txt","w+");
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
//printf("\nSelection sort elements are\n");
	for(i=0;i<n;i++)
	fprintf(fp,"%d ",ptr[i]);
	
for(i=0;i<n;i++)
	fscanf(fp,"%d ",&ptr[i]);
	for(j=0;j<n;j++)
	{
		if(ptr[j]==b[j])
		continue;
		else
		{
			printf("Failed\n");
			exit(0);
		}
	}

	printf("Success\n");
}
