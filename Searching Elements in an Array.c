#include<stdio.h>
int main()

{ int n,i;
int flag=0;
int a[10]={1,2,3,4,5,6,12,13,14,15};
printf("Enter the Element to Search:\n");
scanf("%d",&n);


for(i=0;i<10;i++)

{
if(n==a[i])

{
flag=1;
printf("Element found at %d th Position",i+1);
break;
}
}
if(flag==0)
{
    printf("Element not Found");
}

}
