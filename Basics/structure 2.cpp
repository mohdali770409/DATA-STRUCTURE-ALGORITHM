#include <iostream>
using namespace std;
struct studentrecord{
	int rollNumber; 
	char name[25];
	int department[50];

};
int main(){
	struct studentrecord sR{
		10,"ali",5
	};
	printf("%d %c %d",sR.rollNumber,sR.name,sR.department);
	return 0;
}
