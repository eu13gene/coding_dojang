#include <stdio.h>
int main()
{
    int num, i;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    while(num != 0){
        int result;
        result = num  % 10;
        printf("%d ", result);
        num = num / 10;
    }

    return 0;
}