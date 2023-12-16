#include<stdio.h>

int main() {
    int n, i, lastEvenIndex = -1;
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0) {
            lastEvenIndex = i;
        }
    }

    printf("%d
", lastEvenIndex);

    return 0;
}
