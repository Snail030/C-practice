#include <stdio.h>

/*撰寫程碼考慮的要點：
正確性 + 維護性 = 可讀性(至少自己看得懂)←最重要
效率 = 處理器 + 記憶體的使用量
擴展性 =
*/

//寫法1
int main(){
    int integer1, integer2, integer3, sum;
    printf("Please enter the first integer: ");
    scanf("%d", &integer1);
    // %d表示10進位整數，&是取址運算子
    printf("Please enter the second integer: ");
    scanf("%d", &integer2);
    printf("Please enter the third integer: ");
    scanf("%d", &integer3);
    sum = integer1 + integer2 + integer3;;
    // =是指定運算子，會將右邊的值算出後，指定為左邊的變數內容
    printf("Sum is %d.\n", sum);
    return 0;
}
//上述可能需要更多記憶體(較多變數且隨數字成正比)但CPU用量不變(只做一次運算指令(sum=int+n次))
// 求100個數字和? 記憶體的用量? 目前主流偏好省CPU的寫法1，因為記憶體沒用完就沒事。

/* 寫法2
int main(){
    int integer, sum; //不管多少數字和，只宣告兩個變數
    printf("Please enter the first integer: ");
    scanf("%d", &integer);
    sum = sum +integer
    // 每次都將之前的和放回sum
    printf("Please enter the second integer: ");
    scanf("%d", &integer);
    sum = sum +integer
    printf("Please enter the third integer: ");
    scanf("%d", &integer);
    sum = sum +integer
    printf("Sum is %d.\n", sum);
    return 0;
}
上述寫法需執行更多次指令(sum = sum + integer)，可能須使用更多CPU但省記憶體。
*/
