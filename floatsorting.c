#include<stdio.h>

int main(){
	int n, i, j;
	float x, temp;
	float a[n];
	printf("Enter the size of an array ");
	scanf("%d",&n);
	printf("Enter the elements of given array\n");
	
	for(i=0; i<n; i++){
		scanf("%f",&a[i]);
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
		printf("%.2f\n",a[i]);
	}
	
	
	return 0;
}
