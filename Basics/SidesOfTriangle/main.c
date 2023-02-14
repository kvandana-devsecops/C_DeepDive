//CSidesOFTriangle


#include<stdio.h>
int main() 
{
    int a,b,c ;
printf("enter a number a:");
scanf("%d", &a);
printf("Enter a number b:");
scanf("%d", &b);
printf("Enter a number c:");
scanf("%d", &c);
if (a+b>c && a+c>b && b+c>a)
{
printf("%d can be a triangle ",a,b,c);
}
else
printf("%d cannot be a triaqngle");

 
    
    return 0;
}