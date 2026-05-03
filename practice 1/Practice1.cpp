//Program to practice for switch case for exam
#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x, y;
	char operation;
	cout<<"Please enter the first integer\n";
	cin >> x;
	cout<<"Please enter the second integer\n";
	cin >> y;
	cout<<"Please select an operation(+,-,*,/)\n";
	cin >> operation;
	
	switch(operation){
		case '+':
			cout<<"Result is " << (x+y) << end1;
		case '-':
			cout<<"Result is " << (x-y) << end1;
		case'*':
			cout<<"Result is " << (x*y) << end1;
		case'/':
			if(y != 0){
				cout<<"Result is " << (x/y) << end1;
			}else{
				cout<<"Invalid Operation!" << end1;
			}
		break;
		default:
			cout<<"Invalid operation!" << end1;
	}
	return 0;
}
