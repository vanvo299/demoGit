//  
#include <stdio.h>
#include <math.h>
int main() {
    float R; // ban kinh
    float V, S; // the tich va dien tich
    printf("Nhap ban kinh cua hinh cau: ");
    scanf("%f", &R);
    V = (4.0/3) * M_PI * pow(R,3);
    S = 4 * M_PI * pow(R,2);
    printf("The tich cua hinh cau co ban kinh %f la: %.1f\n", R, V);
    printf("Dien tich cua hinh cau co ban kinh %f la: %.1f\n", R, S); 
    return 0;
}

