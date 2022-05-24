#include <stdio.h>
int main(){
    int num;
    int a,b,c,d,e;

    printf("만 단위의 정수를 입력하시오: ");
    scanf("%d", &num);

    a = num / 10000;
    b = (num % 10000)/ 1000;
    c = (num % 10000) % 1000 / 100;
    d = ((num % 10000) % 1000) % 100 / 10;
    e = (((num % 10000) % 1000) % 100) % 10;

    printf("%d %d %d %d %d", e,d,c,b,a);

    return 0;
}