#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the value of a:\n");
    scanf("%d", &a);

    printf("Enter the value of b:\n");
    scanf("%d", &b);

    printf("Enter the value of c:\n");
    scanf("%d", &c);

    if (a > b) {
        if (a > c) {
            printf("a is bigger\n");

            if (b > c) {
                printf("c is smaller\n");
            }
            else {
                printf("b is smaller\n");
            }
        }
        else {
            printf("c is bigger\n");
            printf("b is smaller\n");
        }
    }
    else {
        if (b > c) {
            printf("b is bigger\n");

            if (a > c) {
                printf("c is smaller\n");
            }
            else {
                printf("a is smaller\n");
            }
        }
        else {
            printf("c is bigger\n");
            printf("a is smaller\n");
        }
    }

    return 0;
}
