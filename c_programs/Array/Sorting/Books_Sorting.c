#include<stdio.h>

struct bookdata{
    int bookid;
    char bookname[100];
    char bookauthor[100];
    char bookgenre[100];
    int bookdate[100];
};
int main(){
   
    
    int i=0, j=0, temp=0;
    struct bookdata b[1000];
    int n1=0, x=0;
    

    printf("enter the number of books you want to store \n");
    scanf("%d",&n1);
    int choice = n1;
    while (choice != 0){   
        printf("Enter the book data you want to store\n");
        printf("enter the book id\n");
        scanf("%d",&b[i].bookid);

        printf("enter the book name\n");
        scanf("%s",&b[i].bookname);

        printf("enter the book author\n");
        scanf("%s",&b[i].bookauthor);

        printf("enter the book genre\n");
        scanf("%s",&b[i].bookgenre);
        
        // b[i].bookdate = 0;
        printf("enter the publishing date of book as DD/MM/YY\n");
        scanf("%d",&b[i].bookdate);

        // printf("Do you wish to enter anoter book data (yes 1/ No 0)\n");
        // scanf("%d", &choice);
        choice--;
    }
    
    int n=0;
    printf("which type of sorting you want to do\nbookid=1\nbookname=2\nbookauthor=3\nbookgenre=4\nbookdate=5\n");
    scanf("%d",&n);

    //sorting wrt bookid
    if (n == 1){
        x= b[0].bookid;
	    for(i=0; i<n1; i++){
		    for(j=0; j<n1; j++){
			    if(b[i].bookid<b[j].bookid){
				    temp = b[i].bookid;
				    b[i].bookid = b[j].bookid;
				    b[j].bookid = temp;
			    }
		    }
	    }
        for ( i = 0; i<n1 ; i++){
            printf("%d\n",b[i].bookid);
            printf("%s\n",b[i].bookname);
            printf("%s\n",b[i].bookauthor);
            printf("%s\n",b[i].bookgenre);
            printf("%d\n",b[i].bookdate);
        }
        
    }
    
    //sorting wrt bookname
    // if (n == 2){
    //     x= b[0].bookname;
	//     for(i=0; i<n1; i++){
	// 	    for(j=0; j<n1; j++){
	// 		    if(b[i].bookname<b[j].bookname){
	// 			    temp = b[i].bookname;
	// 			    b[i].bookname = b[j].bookname;
	// 			    b[j].bookname = temp;
	// 		    }
	// 	    }
	//     }
    //     for ( i = 0; i<n1 ; i++){
    //         printf("%d\n",b[i].bookid);
    //         printf("%s\n",b[i].bookname);
    //         printf("%s\n",b[i].bookauthor);
    //         printf("%s\n",b[i].bookgenre);
    //         printf("%d\n",b[i].bookdate);
    //     }
    // }

    //sorting wrt bookauthor
    // if (n == 3){
    //     x= b[0].bookauthor;
	//     for(i=0; i<n1; i++){
	// 	    for(j=0; j<n1; j++){
	// 		    if(b[i].bookauthor<b[j].bookauthor){
	// 			    temp = b[i].bookauthor;
	// 			    b[i].bookauthor = b[j].bookauthor;
	// 			    b[j].bookauthor = temp;
	// 		    }
	// 	    }
	//     }
    //     for ( i = 0; i<n1 ; i++){
    //         printf("%d\n",b[i].bookid);
    //         printf("%s\n",b[i].bookname);
    //         printf("%s\n",b[i].bookauthor);
    //         printf("%s\n",b[i].bookgenre);
    //         printf("%d\n",b[i].bookdate);
    //     }
    // }

    //sorting wrt bookgenre
    // if (n == 4){
    //     x= b[0].bookgenre;
	//     for(i=0; i<n1; i++){
	// 	    for(j=0; j<n1; j++){
	// 		    if(b[i].bookgenre<b[j].bookgenre){
	// 			    temp = b[i].bookgenre;
	// 			    b[i].bookgenre = b[j].bookgenre;
	// 			    b[j].bookgenre = temp;
	// 		    }
	// 	    }
	//     }
    //     for ( i = 0; i<n1 ; i++){
    //         printf("%d\n",b[i].bookid);
    //         printf("%s\n",b[i].bookname);
    //         printf("%s\n",b[i].bookauthor);
    //         printf("%s\n",b[i].bookgenre);
    //         printf("%d\n",b[i].bookdate);
    //     }
    // }

    //sorting wrt bookdate
    if (n == 5){
        x = b[0].bookdate;
	    for(i=0; i<n1; i++){
		    for(j=0; j<n1; j++){
			    if(b[i].bookdate<b[j].bookdate){
				    temp = b[i].bookdate;
				    b[i].bookdate = b[j].bookdate;
				    b[j].bookdate = temp;
			    }
		    }
	    }
        for ( i = 0; i<n1 ; i++){
            printf("%d\n",b[i].bookid);
            printf("%s\n",b[i].bookname);
            printf("%s\n",b[i].bookauthor);
            printf("%s\n",b[i].bookgenre);
            printf("%d\n",b[i].bookdate);
        }
    }
    





    // int choice2 = 0;
    // int j=0;
    // printf("Do you want to search for any book (yes 1/ No 0)\n");
    // scanf("%d", &choice2);
    // while (choice2 == 1){
    //     printf("Enter the Number of data to be accessed\n");
    //     scanf("%d",&j);
    //     j = j-1;
    //     printf("book Id : %d\n",b[j].bookid);
    //     printf("book Name : %s\n",b[j].bookname);
    //     printf("book author : %s\n1",b[j].bookauthor);
    //     printf("book genre : %s\n",b[j].bookgenre);
    //     printf("book date : %d\n",b[j].bookdate);
    //     printf("Do you wish to access anoter data (yes 1/ No 0)\n");
    //     scanf("%d", &choice2);
    // }
    
    
    return 0;
}
