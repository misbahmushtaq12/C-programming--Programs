#include<stdio.h>
int main()

{

int n,i;
printf("Enter the Value till you want to print the series\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
i=i+1;
printf("%d\t",i);
}

return 0;

}
