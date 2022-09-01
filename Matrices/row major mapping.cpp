#include <iostream>
#include <stdlib.h>
using namespace std;
struct matrix {
	int *A;
	int n;
};
void Set(struct matrix *m,int i,int j,int x){
	if(i>=j){
		m->A[i*(i-1)/2+j-1] = x;
		
	}
}
int Get(struct matrix m,int i,int j){
	if(i>=j){
		return m.A[i*(i-1)/2+j-1];
	}
}
void Display(struct matrix m){
	int i, j;
	for(i=1;i<=m.n;i++){
		for(j=1;j<=m.n;j++){
			if(i>=j) cout<<m.A[i*(i-1)/2 +j-1];
			else cout<<"0";
		}
		cout<<endl;
	}
	
}


int main() {
	struct matrix m;
	int i,j,x;
	printf("enter dimension");
	scanf("%d",&m.n);
	m.A = new int[m.n*(m.n+1)/2];
	cout<<"enter all elements";
	for(i =1;i<=m.n;i++){
		for(j=1;j<=m.n;j++){
			cin>>x;
			Set(&m,i,j,x);
		}
		cout<<endl;
	}
	Display(m);
	
}
