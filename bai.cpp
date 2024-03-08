/*



*/

#include <stdio.h>
#include <math.h>

// hàm tính giai thừa
double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// tính sinx
double tinh_sin(double x) {
    double term;
    double sinx = 0;
    int n = 0;
    do {
        term = pow(-1, n) * (pow(x, 2 * n + 1) / factorial(2 * n + 1));
        sinx += term;
        n++;
    } while (fabs(term) > pow(10, -6));
    return sinx;
}

int main() {
    // tôi sẽ thay đổi code tại dòng số 34
    double x; // khởi tạo giá trị x
    printf("Nhap x (Gia tri nhap vao tinh theo radian): ");
    scanf("%lf", &x);

    printf("sin%.1lf = %lf\n", x, tinh_sin(x));

    return 0;
}
