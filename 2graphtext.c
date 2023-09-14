#include <stdio.h>

int main() {
    printf("H    H    A\n");
    printf("H    H   A A\n");
    printf("HHHHHH  A   A\n");
    printf("H    H AAAAAAA\n");
    printf("H    H A     A\n");//開發時優先考量可讀性，之後再優化，不一定可讀性高就效能差
    printf("===================\n");
    printf("H    H    A\n"
           "H    H   A A\n"
           "HHHHHH  A   A\n"
           "H    H AAAAAAA\n"
           "H    H A     A\n");
    return 0;
}
