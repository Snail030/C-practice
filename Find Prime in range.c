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

    printf("�п�J�d�򪺶}�l�M�����G");
    scanf("%d %d", &start, &end);

    printf("�b�d�� %d �� %d ������Ʀ��G\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
