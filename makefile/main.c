#include<stdio.h>
#include<stdlib.h>
//Selection sort decleration
void merge_sublist(int arr[],int,int);
void merge_sort(int arr[],int,int,int);
void quicksort(int arr[],int,int);
void select_sort(int arr[],int n);
void Insertion_sort(int arr[],int n);
void Bubble_sort(int arr[],int n);
void print(int arr[],int ,int);
void print_quick(int arr[],int,int);

int main(void)
{
        int n,i,ch;
  int  arr[10]={10,9,8,7,6,5,4,3,2,1};
	n=10;
     //   int *ptr=(int *)malloc(n*sizeof(int));//Dynamic memory allocation for arra,3,2,1};
//scaning array elements and printing them before sorting
/*        printf("Enter array elements:\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&ptr[i]);
        }

    printf("Before sorting array elements are:\n");
        for(i=0;i<n;i++)
        {
                printf("%d ",ptr[i]);
        }*/
	printf("Enter a number for particular operation:\n");
	printf("1.Selection sort\n2.Insertion Sort\n3.Bubble sort\n4.Merge sort\n5.Quick sort\n");

	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
        	select_sort(arr,n);//calling the select_sort function
        	printf("\n");
		break;
	case 2:
		Insertion_sort(arr,n);
		printf("\n");
		break;
	case 3:	
		Bubble_sort(arr,n);
		printf("\n");
		break;
	case 4:
		print(arr,0,n-1);
		printf("\n");
		break;
	case 5:
		 print_quick(arr,0,n-1);
			printf("\n");
			break;
	default:
		printf("sorry enter a number between 1&5\n");
		break;
	}
}

