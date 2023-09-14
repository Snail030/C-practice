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
    //int加減乘除double的情況,C語言會自動隱性轉移成範圍較大的型別作計算
    //除以3.是一種int隱性轉型成double或float的方法
    printf("Average is %f.\n",average);
}
