#include <stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d", &x);

    if (x%2==0)
    {
        printf("Entered number is even");
    }
    if (x%2!=0)
    {
        printf("Enterd number is odd");
    }

    return 0;
}