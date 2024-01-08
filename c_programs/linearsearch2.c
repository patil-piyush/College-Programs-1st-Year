#include<stdio.h>
int main(){
	char a[100];
	int n,i=0, flag=0;
	
	printf("enter the number of elements ");
	scanf("%d", &n);
	
	printf("enter the elements in the data ");
	for(i=0; i<n-1; i++){
		scanf("%c", &a[i]);
	}
	char m='p';
	//printf("enter the element to search ");
	//scanf("%c", &m);
	i=0;
	for(i=0; i<n; i++){
		if(a[i] == m){
			flag=1;
			printf("true, %c is present in the data\n",m);
			break;
		}
		
	}
	if(flag ==0){
	printf("False, %c is not present in the data\n",m);
	}
	return 0;
}
