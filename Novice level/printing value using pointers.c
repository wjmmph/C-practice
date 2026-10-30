#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    void *p;
    p = &a;
    printf("Integer value: %d\n", *(int *)p);
    p = &b;
    printf("Float value: %.2f", *(float *)p);

    return 0;
}
