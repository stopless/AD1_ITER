// Given an array find the distinct elements without using a second array
//I/P- An array A[0....N-1] with N elements
//O/P- An array A[0...k] with k distinct elements
#include<stdio.h>
//enter the size of the array
int main()
{
int n;
scanf("%d",&n);
int A[n];
//declare the array A of size N
//Take inputs from user of elements in array
for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
int k=n; //This is our most important variable
for(int i=0;i<k;i++)
	{
	//loop to iterate over the array
		for(int j=i+1;j<k;)
				{
	//loop to iterate over rest of array to check for duplicates
				if(A[i]==A[j])
					  {
	//check for duplicates
					  for(int m=j;m<k;m++)
					  {A[m]=A[m+1];} //shifting 
					  k--; //decrease max index to 
					  }
				else
					j++;
}
	}
printf("k= %d \n",k);
for(int i=0;i<k;i++)
	printf("%d ",A[i]);
return 0;
}

		
	
	
