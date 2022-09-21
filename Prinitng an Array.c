#include<stdio.h>
int main()

{
int a[100];
int i,n;
printf("\t\t\t\t\tC Program to Print Elements Of an Array\n");
printf("Enter the Size of Array:\n");
scanf("%d",&n);

printf("Enter the Elements of Array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}

}

