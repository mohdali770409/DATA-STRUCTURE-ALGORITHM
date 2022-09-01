
#include <iostream>
#include <strings.h>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>

using namespace std;
struct Node{
    char data;
    struct Node *next;
}*top=NULL;

void push(char x){
    struct Node *t;
    
    t=new Node;
    if(t==NULL) cout<<"stack is full";
    else{
        t->data = x;
        t->next = top;
        top = t;
        
    }
    
}
char pop(){
    struct Node *t;
    char x = -1;
    
    if(top==NULL) cout<<"stack is empty";
    else{
        t = top;
 top = top->next;
        x = t->data;
       
    }
    
    return x;
    
}

int pre(char x){
    if(x=='+'||x =='-') return 1;
    else if(x=='*' || x=='/') return 2;
    return 0;
}
int isOperand(char x){
    if(x =='+'|| x=='-'|| x=='/'||x=='*'){
        return 0;
    }
    else return 1;
    
}

char *intoPostfix(char *infix){
    char *postfix;
    int i=0,j=0;
    int len= strlen(infix);
    postfix = new char[len+1];
    
    while(infix[i]!='\0'){
    	
        if(isOperand(infix[i])){
        	
            postfix[j++] = infix[i++];
            
        }
        else{
            if(pre(infix[i])>pre(top->data)){
            	
                
                push(infix[i++]);
            }
            else {
            	
                postfix[j++] = pop();
                
            }
            
        }

    }
    
    
    while(top!=NULL){
        postfix[j++] = pop();
        
        
    }
    postfix[j] = '\0';
    return postfix;
}

// void display(char postfix){
    
//     while(postfix[i]!='\0'){
//         cout<<postfix
//     }
    
// }

int main()
{
    
    
    char *infix = "a+b*c-d/e";
    push('#');
    char *postfix = intoPostfix(infix);
    cout<<postfix;
   

    return 0;
}

