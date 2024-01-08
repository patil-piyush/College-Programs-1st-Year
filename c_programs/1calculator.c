#include<stdio.h>

int main() {
    int a, b;
    char op;
    float result;
    printf("Enter a = ");
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d",&b);
    printf("Enter operator (+, -, *, /, %) ");
    scanf("\n%c", &op);
    if(op == '+')
        result = a + b;
    if(op == '-')
        result = a - b;
    if(op == '*')
        result = a * b;
    if(op == '/')
        result = a/b;
    printf("%f", result);
    return 0;
}
