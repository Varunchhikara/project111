#include <stdio.h>
int main()
{
    char operator;  
    float num1, num2, result;

    printf("welcome simple calculator!\n ");

    printf("select an operator (/,*,-,+):");
    scanf("%c", &operator);

    printf("enter the num1:\n");
    scanf("%f", &num1);

    printf("enter the num2:\n");
    scanf("%f", &num2);

    switch (operator)

    {

    case '+':
        result = num1 + num2;
        printf("%.2f+%.2f=%.2f", num1, num2, result);
        break;

    case '-':
        result = num1 - num2;
        printf("%.2f*-%.2f=%.2f", num1, num2, result);
        break;

    case '*':
        result = num1 * num2;
        printf("%.2f*%.2f=%.2f", num1, num2, result);
        break;

    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("%.2f/%.2f=%.2f", num1, num2, result);
        }
        else
        {
            printf(">>> error!, division by zero is not allowed\n");
        }

        break;
    }

    printf("\nthank you for using simple calculator\nmade by vasuXvarun");

    return 0;
}
