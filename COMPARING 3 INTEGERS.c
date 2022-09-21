#include<stdio.h>
int main()
{
int a, b,c ;


printf("\t\t\t\t\tC PROGRAM TO COMPARE THREE DISTINCT INTERGES\n\n");
printf("Enter any three integer to Compare:\n");
scanf("%d%d%d",&a,&b,&c);

if(a>b && a>c)
{
printf("%d is the greatest",a);
}

else if(b>a && b>c)
{
printf("%d is the greatest",b);
}

else if(c>a && c>b)
{
printf("%d is the greatest",c);
}

else if(a==b && b==c)
{
printf(" BARV0! All the integers are same");
}
return 0;
}
