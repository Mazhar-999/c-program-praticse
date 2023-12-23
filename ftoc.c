#include<stdio.h>
int main(){
    int faranheit,celsius;
    printf("enter the temp in faranheit: ");
    scanf("%d",&faranheit);
    celsius = (faranheit - 32)*5/9;
    printf(" celsius is %d ",celsius);
    return 0;
}