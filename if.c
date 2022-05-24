#include <stdio.h>
int main(){

    int age; 

    printf("만 나이를 입력하세요: ");
    scanf("%d", &age);

    if (age < 18)
        printf("청소년 관람 불가");

    return 0;
}