#include <stdio.h>

int main() {
    int num1 = 12;
    int num2 = 5;
    char op = '*'; 
    switch(op) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            else
                printf("Division par zéro impossible !\n");
            break;
        case '%':
            if (num2 != 0)
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            else
                printf("Modulo par zéro impossible !\n");
            break;
        case '&':
            printf("%d & %d = %d\n", num1, num2, num1 & num2);
            break;
        case '|':
            printf("%d | %d = %d\n", num1, num2, num1 | num2);
            break;
        case '~':
            printf("~%d = %d, ~%d = %d\n", num1, ~num1, num2, ~num2);
            break;
        default:
            printf("Opérateur inconnu !\n");
    }

}
