#include<stdio.h>
int main(){
    int i,h=1189,w=549,t;
    for(i=0;i<9;i++) 
    {
        printf("\n A%d: %d * %d",i,h,w);
        t=h;
        h=w;
        w=t/2;
    }
    return 0;
}