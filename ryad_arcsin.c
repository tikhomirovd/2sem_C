#include <stdio.h>
#include <math.h>


int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);


}

double abs_f(double a){
    if (a > 0)
        return a;
    else
        return a * (-1);
}

double check(double a){
    while (abs_f(a) > 1) {
        printf("Input error. please enter a number from -1 to 1 ");
        scanf("%lf", &a);

    }
    return a;
}

int main() {

    double x, a = 2;
    printf("input x\n");
    scanf("%lf", &x);
    x = check(x);
    printf("input e\n");
    double e;
    scanf("%lf", &e);
    double s = 0;
    double f = asin(x);

    for (int i = 0; abs_f(f - s) > e; ++i) {
        int i2 = 2 * i + 1;
        s += pow(x, i2) * factorial(2 * i) / (pow(4, i) * pow(factorial(i), 2) * i2);
    }

    printf("F = %lf \n", f);
    printf("S = %lf \n", s);
    printf("abs(F - S) = %lf \n", abs_f(f - s));
    printf("abs((F-S)/F) = %lf \n", abs_f((f - s) / f));
    return 0;
}