#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node {
	struct Node *lchild;
	int data;
	struct Node *rchild;
};
struct queue{
    int size;
    int front;
    int rear;
    struct Node **Q;
};
void create(struct queue *q,int size){
    q->size = size;
    q->Q = (struct Node **)malloc(q->size*sizeof(struct Node *));
    q->front = q->rear = 0 ;
    
}
void enqueue(struct queue *q,struct Node *x){
    if((q->rear+1)%q->size== q->front){
        printf("queue is full");
        
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear] = x;
    }
    
}
Node * dequeue(struct queue *q){
	Node *x=NULL;
    if(q->front ==q->rear) printf("queue is empty");
    else{
        
        q->front=(q->front+1)%q->size;
        return q->Q[q->front];
    }
}
int isEmpty(struct queue q)
{
 return q.front==q.rear;
}
struct Stack{
	int size;
	int top;
	struct Node **S;
};
void StackCreate(struct Stack *st,int size){
	st->size = size;
	st->top = -1;
	st->S = (struct Node **)malloc(st->size*sizeof(struct Node *));
}
void push(struct Stack *st,struct Node *x){
	if(st->top ==st->size-1){
		printf("stack overflow");
	}
	else{
		st->top++;
		st->S[st->top]=x;
	}
}
struct Node *pop(struct Stack *st){
	struct Node *x = NULL;
	if(st->top==-1) printf("stack underflow");
	else{
		x = st->S[st->top--];
	}
	return x;
}
int isEmptyStack(struct Stack st){
	if(st.top==-1) return 1;
	return 0;
}
int isFullStack(struct Stack st){
	return st.top==st.size-1;
}
struct Node *root = NULL;
void Tcreate(){
	
	struct Node *p,*t;
	int x;
	struct queue q;
	create(&q,100);
	cout<<"enter root value";
	cin>>x;
	root = (struct Node *)malloc(sizeof(struct Node));
	root->data = x;
	root->lchild = root->rchild= NULL;
	enqueue(&q,root);
	while(!isEmpty(q)){
		
		p = dequeue(&q);
		cout<<"enter left child of "<<p->data<<": "<<endl;
		cin>>x;
		if(x!=-1){
			t= (struct Node *)malloc(sizeof(struct Node));
			t->data=x;
			t->lchild= t->rchild = NULL;
			p->lchild = t;
			enqueue(&q,t);
			
		}
		cout<<"enter right child of "<<": "<<p->data<<endl;
		cin>>x;
		if(x!=-1){
			t= (struct Node *)malloc(sizeof(struct Node));
			t->data=x;
			t->lchild= t->rchild = NULL;
			p->rchild = t;
			enqueue(&q,t);
			
		}
		
	}
	
}

void Ipreorder(struct Node *p){
	struct Stack stk;
	StackCreate(&stk,100);
	while(p|| !isEmptyStack(stk)){
		if(p){
			cout<<p->data<<" ";
			push(&stk,p);
			p = p->lchild;
			
		}
		else{
			p = pop(&stk);
			p = p->rchild;
		}
	}
}
void IInorder(struct Node *p){
	struct Stack stk;
	StackCreate(&stk,100);
	while(!isEmptyStack(stk)||p){
		if(p){
			push(&stk,p);
			p = p->lchild;
		}
		else{
			
			p = pop(&stk);
			cout<<p->data<<" ";
			p = p->rchild;
			
		}
		
		
	}
	cout<<endl;
}
void levelorder(struct Node *p){
	
	struct queue q;
	create(&q,100);
	cout<<p->data;
	enqueue(&q,p);
	while(!isEmpty(q)){
		
		p = dequeue(&q);
		if(p->lchild){
			
			cout<<p->lchild->data;
			enqueue(&q,p->lchild);
		}
		if(p->rchild){
			
			cout<<p->rchild->data;
			enqueue(&q,p->rchild);
		}
	}
	
}

int main(){
	Tcreate();
//	cout<<"pre order : "<<endl;
//	preorder(root);
//	cout<<endl<<"in order : "<<endl;
//	inorder(root);
//	cout<<endl<<"post order : "<<endl;
//	postorder(root);
    cout<<"iterative Preorder of tree are: ";
    Ipreorder(root);
    cout<<endl;
    cout<<"iterative inorder of tree are: ";
    IInorder(root);
	cout<<endl;
	cout<<"level order of tree are: ";
	levelorder(root);
}
