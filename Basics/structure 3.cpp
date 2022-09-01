#include <iostream>
using namespace std;
struct Rectangle{
	int length;
	int breadth;
};
int main(){
	struct Rectangle r = {10,50
	};
	struct Rectangle *p = &r;
	cout<<p->length<<" "<<r.length;
	return 0;
}
