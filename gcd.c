#include<stdio.h>

int main(){
   int n1,n2,GCD;
   printf("Enter 2 nums=");
   scanf("%d %d",&n1,&n2);
   for(int i=1;i<=n1 && i<=n2;++i){
      if(n1%i==0 && n2%i==0){
         GCD=i;
      }
      
   }
   printf("the gcd of %d and %d is %d\n",n1,n2,GCD);
   return 0;
}
