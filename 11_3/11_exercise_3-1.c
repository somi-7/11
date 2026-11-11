#include <stdio.h>

// call by value : 값의 복사본을 받음 -> 원본 a, b는 안 바뀜
void swap_value(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

// call by reference : 주소를 받음 -> 포인터로 원본 a, b를 직접 바꿈
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int a = 3;
    int b = 5;

    printf("before            a:%i, b:%i\n", a, b);

    swap_value(a, b);
    printf("call by value     a:%i, b:%i\n", a, b);

    swap(&a, &b);
    printf("call by reference a:%i, b:%i\n", a, b);

    return 0;
}