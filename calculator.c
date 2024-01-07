#include<stdio.h>

int main(){
        char operator;
        double num1;
        double num2;
        double result;
    
        printf("\nEnter the operator (+ - / *):");
        scanf("%c",&operator);

        printf("Enter the num 1:");
        scanf("%lf",&num1);

        printf("Enter the num 2:");
        scanf("%lf",&num2);

        switch (operator)
        {    
        case '+':
            result = num1+num2;
            printf("%lf ",result);
            break;

         case '-':
            result = num1 - num2;
            printf("%lf ",result);
            break;

        case '/':
            result = num1 / num2;
            printf("%lf ",result);
            break;

        case '*':
            result = num1 * num2;
            printf("%lf ",result);
            break;
            
        default:
        printf("%c is not valid",operator);
            break;
        }

    return 0;
}