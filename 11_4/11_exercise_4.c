#include <stdio.h>

int main(void)
{
    int i;
    int grade[5];
    int *ptr;           // grade 배열에 접근할 포인터
    int sum = 0;

    for (i = 0; i < 5; i++)
    {
        printf("input value (%i) : ", i);
        scanf("%d", &grade[i]);
    }

    ptr = grade;        // 배열 이름 = 첫 원소 주소 (&grade[0]와 동일)

    for (i = 0; i < 5; i++)
    {
        printf("grade[%i] = %d\n", i, *(ptr + i));
        sum += *(ptr + i);
    }

    printf("\n average : %d\n", sum / 5);

    return 0;
}