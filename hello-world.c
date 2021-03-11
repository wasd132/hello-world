#include <stdio.h>

// function 정의
int add(int a, int b) {
    int result = a + b;

    return result;
}

// main 함수
int main() {

    // variable 선언 및 초기화
    int x = 0;
    int y = 0;
    int result = 0;

    // variable에 값 저장
    x = 30;
    y = 20;

    // function 호출(call), return 값을 result에 저장
    result = add(x, y);

    // 출력
    printf("Hello, World!\n");
    printf("x = 30, y = 20\n");
    printf("result = %d\n", result);

    return 0;
}
