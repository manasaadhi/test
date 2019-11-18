#include<stdio.h>
#include<stdlib.h>
void Insertion_sort(int a[],int n)
{
	int i,j,k,t,b[10]={1,2,3,4,5,6,7,8,9,10};
	FILE *fp;
	fp=fopen("output.txt","w");
	
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
	//printf("After  Insertion sort array elements are:\n");
	for(i=0;i<n;i++)
		fprintf(fp,"%d ",a[i]);
	for(i=0;i<n;i++)
		fscanf(fp,"%d ",&a[i]);
	for(j=0;j<n;j++)
	{
		if(a[j]==b[j])
		continue;
		else
		{
			printf("Failed\n");
			exit(0);
		}
	}
	printf("Success\n");
}
