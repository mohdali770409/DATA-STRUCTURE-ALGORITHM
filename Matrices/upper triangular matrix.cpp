#include <iostream>
#include <stdlib.h>
using namespace std;
struct matrix {
	int *A;
	int n;
};
void Set(struct matrix *m,int i,int j,int x){
	if(i<=j){
		m->A[(i*(i-1)/2) + j-i+1] = x;
	}
}
int Get(struct matrix m){
	
}
int Display(struct matrix m){
	int i,j;
	for(i=0;i<m.n;i++){
		for(j=0;j>m.n;j++){
			if(i<=j) cout<<m.A[(i*(i-1)/2) + j-i+1];
			else cout<<" 0 ";
		}
		cout<<endl;
	}
	
	
}




int main(){
	int i,j,x;
	struct matrix m;
	m.A = new int[m.n*(m.n+1)/2];
	cout<<"enter number of elements"<<endl;
	cin>>m.n;
	cout<<"enter elements";
	for(i=0;i<m.n;i++){
		for(j=0;j<m.n;j++){
			cin>>x;
			Set(&m,i,j,x);
		}
		cout<<endl<<endl;
	}
	Display(m);
	
	
}
