//교통카드 시스템 만들기
#include <stdio.h>
int main(){

    int balance = 10000; // 교통카드 잔액
    int age;
    
    while(balance > 0){
        printf("나이를 입력하세요: ");
        scanf("%d", &age);

        if(age >= 7 && age <= 12){
            balance -= 450;
            if (balance <= 0)
            {
                break;
            }
            printf("%d\n", balance);
        }
        else if(age >= 13 && age <= 18){
            balance -= 720;
            if (balance <= 0)
            {
                break;
            }
            printf("%d\n", balance);
        }
        else if(age >= 19){
            balance -= 1200;
            if (balance <= 0)
            {
                break;
            }
            printf("%d\n", balance);
        }
        else{
            printf("%d\n", balance);
        }
    }
    return 0;
}