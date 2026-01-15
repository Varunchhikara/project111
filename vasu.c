// DEGREE TO FAHRENHEIT .......
/*#include <stdio.h>
int main(){
   float f, c;
   printf("Enter Fahrenheit: ");
   scanf("%f",&f);
   c= (f - 32)*5/9;
   printf("Celsius: %f degree", c);
   return 0;
}
#include <stdio.h>
int main()
{
    int a =5;
    int b =6;
    printf("b=%d\n",a);
    printf("a=%d",b);
    return 0;
}
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>  SIMPLE INTREST   >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include <stdio.h>
int main()
{
    float P, R, T, SI;
    printf("enter P:");
    scanf("%f", &P);
    printf("enter r:");
    scanf("%f", &R);
    printf("enter t:");
    scanf("%f", &T);
    // formula lagaya hh....
    SI = (P * R * T) / 100;
    printf("the simple intrest = %0.2f", SI);
    return 0;
}
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   CALCULATOR    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include <stdio.h>
int main()
{
    int first, second, add, subtract, multiply;
    float divide;// used float because answer can be in decimal
    printf("Enter two integers:\n");//asking for 2 integer no
    scanf("%d%d", &first, &second);
    add = first + second;//to add two nos
    subtract = first - second;//to subtract two nos
    multiply = first * second;// to multiply two nos
    divide = first / (float)second;//to divide two nos
    //asking for answer
    printf("Sum = %d\n", add);
    printf("subtract = %d\n", subtract);
    printf("Multiplication = %d\n", multiply);
    printf("Division = %f\n", divide);
    return 0;//to end the code
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> SIMPLE CALCULATOR <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#include <stdio.h>
int main()
{
    char operator;
    float num1, num2, result;

    printf("welcome simple calculator!");

    printf("select an operator (/,*,-,+):");
    scanf("%c", &operator);

    printf("enter the num1:");
    scanf("%f", &num1);

    printf("enter the num2:");
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
}*/
/*#include <stdio.h>
int main ()
{
    int A=2,B=0;
    printf("the value of a and b is %d\n",A&&B);
    printf("the value of a or b is %d\n",A||B);
    printf("the value of a(not) is %d",!A);
     return 0;

}*/
/*#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 25)
    {
        printf("You can drive!\n");
    }
    else if (age > 18)
    {
        printf("You can drive, but you are too young!\n");
    }
    else
    {
        printf("You can't drive!\n");
    }

    return 0;
}*/
