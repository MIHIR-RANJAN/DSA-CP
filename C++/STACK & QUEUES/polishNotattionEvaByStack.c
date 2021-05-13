#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define blank ' '
#define tab '\t'
#define MAX 50
void pus(long int symbol);
long int pop();
void infixToPostfix();
long int evalPost();
int priority(char symbol);
int isEmpty();
int whiteSpace();
char infix[MAX],postfix[MAX];
long int stack[MAX];
int top;

main()
{
    long int value;
    top=-1; 
    printf("Enter the infix: ");
    gets(infix);
    printf("Postfix: %s\n",postfix);
    value= evalPost();
    printf("value of expression: %d\n ",value );
}

void infixToPostfix()
{
    unsigned int i,p=0;
    char next;
    char symbol;
    for(i=0;i<strlen(infix);i++)
    {
        symbol = infix[i];
        if(!whiteSpace(symbol))
        {
            switch(symbol)
            {
                case '(':
                    push(symbol);
                    break;

                case ')':
                    while((next = pop()) != '(')
                        postfix[p++]=next;
                    break;

                case '+':
                case '-':
                case '*':
                case '/':
                case '%':
                case '^':
                    while( !isEmpty()&& priority(stack[top])>= priority(symbol))
                        postfix[p++] = pop();
                    push(symbol);
                    break;
                default : // if an operand comes
                    postfix[p++] = symbol;
            }
        }
    }
    while(!isEmpty())
        postfix[p++]=pop();
    postfix[p]='\0'; // end of postfix with '\0' to make it a string
}
// this function will give the priority of the operator

int priority(char symbol)
{
    switch(symbol)
    {
        case '(':
            return 0;
        
        case '+':
        case '-':
            return 1;
        
        case '*':
        case '/':
        case '%':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

void push(long int symbol)
{
    if(top>MAX)
    {
        printf("stack overflow\n");
        exit(1);
    }
    stack[++top]=symbol;
}

long int pop()
{
    if(isEmpty())
    {
        printf("stack underflow\n");
        exit(1);
    }
    return (stack[top--]);
}

int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int whileSpace(char symbol)
{
    if(symbol== blank || symbol == tab)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

long int evalSpace()
{
    long int a,b,temp,result;
    unsigned int i;
    for(i=0; i<strlen(postfix);i++)
    {
        if(postfix[i]<='9' && postfix[i]>= '0')
        {
            push(postfix[i]-'0');
        }
        else
        {
            a= pop();
            b= pop();
            switch(postfix[i])
            {
                case '+':
                    temp = b+a ; 
                    break;
                
                case '-':
                    temp = b-a ; 
                    break;

                case '*':
                    temp = b*a ; 
                    break;

                case '/':
                    temp = b/a ; 
                    break;

                case '%':
                    temp = b%a ; 
                    break;
                
                case '^':
                    temp = b^a ; 
                    break;
            }
            push(temp);
        }
    }
    result = pop();
    return result;
}