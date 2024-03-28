#include<stdio.h>
int main(){
	//initialize the subjects and percentage
	int i,mySubject[5],sum=0,flag=0;
	float per;
	int ans;
	  
	//using while loop for n students
	while(flag=1){
		//read marks 
		sum=0;
		printf("enter the marks of each subject\n");
		for(int i=0;i<=4;i++){
			scanf("%d",&mySubject[i]);
			if(mySubject[i]>100){
				printf("Error : enter marks between 0 to 100\n");
				scanf("%d",&mySubject[i]);
			}
		}
		//percentage
		for(int i=0;i<=4;i++){
			sum=sum+mySubject[i];
		}
		per=sum/5.00;
		printf("percentage of your student is %.3f\n", per);
		  
		//check grades
		if(per<40){
			printf("Grade Fail\n");
		}
		else if(per<55){
			printf("Grade Third class\n");
		}
		else if(per<65){
			printf("Grade Second class\n");
		}
		else if(per<80){
	  		printf("Grade First class\n");
		}
		else if(per<95){
		  	printf("Grade Distinction\n");
		}
		else{
		  	printf("Extra ordinary\n");
		}
		  
		printf("if you want to repeat the process enter 1\n");
		scanf("%d",&ans);
		if(ans==1){
			flag=1;
		}
		else{
		  	break;
		}
	}
	return 0;
}
