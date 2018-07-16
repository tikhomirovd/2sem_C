#include <stdio.h>

int main()
{
    printf("[v1 л] [t1 °C] [v2 л] [t2 °C]: ");

    float v1;
    float t1;

    float t2;
    float v2;

    scanf("%f %f %f %f", &v1, &t1, &v2, &t2);

    float v = v1 + v2;
    printf("Объем: %f л\n", v);

    float t = (v2*t2 + v1*t1) / (v1 + v2);
    printf("Температура: %f °C\n", t);

    return 0;
}