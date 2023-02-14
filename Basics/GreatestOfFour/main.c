// Greatest OF Four NUmber//


#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
        printf("Enter 2st Number: ");
    scanf("%d",&b);
    printf("Enter 3st Number: ");
    scanf("%d",&c);
    printf("Enter 4st Number: ");
    scanf("%d",&d);
    if (a>b && a>c && a>d)
    {
       printf("%d is the greatest number",a);
    }
    if (b>a && b>c && b>d)
    {
       printf("%d is the greatest number",b);
    }
    if (c>b && c>a && c>d)
    {
       printf("%d is the greatest number",c);
    }
    if (d>b && d>c && d>a)
    {
       printf("%d is the greatest number",d);
    }
    
    return 0;
}