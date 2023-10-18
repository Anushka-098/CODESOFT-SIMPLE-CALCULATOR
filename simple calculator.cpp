#include<iostream>
using namespace std;
int main(){
	int a,b;
    char operation;
	cout<<"enter number 1 =";
	cin>>a;
	cout<<"enter number 2 =";
	cin>>b;
	cout<<"enter operation=";
	cin>>operation;

	if(operation=='+'){
		int sum=a+b;
		cout<<"summation is="<<sum;
	}else if(operation=='-'){
		int sub=a-b;
		cout<<"subtraction is="<<sub;
	}else if(operation=='*'){
		int multi=a*b;
		cout<<"multiplication is="<<multi;
	}else if(operation=='/'){
		int div=a/b;
		cout<<"division is="<<div;
	}
	return 0;
}
