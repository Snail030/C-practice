#include <stdio.h>

int main(){
    printf("sizeof long int is: %d.\n", sizeof(long int));
    float a = 123.45;
    double b = 123.45;
    printf("a is %f.\n", a);
    printf("b is %f.\n", b); //�ɶq��double�s�B�I��,��10�i���ഫ������|���~�t
}

//sizeof�i�H�ˬd�����ҹw�]�ܼ��������O����j�p�A��쬰byte
//float�ϥ�4��bytes,23bits�s���ļƦr,8bits�s����,1bit�s���t
//double�ϥ�8��bytes,52bits�s���ļƦr,11bits�s����,1bit�s���t
