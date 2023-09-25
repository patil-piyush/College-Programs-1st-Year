#include <stdio.h>

int main() {
    int r, c, sum;
	r = c = sum = 0;
	
	//taking input of rows and columns for both matrices
	printf("Enter the number of rows and columns for matrix  ");
	scanf("%d %d", &r, &c);
	
	int a[r][c], i, j;
		
		//taking input for matrix a
		printf("Enter the values for matrix a\n");
		for(i=0; i<r; i++){
			for(j=0; j<c; j++){
				scanf("%d", &a[i][j]);
			}
		}
		
		//calculating sum of diagonal elements
		for (i = 0; i < r; ++i) {
            
            		// calculating the main diagonal sum
            		sum = sum + a[i][i];
        	}
	
		       // calculating the off diagonal sum
	    	for(i=0; i<r; i++){
			for(j=0; j<c; j++){
			    if(i + j == r-1){
			         sum = sum + a[i][i];
			    }
			}
		}
printf("sum of diagonal elements is %d\n", sum);
return 0;
}
