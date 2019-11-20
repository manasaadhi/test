#include<stdlib.h>
#include<stdio.h>
void quicksort(int a[20],int first,int last)
{
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j)
	{
         while(a[i]<=a[pivot]&&i<last)
            i++;
         while(a[j]>a[pivot])
            j--;
         if(i<j)
	{
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }

      temp=a[pivot];
      a[pivot]=a[j];
      a[j]=temp;
      quicksort(a,first,j-1);
      quicksort(a,j+1,last);

  }
}

void print_quick(int a[],int first,int last)
{

int i,j,n=last+1;
        int b[10]={1,2,3,4,5,6,7,8,9,10};
	FILE *fp;
	fp=fopen("output.txt","w+");
        for(i=0;i<n;i++)
        fprintf(fp,"%d ",a[i]);
quicksort(a,first,last);
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

