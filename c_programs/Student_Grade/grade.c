#include<stdio.h>
int main(){

  //initialize the subjects and percentage
  int phy,chem,maths,eng,comp;
  float per;
  
  //read marks
  printf("enter the marks of each subject\n");
  scanf("%d%d%d%d%d", &phy, &chem, &maths, &eng, &comp);
  
  //percentage
  per= (phy+chem+maths+eng+comp)/5.00;
  printf("percentage of your student is %.3f", per);
  
  //check grades
  if(per>=90){
    printf("Grade A\n");
  }
  else if(per>=80){
    printf("Grade B\n");
  }
  else if(per>=70){
    printf("Grade c\n");
  }
  else if(per>=60){
    printf("Grade D\n");
  }
  else if(per>=40){
    printf("Grade E\n");
  }
  else{
    printf("Grade F");
  }
  return 0;
}
