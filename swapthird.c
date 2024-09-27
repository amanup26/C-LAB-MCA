#include <stdio.h>

int main() {
    int a, b, temp;

    /* Input values from user */
    printf("Enter first number: ");
 scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    /* Swap values of a and b */
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}