//Harshit patil 25070521104




#include <stdio.h>

int main() {
    int a, b;

    printf("Enter numbers: ");
    scanf("%d %d", &a, &b);

    // Check if both are positive
    if (a > 0 && b > 0)
        printf("Both are positive\n");
    else
        printf("Both are not positive\n");

    // Check if at least one number is 5
    if (a == 5 || b == 5)
        printf("%d or %d = 5\n", a, b);
    else
        printf("%d,%d != 5\n", a, b);

    // Check if first number is not greater than 10
    if (a > 10)
        printf("%d > 10\n", a);
    else
        printf("%d <= 10\n", a);

    return 0;
}

