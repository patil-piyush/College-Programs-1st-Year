#include<stdio.h>
int main(){
    int k, flag=0, i;
    printf("enter the num to check :");
    scanf("%d", &k);
    
    for(i = 2; i<= k-1; i++){
           if(k%i == 0){
               flag=1;
               break;
               }
    }
    if(flag==1)
        printf("not prime");
    else
        printf("prime");
        return 0;
}
