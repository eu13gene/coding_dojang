#include <stdio.h>
int main(){
    int num1, num2;

    printf("두 수를 입력하시오: ");
    scanf("%d %d", &num1, &num2);

    printf("두 수가 같은 수인가? %d\n", num1 == num2);
    if ((num1 == num2) == 0)
        printf("거짓\n");
    else   
        printf("참\n");
}