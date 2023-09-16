#include<stdio.h>
   int main(){
   //declare the variables
     int n,r,rev=0,temp;
     printf("enter the num=");
     scanf("%d",&n);
     temp=n;
     while(n!=0){
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
     }
     if(temp==rev){
         printf("it is pallindrome");
     }
     else{
          printf("it is not pallindrome");
     }
     return 0;
  }
