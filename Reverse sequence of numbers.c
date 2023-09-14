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

    printf("請輸入一個整數：");
    scanf("%d", &num);

    int reversed = reverseNumber(num);
    printf("反轉後的數字：%d\n", reversed);

    return 0;
}
