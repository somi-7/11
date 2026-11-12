#include <stdio.h>

int main(void)
{
    int i;
    int grade[5];
    int sum = 0;

    for (i = 0; i < 5; i++)
    {
        printf("input value (%i) : ", i);
        scanf("%d", &grade[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("grade[%i] = %d\n", i, *(grade + i));
        sum += *(grade + i);                            // 배열 문법X, 포인터 문법 사용
    }

    printf("\n average : %d\n", sum / 5);

    return 0;
}