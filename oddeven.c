#include<stdio.h>
#include<conio.h>
int main()
{
    int num,result;
    printf("Enter the number\n");
    scanf("%d",&num);
    result=num%2;

    if (result==0)
        printf("Number is even");
    else
        printf("Number is odd");
}