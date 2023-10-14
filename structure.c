#include<stdio.h>
#include<string.h>
struct stud
    {
        char prn[30];
        char name[30];
        int ph;
    };
int main(){
    int choice = 1;
    struct stud s1[100];
    int i=0;
    while(choice==1){
    printf("Enter the Data of Student\n");
    printf("Enter PRN No. : ");
        scanf("%s",&s1[i].prn);
    printf("Enter Name : ");
        scanf("%s",&s1[i].name);
    printf("Enter Phone Number : ");
        scanf("%d",&s1[i].ph);
    printf("Do you wish to enter anoter data (yes 1/ No 0)");
    scanf("%d", &choice);
    i++;
    }
    int j=0;
    int choice2 = 0;
    printf("Do you wish to access any data (yes 1/ No 0)");
    scanf("%d", &choice2);
    while(choice2==1){
    printf("Enter the Number of data to be accessed : ");
    scanf("%d",&j);
    j = j-1;
    printf("Student PRN : %s\n",s1[j].prn);
    printf("Student Name : %s\n",s1[j].name);
    printf("Student Phone No. : %d\n1",s1[j].ph);
    printf("Do you wish to access anoter data (yes 1/ No 0)");
    scanf("%d", &choice2);
    }
}