#include <stdio.h>
#include <math.h>
#include "header.h"

int main()
{
    double x1, y1;
    printf("Координаты центра окружности 1 (X, Y): ");
    scanf("%lf %lf", &x1, &y1);

    double x2, y2;
    printf("Координаты центра окружности 2 (X, Y): ");
    scanf("%lf %lf", &x2, &y2);

    printf("Расстояние между центрами: %lf\n", length(x1, y1, x2, y2));

    return 0;
}

double length(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
