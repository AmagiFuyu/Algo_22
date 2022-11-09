#include <iostream>
using namespace std;

int main(){
	int a, b, c, d, e;
	a=50; a = a % 9; b = a-2; 
	cout<<"nilai a: "<<a<<endl;
	cout<<"nilai b: "<<b<<endl;
	a++; --b;
	cout<<"Nilai a lagi: "<<a<<endl;
	cout<<"Nilai b lagi: "<<b<<endl;
	c = a > b;
	d = a < b;
	e = b ^ a;
	cout<<"nilai c: "<<c<<endl;
	cout<<"nilai d: "<<d<<endl;
	cout<<"nilai e: "<<e<<endl;
}
