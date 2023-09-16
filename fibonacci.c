#include <stdio.h>
int main()
{
  int n1, n2, n3, i;
  n1 = 0;
  n2 = 1;
  i = 2;
  printf("enter number of terms : ");
  scanf("%d", &n3);
  printf("%d %d", n1, n2);
  for(i = 2; i<n3; i++)
    {
        n3 = n1+n2;
        
        n1 = n2;
        n2 = n3;
        printf("%d ", n3);
    }
    printf("\n");
  return 0;
}
