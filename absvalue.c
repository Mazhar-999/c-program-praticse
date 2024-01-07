#include<stdio.h>
#include<conio.h>
int main()
{
    int n, num;

    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    //first method
    if(num<0)
    {
        num = (-1)*num;
    }
    //second method
    //num = abs(num);

    printf("The absolute value of %d is %d",n , num);
    return 0;
}