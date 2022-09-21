#include<stdio.h>
int ack(int,int);
int main()
{
    int a, b, ans;
    printf("Enter first Value:\n");
    scanf("%d",&a);
    printf("Enter second Value:\n");
    scanf("%d",&b);
    ans=ack(a,b);
    printf("The Ackermann is %d\n\n",ans);
    return 0;
}

int ack(int m,int n)
{
    if(m==0)
        return n+1;
    else if ((m>0)&&(n==0))
        return ack(m-1,1);
    else if ((m>0)&&(n==0))
        return ack(m-1,ack(m,m-1));
}
