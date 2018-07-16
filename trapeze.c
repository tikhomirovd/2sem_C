#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void square() {
    double a, b, phi;
    printf("Введите основания и угол");
    scanf("%lf%lf%lf", &a, &b, &phi);
    double h = abs(b - a) * tan(phi) / 2;
    double c = abs(b - a) / 2 / cos(phi);
    printf("%s%lf", "Square is ", (a + b) * h / 2);
    printf("%s%lf", "Perimetr is ", a + b + c * 2);


}

int main() {

    printf("Hello, World!\n");
    return 0;
}