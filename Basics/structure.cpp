#include <iostream>
using namespace std;
struct rectangle{
	int length;
	int breadth;
};
int main(){
	
	struct rectangle r = {10,15
	};
	r.length = 15;
	r.breadth = 10;
	printf("area of rectangle is %d",r.length*r.breadth);
	return 0;
}
