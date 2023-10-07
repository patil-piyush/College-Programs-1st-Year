#include<stdio.h>
int main(){
	int n, i=0, x;
	int a[n];
	printf("Enter the size of an array ");
	scanf("%d",&n);
	printf("Enter the elements of given array ");
	
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	x = a[0];
	for(i=0; i<n; i++){
		if(a[i]<x){
			x = a[i];
		}
		
	}
	printf("The smallest number in your array is %d\n",x);
	return 0;
}
