#include<stdio.h>
int main(){ 
	int p,c,m;
	int i=1;
	int d=1;
	float per;
	while (d == 1){
		p = 0;
		c = 0;
		m = 0;
		printf("Insert the marks of phy: \n");
		scanf("%d",&p);
		while(p>100 || p<0){
			printf("Reenter the Phy Marks\n");
			scanf("%d",&p);
		}
		printf("Insert the marks of Chem: \n");
		scanf("%d",&c);
		while(c>100 || c<0){
			printf("Reenter the Chem Marks\n");
			scanf("%d",&c);
		}
		printf("Insert the marks of Maths: \n");
		scanf("%d",&m);
		while(m>100 || m<0){
			printf("Reenter the Maths Marks\n");
			scanf("%d",&m);
		}
	
		per = (p + c + m)/5.0;
		printf("No of Student : %d\n",i); 
		printf("Percentage = %.3f \n",per); 
		if(per >= 90){
			printf("Grade A\n");	
		}
		else if(per >= 80){
			printf("Grade B\n");	
		}
		else if(per >= 70){
		printf("Grade C\n");	
		}
		else if(per >= 60){
			printf("Grade D\n");
		}
		else if(per >= 40){
			printf("Grade E\n");	
		}
		else{
			printf("Failed\n");	
		}
		printf("Do you wish to enter the marks of Next student yes(1)/No(0) : \n");
		scanf("%d",&d);
		if(d == 0){
			break;
		}
		i=i+1;
	}
	return 0;
}
