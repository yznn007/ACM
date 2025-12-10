#include <math.h>
#include <stdbool.h>
#include <stdio.h>
bool isprime(int n) {
    if (n < 2)
        return 0;
    if (n == 2 || n == 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i <= sqrt(n); i + 6) {
        if (n % i == 0)
            return 0;
        if (n % (i + 2) == 0)
            return 0;
    }
    return 1;
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int l, r;
        scanf("%d%d", &l, &r);
        int count = 0;
        for (int i = l; i <= r; i++) {
            if (isprime(i))
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
