#include<stdio.h>
int main()

{
int x,y,c;
int i;

printf("\t\t\t\t\t\tSIMPLE CALCULATOR\n");


printf("Enter the operation you want to perform:\n\n1) Additon.\n2) Subration.\n3) Multpication.\n4) Division.\n");
scanf("%d",&i);

printf("Enter any two Integers to perform Operation:\n");
scanf("%d%d",&x,&y);

switch (i)
{
case 1:
    c=x+y;
    printf("Answer is %d",c);
    break;

case 2:
    c=x-y;
    printf("Answer is %d",c);
    break;

case 3:
    c=x*y;
    printf("Answer is %d",c);
    break;

case 4:
    c=x/y;
    printf("Answer is = %d",c);
    break;

    default:
        printf("Please choose the right Option");
    break;


}


return 0;

}
