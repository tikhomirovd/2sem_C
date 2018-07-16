#include <stdio.h>

int count(int* pfx, int* plx)
{
    int sum = 0;
    int mn = 1;
    int* pcurx = pfx;

    while (pcurx < plx)
    {
        mn *= *(pcurx);
        sum += mn;
        printf("%d %d %d \n", *pcurx, mn, sum);
        pcurx++;
    }
    printf("\n%d" ,sum);
    return 0;
}

int main(void)
{
    int x[100], a;
    int *pfx = &x[0];
    int *plx;
    char tmp;

    FILE *f;
    f = fopen("/home/dimas/BMSTU/2sem_C/lab05/lab_05_02/in_3.txt", "r");
    if (f == NULL)
    {
        puts("file does not exist\n");
        return -1;
    }

    int i = 0, m = 0;
    while (((fscanf(f, "%d%c", &a, &tmp)) == 2 ) && (tmp == ' '))
    {
        if (i > 100)
            break;

        if (a > 0) {
            x[i] = a;
        }

        if (a < 0)
        {
            m = i;
            x[i] = a;
            break;
        }
        i++;
    }
    plx = &x[m] + 1;

    count(pfx, plx);
    return 0;
}