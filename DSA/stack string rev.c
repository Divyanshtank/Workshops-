//to reverse a string using stack 
//wap to check parenthess 
#include<stdio.h>
#include<string.h>
#define size 100
int top=-1;
int stack[size];
void push(char ch)
{
    //overflow check
    if(top==size-1)
       printf("stack is full or overflow!\n");
    else
    {
     top++;
     stack[top] = ch;
    }
}
char pop()
{
    //underflow
    if(top==-1)
       return '\0';
    else
    {
        return stack[top--];
    }
    return '\0';
}
void rev(char str[])
{
    int i=0;
    //push the  char into a stack;
    while(str[i] !='\0' && str[i]!='\n')
    {
        push(str[i]);
        i++;
    }
    i=0;//reset to start of string
    while(top!=-1)
    {
        str[i++]=pop();
    }
    str[i] = '\0';//terminate the string
}
int main()
{
    char str[size];
    printf("Enter the string");
    fgets(str,size,stdin);
    rev(str);
    printf("reversed string= %s\n",str);
    return 0;
}
