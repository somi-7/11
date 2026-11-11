#include <stdio.h>

// call by value : a, b의 "값"이 x, y에 복사됨
void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(void) {
    int a = 3;
    int b = 5;

    swap(a, b);
    printf("a:%i, b:%i\n", a, b);

    return 0;
}