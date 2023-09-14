#include <stdio.h>

int main(){
    printf("sizeof long int is: %d.\n", sizeof(long int));
    float a = 123.45;
    double b = 123.45;
    printf("a is %f.\n", a);
    printf("b is %f.\n", b); //盡量用double存浮點數,做10進制轉換比較不會有誤差
}

//sizeof可以檢查該環境預設變數類型的記憶體大小，單位為byte
//float使用4個bytes,23bits存有效數字,8bits存指數,1bit存正負
//double使用8個bytes,52bits存有效數字,11bits存指數,1bit存正負
