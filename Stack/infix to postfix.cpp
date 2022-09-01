//#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <strings.h>
using namespace std;
struct Node
{
 char data;
 struct Node *next;
}*top=NULL;
void push(char x)
{
 struct Node *t;
 t=(struct Node*)malloc(sizeof(struct Node));

 if(t==NULL)
 printf("stack is full\n");
 else
 {
 t->data=x;
 t->next=top;
 top=t;
 }

}
char pop()
{
 struct Node *t;
 char x=-1;

 if(top==NULL)
 printf("Stack is Empty\n");
 else
 {
 t=top;
 top=top->next;
 x=t->data;
 free(t);
 }
 return x;
}
void Display()
{
 struct Node *p;
 p=top;
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
 printf("\n");
}
int isBalanced(char *exp)
{
 int i;

 for(i=0;exp[i]!='\0';i++)
 {
 if(exp[i]=='(')
 push(exp[i]);
 else if(exp[i]==')')
 {
 if(top==NULL)
 return 0;
 pop();
 }
 }
 if(top==NULL)
 return 1;
 else
 return 0;
}
int precedence(char x){
	if(x=='+'|| x== '-')
		return 1;
	else if(x=='*'|| x=='/')
		return 2;
	return 0;
}
int operand(char x){
	if(x=='+'|| x=='-'|| x== '*'||x=='/') return 0;
		
	else return 1;
	
}
char convert(char *exp){
	int i=0,j;
	int count = 0;
     while(exp[i]!='\0'){
     	i++;
     	count++;
	 }
	
	char *postfix = new char[count+1];
	 i=0,j=0;
	while(exp[i]!='\0'){
		if(operand){
			postfix[j++] = exp[i++];
		}
		else{
			if(precedence(exp[i]>top->data)){
				push(exp[i++]);
				
			}
			else{
				postfix[j++] = pop();
			}
		}
		
		
	}
	while(top!=NULL)
		postfix[j++] = pop();
	 postfix[j++] ='\0';
		 
	
	
	
}

int main()
{
 char *exp="((a+b)*(c-d)))";
 push('#');
 char *postfix = convert(exp);
 cout<<postfix;
 printf("%d ",isBalanced(exp));

 return 0;
}
