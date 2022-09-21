#include<stdio.h>
int main()
{
int a,b,c;
printf("\t\t\t\t\t\t\t\TERNORY OPERATOR\n");
printf("Enter two integers to compare:\n");
scanf("%d%d",&a,&b);

c=a>b?a:b;

printf("%d is the largest",c);

return 0;

}
