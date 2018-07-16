#include <stdio.h>

#define _USE_MATH_DEFINES

#include <math.h>


void average(int *array) {
    printf("AVERAGE\n");
    int sum = 0, count = 0;
    for (int i = 0; i < 10; ++i) {
        if (array[i] < 0) {
            sum += array[i];
            count++;
        }
    }
    if (count > 0) {
        double b = sum / count / 1.0;
        printf("%lf", b);
    } else {
        printf("There is no negative elements\n");
    }

}

void gnome_sort(int *array) {
    printf("\nGNOME SORT\n");
    size_t i = 0;

    while (i < 10) {
        if (i == 0 || array[i - 1] <= array[i]) i++;
        else {
            int tmp = array[i];
            array[i] = array[i - 1];
            array[--i] = tmp;
        }
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d ", array[i]);


    }
}

void same_digit(int *array) {
    printf("SAME_DIGIT\n");
    int new_array[10] = {0};
    int count = 0;
    for (int i = 0; i < 10; ++i) {
        if (array[i] > 9 || array[i] < -9) {
            int first = array[i] % 10;
            int second = array[i] / (int) pow(10, floor(log10(array[i])));
            if (first == second) {
                new_array[count] = array[i];
                count++;
            }
        }
    }
    int a = -1;
    for (int i = 0; i < 10; ++i) {
        if (new_array[i] != 0) {
            a++;
            printf("%d ", new_array[i]);
        }
    }
    if (a == -1) {
        printf("There is no same digit number\n");
    }

}

void sqr(int *array) {
    printf("\nSQRT\n");
    for (int i = 0; i < 10; ++i) {

        if (sqrt(array[i]) != (int) sqrt(array[i])) {
            array[i] = -1;

        }
    }
    int a = -1;
    for (int j = 0; j < 10; ++j) {
        if (array[j] != -1) {
            printf("%d ", array[j]);
            a++;
        }
    }
    if (a == -1) {
        printf("There is no full sqrt number");
    }
}

int main() {
    int array[10];
    for (int i = 0; i < 10; ++i) {
        int a;
        scanf("%d ", &a);
        array[i] = a;
    }
    for (int j = 0; j < 10; ++j) {
        printf("%d ", array[j]);
    }
    printf("\n");
    average(array);
    same_digit(array);
    gnome_sort(array);
    sqr(array);
    return 0;
}
