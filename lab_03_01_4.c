#include <stdio.h>


int input()
{
    int rc, num;
    char tmp;
    while(((rc = scanf("%d%c", &num, &tmp)) != 2 && rc != EOF) || tmp != '\n') {

    }
    return 0;
}

int check_int(){
    int rc, num;
    char tmp;
    printf("Enter an integer: ");

    while(((rc = scanf("%d%c", &num, &tmp)) != 2 && rc != EOF))
    {
        printf("Input error. Please, enter an integer: ");
        do
        {
            rc = scanf("%c", &tmp);
        }
        while(rc != EOF);
    }
    if (num != '\n') {
        return num;
    } else {
        return 0;
    }

}

int main()
{

    int a = check_int();
    int b = check_int();



    return 0;
}
