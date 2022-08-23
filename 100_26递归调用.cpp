#include <stdio.h>

int main()
{
    long i;
    long fact(long);
    for (i = 0; i < 21; i++) {
        printf("%ld!=%ld\n", i, fact(i));
    }
}
long fact(long j)
{
    long sum;
    if (j == 0) {
        sum = 1;
    }
    else {
        sum = j * fact(j - 1);
    }
    return sum;
}