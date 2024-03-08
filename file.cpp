#include <stdio.h>
#include <math.h>

#define EPS 1e-6

double tinh_Sin(double x) {
    double q = 0;
    double t = x;
    int k = 1;

    do {
        q += t;
        k += 2;
        t = -t * pow(x, 2) / (k * (k - 1));
    } while (fabs(t) > EPS);

    return q;
}

int main() {
    double x;

    // Nhập giá trị góc ở dạng radian
    printf("Nhap x (radian): ");
    scanf("%lf", &x);

    

    printf("Toi da thay doi mot so o code tai dong 29\n"); 
    // In giá trị của sin(x) tính bằng khai triển
    printf("Gia tri cua sinx theo khai trien: %.6lf\n", tinh_Sin(x));

    // In giá trị của sin(x) tính bằng hàm sin() trong thư viện math
    printf("Gia tri sin cua may: %.6lf\n", sin(x));

    return 0;
}
