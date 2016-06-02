#include<stdio.h>
void BubbleSort(int A[],int n)
{
	for(int k=1;k<=n-1;k++)
	{
		int flag=0;
		for(int i=0;i<= n-k-1;i++)
		{	
			if(A[i]>A[i+1])
			{		
				int temp = A[i];
				A[i] = A[i+1];
				A[i+1] = temp;
				flag=1;
			}	
		}
		if (flag==0)
			break;	
	}
}
int main()
{
	int A[] = {2,7,4,1,5,6,3};
	int n = sizeof(A)/sizeof(A[0]);
	BubbleSort(A,n);
	for(int i = 0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
}
