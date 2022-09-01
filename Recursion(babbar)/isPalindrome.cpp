#include <iostream>
using namespace std;

bool isPalindrome(string word,int i,int j){
	if(i>j) return true;
	if(word[i]!=word[j]) return false;
	i++,j--;
	return isPalindrome(word,i,j);
	
}
int main(){
	string word = "aabbaa";
	bool ans = isPalindrome(word,0,word.length()-1);
	if(ans) cout<<"yes it is palindrome";
	else cout<<"not palindrome";
	
	return 0;
}
