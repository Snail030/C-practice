#include <stdio.h>

int main() {
    int n, a = 1, b = 1, next, i;

    printf("請輸入要生成的費波納契數列的數量: ");
    scanf("%d", &n);

    printf("前 %d 個費波納契數列數字：\n", n);

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
