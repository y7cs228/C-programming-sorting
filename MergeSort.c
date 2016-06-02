#include<stdio.h>
#include<stdlib.h>

void Merge(int A[],int L[],int leftCount,int R[],int rightCount) 
{
	int i,j,k;
	
	i = 0; j = 0; k =0;

	while(i<leftCount && j< rightCount) 
	{
		if(L[i]  < R[j]) 
		{
			A[k] = L[i];
			i = i+1;
		}
		else 
		{
			A[k] = R[j];
			j = j+1;
		}
		k = k+1;
	}
	while(i < leftCount) 
	{
		A[k] = L[i];
		i = i+1;
		k = k+1;
	}
	while(j < rightCount)
	{
		A[k] = R[j];
		j = j+1;
		k = k+1;	
	} 
}

void MergeSort(int A[],int n)
{
	int mid,i;
	
	if(n<2) return;
	
	mid=n/2;
	int L[mid],R[n-mid];
	
	for(i=0;i<=mid-1;i++)	L[i] = A[i];
	for(i=mid;i<=n-1;i++)	R[i-mid] = A[i];
	
	MergeSort(L,mid);
	MergeSort(R,n-mid);
	Merge(A,L,mid,R,n-mid);

}
int main()
{
	int A[] = {2,7,4,1,5,6,3};
	int n = sizeof(A)/sizeof(A[0]);
	MergeSort(A,n);
	for(int i = 0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
}
