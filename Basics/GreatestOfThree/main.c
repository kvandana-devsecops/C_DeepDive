#include<stdio.h>
int main() 
{
    int a;
    int b;
    int c;
printf("enter a number a:");
scanf("%d", &a);
printf("Enter a number b:");
scanf("%d", &b);
printf("Enter a number c:");
scanf("%d", &c);
if (a>b && a>c)
{
printf("%d is greatest",a);
}
if (b>a && b>c)
{
printf("%d is greatest",b);
}
if (c>a && c>b)
{
printf("%d is greatest",c);
}
    
    
    return 0;
}