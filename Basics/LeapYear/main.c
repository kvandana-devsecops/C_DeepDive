// Finding leap year//



#include<stdio.h>


int main(){

    int y;
    printf("Enter year:");
    scanf("%d",&y);
    if (y%4==0)
    {
        printf("Enterd year is leap year\n");
        
    }
    else{
        printf("Enterd year is not leap year\n");
    }
        

    return 0;
}