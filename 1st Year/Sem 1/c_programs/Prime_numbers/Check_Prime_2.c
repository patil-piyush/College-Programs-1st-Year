#include<stdio.h>
int main(){
    int k,i;
    printf("enter the num to check :");
    scanf("%d", &k);
    
    for(i = 2; i<= k-1; i++){
           if(k%i == 0){
               break;
               }
    }
    if(i>=k)
        printf("prime");
    else
        printf("not prime");
        return 0;
}
