#include <stdio.h>
int main()
{
    int a, b, sum, dif, mul;
    float div;
    char s;
    scanf("%d%c%d", &a, &s, &b);
    if (s == '+')
    {
        sum = a + b;
        printf("%d", sum);
    }
    else if (s == '-')
    {
        dif = a - b;
        printf("%d", dif);
    }
    else if (s == '*')
    {
        mul = a * b;
        printf("%d", mul);
    }
    else if (s == '/')
    {
        div = a / b;
        printf("%0.0f", div);
    }
}