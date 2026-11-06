#include <stdio.h>
int main()
{
    int a;
    int b;
    char op;
    printf("Enter the first digit of number:\n");
    scanf("%d", &a);
    printf("Enter the operator(+,-,*,%%,/):\n");
    scanf(" %c", &op);
    printf("Enter the second digit of number:\n");
    scanf("%d", &b);
    switch (op)
    {
    case '+':

        printf("Result = %d\n", a + b);
        break;
    case '-':

        printf("Result = %d\n", a - b);
        break;
    case '*':

        printf("Result = %d\n", a * b);
        break;
    case '%':
        if (b != 0)
        {
            printf("Result = %d\n", a % b);
        }
        else
        {
            printf("When number is zero cannot divide by modoulus.\n");
        }

        break;
    case '/':
        if (b != 0)
        {
            printf("Result = %d\n", a / b);
        }
        else
        {
            printf("When Enter number is zero cannot be divided.\n");
        }

        break;

    default:
    printf("Invalid Operator!\n");
        break;
    }
    return 0;
}