#include <stdio.h>

int main() {
    int n, a = 1, b = 1, next, i;

    printf("叫块璶ネΘ禣猧计计秖: ");
    scanf("%d", &n);

    printf("玡 %d 禣猧计计\n", n);

    for (i = 1; i <= n; i++) {
        if (i <= 2)
            next = 1;
        else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }

    printf("\n");

    return 0;
}
