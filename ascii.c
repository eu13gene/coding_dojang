#include <stdio.h>
int main(){
    char c1 = 'a';

    printf("%c\n", c1 = 97 - 32); // 어차피 아스키코드 사용할 거라 굳이 (int) 안 써도 되나봄! 그냥 65 입력하고
                                // %c로 받으면 그게 저절로 <아스키코드 -> 문자 변환> 

    return 0;
}