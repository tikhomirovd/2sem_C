#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;
    float x0, y0;
    printf("Input cords of triangle. \n");
    scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("Input cords of dot. \n");
    scanf("%f%f", &x0, &y0);

    float a = (x1 - x0) * (y2 - y1) - (x2 - x1) * (y1 - y0);
    float b = (x2 - x0) * (y3 - y2) - (x3 - x2) * (y2 - y0);
    float c = (x3 - x0) * (y1 - y3) - (x1 - x3) * (y3 - y0);


    if ((a > 0 && b > 0 && c > 0) || (a < 0 && b < 0 && c < 0))
        printf("The point lies inside the triangle. ");
    else if (a == 0 || b == 0 || c == 0)
        printf("The point lies on the line of the triangle");
    else
        printf("The point lies outside the triangle. ");

    return 0;
}