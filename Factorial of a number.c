#include<stdio.h>
int main()

{int n,i,f=1;

printf("\t\t\t\t\tC Program To Find Factorial Of a Number\n");
printf("Enter any Number to find Factorial:\n");
scanf("%d",&n);


for(i=n;i>=1;i--)

{
f = f*i;
}
printf("Factorial of the number is %d",f);
return 0;
}
