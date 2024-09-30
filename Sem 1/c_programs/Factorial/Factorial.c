#include <stdio.h>

int main() {
    int fact=1, i=0, n;
    
    printf("Enter the num ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        fact = fact*i;
    }
    printf("factorial of number %d is %d", n, fact);
    return 0;
}
