/*6. Make a Calculator, it should include:
    a. Addition
    b. Subtraction
    c. Multiplication
    d. Division
    e. Trigonometry
    f. Exponential*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1,num2, tr_op;
    double angle,x;
    char ch;
    printf("Choose an operation:\na. Addition\nb. Subtraction\nc. Multiplication\nd. Division\ne. Trigonometry\nf. Exponential\n");
    scanf(" %c",&ch);
    switch(ch)
    {
    case 'a':
        printf("Enter two numbers separated by spaces: ");
        scanf("%d %d", &num1,&num2);
        printf("The Addition is: %d", num1+num2);
        break;
    case 'b':
        printf("Enter two numbers separated by spaces: ");
        scanf("%d %d", &num1,&num2);
        printf("The Subtraction is: %d", num1-num2);
        break;
    case 'c':
        printf("Enter two numbers separated by spaces: ");
        scanf("%d %d", &num1,&num2);
        printf("The Multiplication is: %d", num1*num2);
        break;
    case 'd':
        printf("Enter numerator and denominator separated by spaces: ");
        scanf("%d %d", &num1,&num2);
        printf("The Division is: %d", num1/num2);
        break;
    case 'e':
        printf("Enter an angle in radians: ");
        scanf("%lf", &angle);
        printf("Choose a trigonometric operation: \n1. Sine\n2. Cosine\n3. Tangent\n4. Cosecant\n5. Secant\n6. Cotangent\n");
        scanf("%d", &tr_op);
        switch(tr_op)
        {
            case 1: printf("The Sine of the angle %lf is %lf", angle, sin(angle)); break;
            case 2: printf("The Cosine of the angle %lf is %lf", angle, cos(angle)); break;
            case 3: printf("The Tangent of the angle %lf is %lf", angle, tan(angle)); break;
            case 4: printf("The Cosecant of the angle %lf is %lf", angle, pow(sin(angle),-1)); break;
            case 5: printf("The Secant of the angle %lf is %lf", angle, pow(cos(angle),-1)); break;
            case 6: printf("The Cotangent of the angle %lf is %lf", angle, pow(tan(angle),-1)); break;
            default: printf("Choose a valid number"); break;
        }
        break;
    case 'f':
        printf("Enter a number: ");
        scanf("%lf", &x);
        printf("The Exponential of %lf is: %lf", x, exp(x));
        break;
    default:
        printf("Choose a valid operation");
        break;
    }
    return 0;
}
