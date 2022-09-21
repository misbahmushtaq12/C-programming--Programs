// C Program To Check Whether a Number is Prime or Not
#include <stdio.h>
int main(){
    int num, i, c = 0;

    // Asking for Input
    printf("Enter an Number: ");
    scanf("%d", &num);

    // logic
    for (i = 1; i <= num; i++){
        if (num % i == 0){
c++;
        }
    }
    if (c == 2){
        printf("%d is a Prime Number.", num);
    }
    else {
        printf("%d is not a Prime Number.", num);
    }
    return 0;
}
