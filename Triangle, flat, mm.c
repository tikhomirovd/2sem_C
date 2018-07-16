#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <alg.h>


void triangle(double ax, double ay, double bx,
              double by, double cx, double cy) {

    double AX = bx - ax, AY = by - ay;
    double BX = cx - bx, BY = cy - by;
    double CX = ax - cx, CY = ay - cy;
    double lenA = sqrt(AX * AX + AY * AY);
    double lenB = sqrt(BX * BX + BY * BY);
    double lenC = sqrt(CX * CX + CY * CY);
    if (lenA + lenB > lenC && lenA + lenC > lenB && lenB + lenC > lenA)
        printf("Triangle is exists\n");
    else
        printf("Triangle is not exists\n");
}

int det(int a, int b, int c, int d) {
    return d * d - b * c;
}

bool between(int a, int b, double c) {
    double  E = 1E-9;
    return min(a, b) <= c + E && c <= max(a, b) + E;
}



void intersection() {
    double xt, yt;
    double x1, x2, y1, y2;
    scanf("%lf%lf%lf%lf", &x1, &x2, &y1, &y2);
    scanf("%lf%lf", &xt, &yt);

    if (x2 == x1 || y1 == y2) {
        printf("Division on zero impossible\n");
        printf("not in line");

    }
    if ((xt - x1) / (x2 - x1) == (yt - y1) / (y2 - y1))
        printf("In line");
    else
        printf("not in line");
}

/* При всех входных данных неверный вывод
 * При вводе любых данных пишет, что деление на ноль, что не так.
 * Ожидаемый результат, in line.
 * 2 1 1 2 2 1 -> division on zero, False
 * Была опечатка в условии проверки, исправлена.
 * 2 1 1 2 2 1 -> in line, True
 * version 0.0.1
 */

void numfloor(int flat) {
    int flatperfloor = 4;
    int floors = 9;

    if (flat > 0) {
        int flatsperEntrance = floors * flatperfloor;
        int entrance = flat / flatsperEntrance + 1;
        int floor = (flat % flatsperEntrance)/ flatperfloor + 1;
        printf("%s%d", "Number of entrance is ", entrance);
        printf("%s%d", "\nNumber of flor is ", floor);
    }
    else
        printf("Must be above zero");

}

void distancemm(int mm) {

    if (mm > 0) {
        int m = mm / 1000;
        int cm = (mm / 10 % 100);
        int mmt = mm % 10;
        printf("%d%s%d%s%d%s", m, " m, ", cm, " cm, ", mmt, " mm" );
    } else
        printf("Must be above zero");
}


int main() {
    int choise;
    intersection();
    printf("Choise prog. \n 1)Triangle\n 2)Flat\n 3)Changemm\n");
    scanf("%d", &choise);
    if (choise == 1) {
        double ax, ay, bx, by, cx, cy;
        printf("Input cords \n");
        scanf("%lf%lf%lf%lf%lf%lf", &ax, &ay, &bx, &by, &cx, &cy);
        triangle(ax, ay, bx, by, cx, cy);
    }
    else if (choise == 2) {
        int flat;
        printf("Input number of flat ");
        scanf("%d", &flat);
        numfloor(flat);
    }
    else if (choise == 3) {
        int mm;
        printf("Input distance in mm");
        scanf("%d", &mm);
        distancemm(mm);
    }
    else
        printf("There is no prog");

    return 0;
}