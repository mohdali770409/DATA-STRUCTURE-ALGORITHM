#include <iostream>
using namespace std;
int hashTable(int key){
	return key%10;
}
int probe(int H[],int key){
	int index = hashTable(key);
	int i=0;
	while(H[(index+i)%10]!=0) i++;
	return (index+i)%10;
}
void Insert(int H[],int key){
	int index = hashTable(key);
	if(H[index]!=0) index = probe(H,key);
	H[index] = key;
}
int Search(int H[],int key){
	int index = hashTable(key);
	int i=0;
	while(H[(index+i)%10]!=key){
		i++;
	}
	return (index+i)%10;
}
int main(){
	int HT[10] = {0};
	Insert(HT,22);
	Insert(HT,25);
	Insert(HT,12);
	cout<<"index found at "<<Search(HT,25)<<endl;
	return 0;
}
