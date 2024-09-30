#include <iostream>
#include <string.h>
using namespace std;

class stack
{
public:
    char inf[100];
    int top;
    stack()
    {
        top = -1;
    }

    int isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        return 0;
    }

    char pop()
    {
        char c = inf[top];
        top--;
        return c;
    }

    void push(char a)
    {
        top++;
        inf[top] = a;
    }

    char peek()
    {
        return inf[top];
    }

    void read()
    {
        cout << "Enter the Infix expression: ";
        cin >> inf;
    }

    void display()
    {
        if (isEmpty())
        {
            return;
        }
        else
        {
            while (top != -1)
            {
                cout << inf[top--] << " ";
            }
        }
    }

    // function for checking the character is a operator or not
    int isOperator(char a)
    {
        if (a == '+' || a == '-' || a == '*' || a == '/' || a == '^')
        {
            return 1;
        }
        return 0;
    }

    // function for checking precedance of operators
    int precedance(char a)
    {
        if (a == '+' || a == '-')
        {
            return 1;
        }
        else if (a == '*' || a == '/')
        {
            return 2;
        }
        else if (a == '^')
        {
            return 3;
        }
        else
        {
            return 0;
        }
    }

    void Postfix()
    {
        int j = 0;
        char post[100];
        for (int i = 0; i < strlen(inf); i++)
        {
            int x = inf[i];

            if (inf[i] >= 'a' && inf[i] <= 'z' || inf[i] >= 'A' && inf[i] <= 'Z')
            {
                post[j++] = x;
            }
            else if (isOperator(x))
            {
                while (precedance(peek()) >= precedance(x))
                {
                    post[j++] = pop();
                }
                push(x);
            }
            else if (x == '(')
            {
                push(x);
            }

            else if (x == ')')
            {
                while (peek() != '('){
                    post[j++] = pop();
                }
                pop();
            }
        }
        while (!isEmpty())
        {
            post[j++] = pop();
        }
        post[j] = '\0';
        cout<<"POSTFIX Expression: "<<post;
    }
};

int main()
{
    stack p;
    p.read();
    p.display();
    p.Postfix();
    return 0;
}