#include <stdio.h>

int main() {
    int n, a = 1, b = 1, next, i;

    printf("�п�J�n�ͦ����O�i�ǫ��ƦC���ƶq: ");
    scanf("%d", &n);

    printf("�e %d �ӶO�i�ǫ��ƦC�Ʀr�G\n", n);

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
