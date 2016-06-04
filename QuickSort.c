#include<stdio.h>
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int Partition(int A[],int start,int end)
{
	int pivot = A[end];
	int partitionIndex = start;
	for(int i=start;i<end;i++)
	{
		if(A[i]<=pivot)
		{
			swap(&A[i],&A[partitionIndex]);
			partitionIndex++;
		}
	}
	swap(&A[partitionIndex],&A[end]);
	return partitionIndex;
}

void QuickSort(int A[],int start,int end)
{
	if(start<end)
	{
		int partitionIndex = Partition(A,start,end);
		QuickSort(A,start,partitionIndex-1);
		QuickSort(A,partitionIndex+1,end);
	}
}

int main()
{
	int A[] = {2,7,4,1,5,3};
	int n = sizeof(A)/sizeof(A[0]);
	QuickSort(A,0,n-1);
	for(int i = 0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
}
