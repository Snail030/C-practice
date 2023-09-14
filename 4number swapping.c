#include <stdio.h>

int main(){
    int integer1, integer2;
    printf("Please enter the first integer: ");
    scanf("%d", &integer1);
    printf("Please enter the second integer: ");
    scanf("%d", &integer2);

    int temp = integer2;
    integer2 = integer1;
    integer1 = temp;

    printf("integer1 is: %d\n", integer1);
    printf("integer2 is: %d\n", integer2);
}

/*¼gªk2
int main(){
    int integer1, integer2;
    printf("Please enter the first integer: ");
    scanf("%d", &integer1);
    printf("Please enter the second integer: ");
    scanf("%d", &integer2);

    integer1 = integer1 + integer2;
    integer2 = integer1 - integer2;
    integer1 = integer1 - integer2;

    printf("integer1 is: %d\n", integer1);
    printf("integer2 is: %d\n", integer2);
}
*/

/*¼gªk3
int main(){
    int integer1, integer2;
    printf("Please enter the first integer: ");
    scanf("%d", &integer1);
    printf("Please enter the second integer: ");
    scanf("%d", &integer2);

    integer1 = integer1 ^ integer2;
    integer2 = integer1 ^ integer2;
    integer1 = integer1 ^ integer2;

    printf("integer1 is: %d\n", integer1);
    printf("integer2 is: %d\n", integer2);
}
*/
