#include<stdio.h>
int main(){

//initialize the subjects and percentage
  int i,mySubject[5],sum=0;
  float per;
  
  //read marks
  printf("enter the marks of each subject\n");
  for(int i=0;i<=4;i++)
  {
    scanf("%d",&mySubject[i]);
  }
  
  //percentage
  for(int i=0;i<=4;i++)
  {
    sum=sum+mySubject[i];
  }
  per=sum/5.00;
  printf("percentage of your student is %.3f\n", per);
  
  //check grades
  if(per>=90)
  {
    printf("Grade A\n");
  }
  else if(per>=80)
  {
    printf("Grade B\n");
  }
  else if(per>=70)
  {
    printf("Grade c\n");
  }
  else if(per>=60)
  {
    printf("Grade D\n");
  }
  else if(per>=40)
  {
    printf("Grade E\n");
  }
  else
  {
    printf("Grade F");
  }
}
