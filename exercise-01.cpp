/*
Nama	: Muhamad Farid Ridho Rambe
NPM		: 140810180033
Array
*/
#include<iostream>
using namespace std;
const int maxE=100;
struct stack{
	char a[maxE];
	int top;
};
stack S;
void createStack(stack& S){
	S.top=-1;
}
void pushStack (stack& S, char newElement){
	if(S.top==maxE-1){
		cout << "Tumpukan penuh\n";
	}
	else {
		S.top+=1;
		S.a[S.top]=newElement;
	}
}
void popStack(stack& S){
	cout << S.a[S.top];
	S.top-=1;
}
int main(){
	int n;
	char newElement;
	cout << "Masukkan banyak huruf	: "; cin >> n;
	for (int i=0; i<n;i++){
		cin>>newElement;
		pushStack(S, newElement);
	}
	for(int i=0;i<n;i++){
		popStack(S);
	}
}
