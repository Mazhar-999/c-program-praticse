#include <stdio.h>
#include <math.h>
int main(){
    int L1, L2, G1, G2;
    float D;
    printf("Enter the latitude : ");
    scanf("%d%d", &L1, &L2);
    printf("Enter the longitude : ");
    scanf("%d%d", &G1, &G2);
    D = 3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));
    printf("Distance = %.3f", D);
}