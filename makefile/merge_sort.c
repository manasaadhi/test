#include<stdio.h>
#include<stdlib.h>
void merge_sublist(int arr[],int,int);
void merge_sort(int arr[],int ,int ,int );
void print(int arr[],int,int);

void print(int arr[],int l,int h)
{
	int i,j,n=h+1,b[10]={1,2,3,4,5,6,7,8,9,10};
	 FILE *fp;
        fp=fopen("output.txt","w+");
merge_sublist(arr,l,h);
        for(i=0;i<n;i++)
       {
        fprintf(fp,"%d ",arr[i]);
//        printf("%d ",arr[i]);
        }
for(i=0;i<n;i++)
        fscanf(fp,"%d ",&arr[i]);
        for(j=0;j<n;j++)
        {
                if(arr[j]==b[j])
                continue;
                else
                {
                        printf("Failed\n");
                        exit(0);
                }
        }

        printf("Success\n");


	
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

