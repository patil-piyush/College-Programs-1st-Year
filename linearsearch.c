#include<stdio.h>
int main(){
	
	int a[100],n,m,i=0, flag=0;
	
	printf("enter the number of elements ");
	scanf("%d", &n);
	
	printf("enter the elements in the data ");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	printf("enter the number to search ");
	scanf("%d", &m);
	
	for(i=0; i<n; i++){
		if(a[i] == m){
			flag=1;
			printf("true, %d is present in the data",m);
			break;
		}
		
	}
	if(flag ==0){
	printf("False, %d is not present in the data",m);
	}
	return 0;
}
