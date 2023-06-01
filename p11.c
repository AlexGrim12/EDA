#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int bin(int n) {
    if (n == 0) return 0;
    else return (n % 2 + 10 * bin(n / 2));
}

int main() {
    int x, xBin;

    scanf("%d", &x);
    xBin = bin(x);
    printf("%d\n", xBin);
}