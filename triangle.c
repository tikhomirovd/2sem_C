#include "math.h"
#include <stdio.h>


int main() {
    double d, pi = 3.14;
    printf("%s", "Input diametr\n");
    scanf("%lf", &d);
    double s = pi * d * d / 4;
    printf("%s%lf", "area of circle is ", s);

    int ax, ay, bx, by, cx, cy;
    printf("%s", "\nInput cord\n ");
    scanf("%d%d%d%d%d%d", &ax, &ay, &bx, &by, &cx, &cy);
        int AX = bx - ax, AY = by - ay;
        int BX = cx - bx, BY = cy - by;
        int CX = ax - cx, CY = ay - cy;
        double lenA = sqrt(AX * AX + AY * AY);
        double lenB = sqrt(BX * BX + BY * BY);
        double lenC = sqrt(CX * CX + CY * CY);
        double P = lenA + lenB + lenC;
        double p = P / 2;
        double S = sqrt(p * (p - lenA) * (p - lenB) * (p - lenC));
        printf("%s%lf", "Perimetr of a triangle is ", P);
        printf("%s%lf", "\nArea of a triangle is ", S);

    return 0;
}
