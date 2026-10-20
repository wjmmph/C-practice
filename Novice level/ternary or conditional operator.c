#include <stdio.h>

int main(void)
{
    int a;
    int b;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        fprintf(stderr, "Please enter two valid integers.\n");
        return 1;
    }

    int greater = (a > b) ? a : b;
    printf("The greater number is: %d\n", greater);

    return 0;
}