#include <stdio.h>

int main(void) {
    int i = 300;              // 300으로 변경해서도 해보기
    int *pi = &i;           // int형 포인터: 4 byte 단위로 읽음
    char *pc = (char *)&i;  // char형 포인터: 1 byte 단위로 읽음

    printf("%i, %i, %i\n", i, *pi, *pc);
    return 0;
}