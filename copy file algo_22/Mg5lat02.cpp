#include <iostream>
using namespace std;

int main(){
	int a;
	cout<<"nilai a : "; cin>>a;
	switch(a){
		case 1: cout<<"satu";break; 
		case 2: cout<<"dua"; break;
		default: cout<<"not 1 or 2";
	}
}
//tanpa break; lanjut sampaibawah, untuk case hanya bisa untuk tipe data "char" dan "int"
//untuk tipe data char kasih petik 'a' 
