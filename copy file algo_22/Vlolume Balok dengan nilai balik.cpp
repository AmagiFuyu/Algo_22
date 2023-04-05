#include <iostream>
using namespace std;

int kali(int a, int b){
	return a*b;
}

int balok(int p, int l, int t){
	return kali(p,l)*t;
}

int main(){
	int p,l,t;
	cout<<"Masukkan Panjang: "; cin>>p;
	cout<<"Masukkan Lebar: "; cin>>l;
	cout<<"Masukkan Tinggi: "; cin>>t;
	cout<<"Volume Balok: "<<kali(p,l)*t;
}
