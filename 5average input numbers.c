#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("Please enter the first integer: ");
    scanf("%d", &num1);
    printf("Please enter the second integer: ");
    scanf("%d", &num2);
    printf("Please enter the third integer: ");
    scanf("%d", &num3);
    double average = (num1 + num2 + num3)/3.;
    //int�[���double�����p,C�y���|�۰������ಾ���d����j�����O�@�p��
    //���H3.�O�@��int�����૬��double��float����k
    printf("Average is %f.\n",average);
}
