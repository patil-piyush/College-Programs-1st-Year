#include<stdio.h>
int main(){
    //initialize terms
    int r,sum=0,temp=0,n,count;
    //read number
    printf("enter the num=");
    scanf("%d",&n);
    count=0;
    //assign temp as num
    temp=n;
    
    while(temp!=0){
       temp=temp/10;
       count++;    
    }
    while(n>0){
        r=n%10;
        sum = sum + pow(n,count);
        n=n/10;
    }
    if(temp==sum){
       printf("it is a armstrong number\n");
       }
    else{
        printf("it is not a armstrong number\n");
    }
    return 0;
}
