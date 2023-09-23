#include<stdio.h>


int main(){
	int a[3][3], b[3][3], mul[3][3], i, j, k;
	
	//taking input for matrix a
	printf("Enter the values for matrix a\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	//taking inputs for matrix b
	printf("Enter the values for matrix b\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	//initializing all elements of mul matrix to 0
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			mul[i][j]=0;
		}
	}
	
	//multiplying matrix a and b
	for(i=0; i<3; i++){
	
		for(j=0; j<3; j++){
		
			for(k=0; k<3; k++){
				mul[i][j]+=a[i][k]*b[k][j];
			}
				
		}
		
	}
	
	
	//for printing multiplied matrix
	for(i=0;i<3;i++){    
		for(j=0;j<3;j++){    
			printf("%d\t",mul[i][j]);    
		}    
	printf("\n");    
	}    
	return 0;  
}
