#include <stdio.h>

/*���g�{�X�Ҽ{���n�I�G
���T�� + ���@�� = �iŪ��(�ܤ֦ۤv�ݱo��)���̭��n
�Ĳv = �B�z�� + �O���骺�ϥζq
�X�i�� =
*/

//�g�k1
int main(){
    int integer1, integer2, integer3, sum;
    printf("Please enter the first integer: ");
    scanf("%d", &integer1);
    // %d���10�i���ơA&�O���}�B��l
    printf("Please enter the second integer: ");
    scanf("%d", &integer2);
    printf("Please enter the third integer: ");
    scanf("%d", &integer3);
    sum = integer1 + integer2 + integer3;;
    // =�O���w�B��l�A�|�N�k�䪺�Ⱥ�X��A���w�����䪺�ܼƤ��e
    printf("Sum is %d.\n", sum);
    return 0;
}
//�W�z�i��ݭn��h�O����(���h�ܼƥB�H�Ʀr������)��CPU�ζq����(�u���@���B����O(sum=int+n��))
// �D100�ӼƦr�M? �O���骺�ζq? �ثe�D�y���n��CPU���g�k1�A�]���O����S�Χ��N�S�ơC

/* �g�k2
int main(){
    int integer, sum; //���ަh�ּƦr�M�A�u�ŧi����ܼ�
    printf("Please enter the first integer: ");
    scanf("%d", &integer);
    sum = sum +integer
    // �C�����N���e���M��^sum
    printf("Please enter the second integer: ");
    scanf("%d", &integer);
    sum = sum +integer
    printf("Please enter the third integer: ");
    scanf("%d", &integer);
    sum = sum +integer
    printf("Sum is %d.\n", sum);
    return 0;
}
�W�z�g�k�ݰ����h�����O(sum = sum + integer)�A�i�භ�ϥΧ�hCPU���ٰO����C
*/
