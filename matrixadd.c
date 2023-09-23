#include<stdio.h>


int main(){
	int r1, r2, c1, c2;
	r1 = r2 = c1 = c2 = 0;
	
	printf("Enter the number of rows and columns for matrix a ");
	scanf("%d %d", &r1, &c1);
	printf("Enter the number of rows and columns for matrix b ");
	scanf("%d %d", &r2, &c2);
	
	if(r1!=r2 || c1!=c2){
		printf("Error\n");
		
	}
	else{
		int a[r1][c1], b[r2][c2], add[r1][r2], i, j, k;
		
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
		for(i=0; i<r1; i++){
			for(j=0; j<c1; j++){
				add[i][j]=0;
			}
		}
		
		//multiplying matrix a and b
		for(i=0; i<r1; i++){
		
			for(j=0; j<c1; j++){
			
				add[i][j]=a[i][j]+b[i][j];
					
			}
			
		}
		
		
		//for printing multiplied matrix
		printf("addition matrix is\n");
		for(i=0;i<r1;i++){    
			for(j=0;j<c1;j++){    
				printf("%d\t",add[i][j]);    
			}    
		printf("\n");    
		}   
	} 
	return 0;  
}
