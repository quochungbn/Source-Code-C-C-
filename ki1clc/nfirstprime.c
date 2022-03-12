#include <stdio.h>

int checkprime(long n)
{
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    return 1;
}


int main()
{

    long a;
    scanf("%ld", &a);
    long b = 2;
    while (a > 0) {
        if (checkprime(b) == 1) {
            printf("%ld\n", b);
            a--;
        }
        b++;
    }

    return 0;
}