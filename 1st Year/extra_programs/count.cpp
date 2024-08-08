//Write a program to count the number of vowels and consonants in a given string.
#include<iostream>
using namespace std;

int main(){
    char str[100];
    int i, vowel=0, consonant=0;
    cout<<"Enter the string : ";
    cin>>str;
    for(i=0; str[i]!='\0'; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            vowel++;
        }
        else{
            consonant++;
        }
    }
    cout<<"Number of vowels : "<<vowel<<endl;
    cout<<"Number of consonants : "<<consonant<<endl;
    return 0;
}