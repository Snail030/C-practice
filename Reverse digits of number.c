#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;

    printf("�п�J�@�Ӿ�ơG");
    scanf("%d", &num);

    int reversed = reverseNumber(num);
    printf("����᪺�Ʀr�G%d\n", reversed);

    return 0;
}
