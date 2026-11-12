#include <stdio.h>

int main(void) {
    int i = 10;
    char c = 'a';

    int *iptr;          // 정수형 포인터 변수 iptr 선언, int* iptr;로 써도 되지만 비추천
    iptr = &i;          // iptr이 i를 가리키게 함
    char *cptr;         // 문자형 포인터 변수 cptr 선언
    cptr = &c;          // cptr이 c를 가리키게 함
    int *iptr2;         // 정수형 포인터 변수 iptr2 선언
    iptr2 = iptr;       // iptr2가 iptr이 가리키는 곳(i)을 동일하게 가리키게 함, 이미 주소값을 가지고 있음

    printf("i : %p\n%p (size:%i)\n", iptr, &i, sizeof(iptr));
    printf("c : %p\n%p (size:%i)\n", cptr, &c, sizeof(cptr));
    printf("iptr2 : %p, %i\n", iptr2, *iptr2);                // *iptr2는 간접 참조 연산자
    return 0;
}