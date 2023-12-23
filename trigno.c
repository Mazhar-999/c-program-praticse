#include<stdio.h>
#include<math.h>
int main(){
    float x, s, c, t, co, se, cot;
    printf("Enter an angle : ");
    scanf("%f", &x);
    s = sin(x);
    c = cos(x);
    t = tan(x);
    co = 1/s;
    se = 1/c;
    cot = 1/t;
    printf("Sin = %.2f\nCos = %.2f\nTan = %.2f\nCosec = %.2f\nSec = %.2f\nCot = %.2f", s, c, t, co, se, cot);
}