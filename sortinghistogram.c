#include<stdio.h>

int main(){
	int n, i, j, x, temp;
	int a[n];
	printf("Enter the size of an array ");
	scanf("%d",&n);
	printf("Enter the elements of given array ");
	
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	x= a[0];
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(a[i]<a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("the order of elements in the given array is\n");
	for(i=0; i<n; i++){
		printf("%d\n",a[i]);
	}
	
	printf("Horizontal Histogram of given array is\n");
	for(i=0; i<n; i++){
		for(j=0; j<a[i]; j++){
			printf("*");
		}
		printf("\n");
	}
	
	//work in progress
	printf("Vertical Histogram of given array is\n");
	for(i=0; i<n; i++){
		
		for(j=0; j<a[i]; j++){
			
			printf("*\n");
		}
		
	}
	return 0;
}
