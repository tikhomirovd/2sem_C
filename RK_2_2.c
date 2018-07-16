#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

struct human {
    char *surname;
    char *address;
    char *number;
};

void print_file();

void query();

void append(struct human person);

bool is_tel_valid(char *tel);

bool is_person_valid(struct human person);


static const char *filename = "human.txt";

int main() {
    query();
    return 0;
}

void print_file() {
    FILE *file = fopen(filename, "r");

    while (1) {
        char ch = fgetc(file);
        if (feof(file)) {
            break;
        }
        printf("%c", ch);
    }

    printf("\n");
    fclose(file);
}

void query() {
    char surname[128];
    char address[256];
    char number[64];

    printf("Surname:\n");
    scanf("%s", surname);
    printf("Address:\n");
    scanf("%s", address);
    printf("Telephone:\n");
    scanf("%s", number);

    struct human person;
    person.surname = surname;
    person.address = address;
    person.number = number;

    if (!is_person_valid(person)) {
        printf("Invalid data. Please try again.\n");
        return;
    }
    append(person);
    printf("\n");
    print_file();
}

void append(struct human person) {
    FILE *file = fopen(filename, "a+");

    if (file == NULL) {
        return;
    }

    fprintf(file, person.surname);
    fprintf(file, ";");
    fprintf(file, person.address);
    fprintf(file, ";");
    fprintf(file, person.number);
    fprintf(file, "\n");
    fclose(file);
}



bool is_tel_valid(char *tel) {
    if (tel[0] == 8 && tel[1] == 4 && tel[2] == 9
        && (tel[3] == 5 || tel[3] == 9) && strlen(tel) == 11) {
        return true;
    }
    else{
        return false;
    }
}

bool is_person_valid(struct human person) {
    return is_tel_valid(person.number);
}