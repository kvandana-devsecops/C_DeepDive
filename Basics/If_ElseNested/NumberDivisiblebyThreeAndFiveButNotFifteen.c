//NestedStatment//
#include<stdio.h>
int main(){
    int x;
    printf("Enter a positive number: ");
    scanf("%d",&x);
    if ( x %3 ==0 || x %5 == 0 )
    {
        if (x%15==0)
        {
            printf("Enterd nuber is divisible by fifteen\n");
        }
        else{
            printf("Enterd number is divivsible by 5 or 3 but not fifteen\n");
        }
        
    }
    else{
        printf("The number is not divisible by 3 or 5 \n");
    }

    
    return 0;
}