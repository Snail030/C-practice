#include <stdio.h> //呼叫函式庫

int main() { //程式開始執行
    printf("hello word!\n");
    printf("hello\nworld!\n");//\n為跳脫字元中的換行
    printf("hello\"world!\"\n");//\"為跳脫字元中的雙引號
    printf("hello\tworld!");//\t為跳脫字元中的空4格(跳位)
    return 0; //程式執行結束，回傳0表示程式執行成功
    printf("hellow\n world!"); //已執行結束，故不會編譯和執行
}
