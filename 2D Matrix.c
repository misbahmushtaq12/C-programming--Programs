

// C program to Store and Print Elements Of an Array.

#include<stdio.h>
int main()

{
int a[4][3];
int i,j;

printf("Enter the Elements of the 5x5 Matrix:\n");
for(i=0;i<=3;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&a[i][j]);
}
}


//Printing Elements of an array.

for(i=0;i<=3;i++)
{
for(j=0;j<=2;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
}
