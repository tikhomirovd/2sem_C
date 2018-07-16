
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>


void random_mas(int n, int sep, int i, int flag[n][n], int count1[n], int count2[n], char** s) {
    for (int j = 0; j < n; j++) {
        if (j == sep) {
            s[i][j] = '#';
        } else {
            flag[i][j] = rand() % 2 + 0;
            if (flag[i][j]) {
                s[i][j] = rand() % 25 + 'A';
                if (j < sep) {
                    count2[i]++;
                }
            } else {
                s[i][j] = rand() % 25 + 'a';
                if (j < sep) {
                    count1[i]++;
                }
            }
        }
    }

}

void check(int n, int count1[n], int count2[n], char** s, int n1){
    int i = 0;
    for (i = 0; i < n - 1; i++) {
        if (count1[i] < count2[i]) {
            char t[100] = "";
            strcpy(t, s[i]);
            strcpy(s[i], s[i + 1]);
            strcpy(s[i + 1], t);
            free(s[n - 1]);
            n--;
            int p1 = count1[i];
            count1[i] = count1[i + 1];
            count1[i + 1] = p1;
            int p2 = count2[i];
            count2[i] = count2[i + 1];
            count2[i + 1] = p2;
            i--;
        }
    }
    i++;
    if (count1[i] < count2[i]) {
        char t[100] = "";
        free(s[n - 1]);
        n--;
    }
    for (i = 0; i < n; i++) {
        for (int j = 0; j < n1; j++) {
            printf("%c", s[i][j]);
        }
        printf("\n");
    }

}

int main() {
    srand(time(NULL));
    int n = 0, sep = 0;
    assert(scanf("%d", &n));
    int flag[n][n], n1 = n, count1[n], count2[n];
    for (int i = 0; i < n; i++) {
        count1[i] = count2[i] = 0;
    }
    char **s = malloc((n + 1) * (n + 1) * sizeof(char));
    for (int i = 0; i < n; i++) {
        s[i] = malloc((n + 1) * sizeof(char));
    }
    for (int i = 0; i < n; i++) {
        assert(scanf("%d", &sep));
        assert(sep < n);
        random_mas(n, sep, i, flag, count1, count2, s);
    }
    if (count1 == 0) {
        printf("No matching strings");
    } else {
        check(n, count1, count2, s, n1);
    }
    for (int i = 0; i < n; i++) {
        free(s[i]);
    }
    free(s);
    return 0;
}