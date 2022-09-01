#include <iostream>
#include <stdlib.h>
using namespace std;
struct stack{
	int size;
	int Top;
	int *s;
};
void create(struct stack *st){
	cout<<"enter size of stack";
	cin>>st->size;
	st->s = new int[st->size];
	st->Top = -1;
	
}
void Display(struct stack st){
	int i;
	for(i = st.Top;i>=0;i--){
		cout<<st.s[i]<<endl;
	}
	cout<<endl;
}
void push(struct stack *st,int x){
	if(st->Top==st->size-1){
		cout<<"stack overflowed";
	}
	else {
		st->Top++;
		st->s[st->Top] = x;
	}
}

int pop(struct stack *st){
	int x = -1;
	if(st->Top ==-1){
		cout<<"stack underflowed";
	}
	else{
		x = st->s[st->Top--];
		
	}
	return x;
}
int peek(struct stack st){
	int x =-1;
	if(st.Top==-1){
		return x;
	}
	else{
		x = st.s[st.Top];
		
	}
	return x;
	
}



int main(){
	struct stack st;
	create(&st);
	push(&st,10);
	push(&st,20);
	push(&st,30);
	push(&st,40);
	push(&st,50);
	cout<<peek(st);
	Display(st);
	
	pop(&st);
	
	
}
