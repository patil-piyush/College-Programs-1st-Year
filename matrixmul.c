#include<stdio.h>


int main(){
	int r1, r2, c1, c2;
	r1 = r2 = c1 = c2 = 0;
	
	//taking input of rows and columns of both matrices
	printf("Enter the number of rows and columns for matrix a ");
	scanf("%d %d", &r1, &c1);
	printf("Enter the number of rows and columns for matrix b ");
	scanf("%d %d", &r2, &c2);
	
	//checking whether c1==r2
	if(c1!=r2){
		printf("Error\n");
		
	}
	else{
		int a[r1][c1], b[r2][c2], mul[c1][r2], i, j, k;
		
		//taking input for matrix a
		printf("Enter the values for matrix a\n");
		for(i=0; i<r1; i++){
			for(j=0; j<c1; j++){
				scanf("%d", &a[i][j]);
			}
		}
		
		//taking inputs for matrix b
		printf("Enter the values for matrix b\n");
		for(i=0; i<r2; i++){
			for(j=0; j<c2; j++){
				scanf("%d", &b[i][j]);
			}
		}
		
		//initializing all elements of mul matrix to 0
		for(i=0; i<c1; i++){
			for(j=0; j<r2; j++){
				mul[i][j]=0;
			}
		}
		
		//multiplying matrix a and b
		for(i=0; i<c1; i++){
		
			for(j=0; j<r2; j++){
			
				for(k=0; k<c1; k++){
					mul[i][j]+=a[i][k]*b[k][j];
				}
					
			}
			
		}
		
		
		//for printing multiplied matrix
		for(i=0;i<c1; i++){    
			for(j=0;j<r2; j++){    
				printf("%d\t",mul[i][j]);    
			}    
		printf("\n");    
		} 
	}   
	return 0;  
}
