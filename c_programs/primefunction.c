#include<stdio.h>
#include<stdbool.h>
bool isPrime(int n){
    if(n==0 || n==1){
        return false;
      }
   for(int i=2; i<n ; i++){
      if(n%i==0){
        return false;      
      }
   }
   return true;
}
int main(){
  int N,i=0;
  printf("Enter the num upto which prime numbers are to be printed= ");
  scanf("%d", &N);
  for(i=0;i<N;i++){
      if(isPrime(i)){
         printf("%d\n",i);
      }
  }
  return 0;
}

