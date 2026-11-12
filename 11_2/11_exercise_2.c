#include <stdio.h>

int main(void) {
    int i = 300;              // 300으로 변경해서도 해보기
    int *pi = &i;           // int형 포인터: 4 byte 단위로 읽음
    char *pc = (char *)&i;  // char형 포인터: 1 byte 단위로 읽음, '(char *)'는 컴파일 에러 방지

    printf("%i, %i, %i\n", i, *pi, *pc);    // *pi, *pc는 간접 참조 연산자 → i가 점유하는 메모리의 값을 찍음
    return 0;
}                                           // 300, 300, 44 → 마지막에 44가 출력되는 이유 : char 자료형의 영향