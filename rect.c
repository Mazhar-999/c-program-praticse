#include<stdio.h>
#include<conio.h>
int main()
{
    float l, b, r,ca, cc, ra, rp;
    printf("Enter the length of rectangle: ");
    scanf("%f", &l);
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &b);

    printf("Enter the radius of circle: ");
    scanf("%f", &r);

     ra = l * b;    
     rp = 2 * (l + b);   

     
     ca = 3.14 * r * r;   
     cc = 2 * 3.14 * r;  

     printf("\nThe area of the rectangle: %0.2f", ra);
     printf("\nThe perimeter of the rectangle: %.2f", rp);
     printf("\n\nThe area of the circle: %.2f", ca);
     printf("\nThe circumference of the circle: %.2f", cc);

     return (0);
}