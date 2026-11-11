#include <stdio.h>

int main(void)
{
    char *pc;
    int *pi;
    double *pd;

    pc = (char *)10000;
    pi = (int *)10000;
    pd = (double *)10000;

    printf("before increasing : pc = %lld, pi = %lld, pd = %lld\n",
           (long long)pc, (long long)pi, (long long)pd);

    pc++;
    pi++;
    pd++;
    printf("after increasing : pc = %lld, pi = %lld, pd = %lld\n",
           (long long)pc, (long long)pi, (long long)pd);

    return 0;
}