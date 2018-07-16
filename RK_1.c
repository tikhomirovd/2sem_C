#include <stdio.h>
#include <stdlib.h>

void sum() {
    int num;
    printf("Input number ");
    scanf("%d", &num);
    if (num < 10) {
        printf("Number is less than 10");
    } else {
        int last = num % 10;
        int first = num / 10;
        while (first / 10 > 0) {
            first /= 10;
        }
        printf("Sum is %d", last + first);

    }

}

void posl() {
    int num;
    int max = -1000;
    int sum = 0;
    printf("Input number");
    scanf("%d", &num);

    while (num != 349) {
        if ((num >= 100 && num <= 999) || (num <= -100 && num >= -999)) {
            if (num % 2 == 0 && num > max) {
                max = num;
            }
            if (num < 0) {
                sum += num;
            }
            printf("Input number ");
            scanf("%d", &num);
        }
    }
    printf("Sum is %d", sum);
    printf("\nMax is %d", max);
}

void file() {
    FILE *file = NULL;
    file = fopen("/home/dimas/BMSTU/2sem_C/RK_1/numbers.txt", "r");
    if (file == NULL) {
        return;
    }
    int num;
    while (fscanf(file, "%d", &num) != EOF) {
        if (num % 7 == 0) {
            printf("%d\n", num);
        }
    }


}


int main() {
    printf("1) Sum\n2)Posl\n3)file\n");
    int a;
    scanf("%d", &a);
    if (a == 1) {
        sum();
    }
    if (a == 2) {
        posl();
    }
    if (a == 3) {
        file();
    }
    return 0;
}
