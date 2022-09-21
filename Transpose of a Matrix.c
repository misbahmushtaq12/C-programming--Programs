#include<stdio.h>
int main()
{int a[10][10],b[10][10];
int m,n;
int i,j;
printf("\t\t\t\t\tC Program to find Transpose of a Matrix\n");
printf("Enter the Number of Rows and Columns:\n");
scanf("%d%d",&m,&n);
//Entering elements in an Array.
printf("Enter the Elements of the Matrix Row-Wise:\n");

for(i=0;i<m;i++)
{      for(j=0;j<n;j++)
           {
           scanf("%d",&a[i][j]);
           }
}
printf("\n");
//Printing the Entered Matrix.

printf("The entered matrix is:\n");
for(i=0;i<m;i++)
{      for(j=0;j<n;j++)
           {
           printf("%d ",a[i][j]);
           }
           printf("\n");
}


//Finding Transpose of the matrix.

for(i=0;i<m;i++)
{      for(j=0;j<n;j++)
           {
           b[j][i]=a[i][j];
           }

}


//Printing Transpose of the Matrix.
printf("Transpose of the Matrix is:\n");
for(i=0;i<n;i++)
{      for(j=0;j<m;j++)
           {
           printf("%d ",b[i][j]);
           }
           printf("\n");
}

}
