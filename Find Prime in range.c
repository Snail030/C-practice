#include <stdio.h>

int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int start, end;

    printf("請輸入範圍的開始和結束：");
    scanf("%d %d", &start, &end);

    printf("在範圍 %d 到 %d 中的質數有：\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
