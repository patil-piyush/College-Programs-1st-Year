#include<stdio.h>

 int main(){
 int a,b,c, largest;

printf("Enter values of a,b and c:");
scanf("%d %d %d",&a,&b,&c);

if(a>=b&&b>=c)
largest=a;
if(b>=c&&b>=a)
largest=b;
if(c>=a&&c>=b)
largest=c;
printf("\nLargest of the thiree numbers is: %d", largest);

return 0;

}
