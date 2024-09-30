#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m;
    printf("Enter the size of array\n");		//read size of arrey
    scanf("%d",&n);
    int low, high, mid, a[n];		// take input elements of arrey
    printf("Enter elements in the increasing order\n");
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched\n");		//enter the number to search
    scanf("%d",&m);
    low = 0;
    high = n-1;
    while(low != high ){		//searching element
    	mid=(low+high)/2;
        if( a[mid] == m){
            mid++;
            printf("the number %d is at location %d\n", m, mid);
            exit(0);
        }
        else if(a[mid] > m){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    printf("the number %d not found in the data\n",m);
    return 0;
}
