#include <stdio.h>
#include <stdint.h>
#include <time.h>

int main(void)
{
    const uint64_t N = 500000000ULL;
    uint32_t x = 0;

    clock_t start = clock();

    for (uint64_t i = 0; i < N; i++)
    {
        x = (x * 1664525U + (uint32_t)i + 1013904223U);
    }

    clock_t end = clock();

    double elapsed = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Iterations : %llu\n", (unsigned long long)N);
    printf("Time       : %.3f seconds\n", elapsed);
    printf("Speed      : %.0f iter/sec\n", N / elapsed);
    printf("Result     : %u\n", x);

    return 0;
}