#include <stdio.h>
int main()
{
    int dividend, divisor, quotient = 0;
    printf("enter dividend and divisor\n");
    scanf("%d %d", &dividend, &divisor);
    for (int i = 1;; i++)
    {
        dividend = dividend - divisor;
        quotient++;
        if (dividend < divisor)
            break;
    }
    printf("quotient is %d and remainder is %d", quotient, dividend);
}