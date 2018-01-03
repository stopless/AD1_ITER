//Reverse the row and the column of a matrix in seperate operations
//I/P- A[0...m][0...n]
//O/P- A[0...m][0...n] with rows reversed then A[0...m][0...n] with the columns reversed
#include<stdio.h>
int main()
	{
	 int m,n; //size of the matrix
	//Take input for the size of the matrx in (r,c) form
	scanf("%d%d",&m,&n);
	//Declaration of the matrix
	int A[m][n];
	//take input of the matrix
	for(int i=0;i<m;i++)
		{	for(int j=0;j<n;j++)
					{	scanf("%d",&A[i][j]);
					}
		}
	//give output as an array
	void output()
	  {for(int i=0;i<m;i++)
		  {	for(int j=0;j<n;j++)
			  	{	printf("%d ",A[i][j]);  }
		  printf("\n");
		  }
	  }
  //show entered value in a matrix structure 
printf("Your entered matrix is \n");
  output();
	//Reverse the rows
  printf("Each row reversed\n");
  for(int i=0;i<m;i++)
		{
			for(int j=0;j<n/2;j++)
				{
					int temp;
					temp=A[i][j];
					A[i][j]=A[i][n-j-1];
					A[i][n-1-j]=temp;
				}
		}
	output(); // send output to screen
 //Reverse the columns
 printf("Each column reversed\n");
  for(int i=0;i<m/2;i++)
		{
			for(int j=0;j<n;j++)
				{ int temp;
				temp=A[i][j];
				A[i][j]=A[m-1-i][j];
				A[m-1-i][j]=temp;
				}
		}
	output(); //Output to screen
	return 0;
	}
