#include<stdio.h>
#include <stdlib.h>

int main(){
    int k, i;
    printf("enter the num to check :");
    scanf("%d", &k);
    
    for(i = 2; i<= k-1; i++){
           if(k%i == 0){
               printf("not prime");
               exit(0);
               }
    }
        printf("prime");
        return 0;
}
