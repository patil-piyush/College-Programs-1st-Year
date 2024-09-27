#include <iostream>
using namespace std;

class stack
{
public:
    char arr[100];
    int top;
    stack()
    {
        top = -1;
    }

    int isEmpty()
    {
        if (top == -1)
        {
            cout << "stack is empty\n";
            return 1;
        }
        return 0;
    }

    char pop()
    {
        char c = arr[top];
        top--;
        return c;
    }

    void push(char a)
    {
        top++;
        arr[top] = a;
    }

    char peek()
    {
        return arr[top];
    }

    void read()
    {
        cout << "Enter the expression: ";
        for (int i = 0; i != '\n'; i++)
        {
            cin >> arr[++top];
        }
    }

    void display()
    {
        cout << "The postfix expression is: ";
        if (isEmpty())
        {
            cout<<"stack is empty"<<endl;
        }
        else
        {
            while (top != -1)
            {
                cout << arr[top--]<<" ";
            }
        }
    }

    int precedance(char a){
        if(a == '*' || a == '/'){
            return 2;
        }
        else if(a == '+' || a == '-'){
            return 1;
        }
        else if(a == '('){
            return 3;
        }
        else if(a == ')'){

        }
        else{
            return 0;
        }
    }
    char[] Postfix(){
        newarr = new char[100];
        postarr = new char[100];
        for(int i=0; isEmpty == -1; i++){
            if()
        }
    }
};



int main()
{
    
    return 0;
}