#include <iostream>
using namespace std;

int main(){
	int umur[2000];
	int total=0, rata, jmldata;
	cout<<"ingin memasukkan berapa data: ";
	cin>>jmldata;
	for (int a=0;a<jmldata;a++){
		cout<<"Masukkan umur: "; cin>>umur[a];
		total= total + umur[a];
	}
	rata = total/jmldata;
	cout<<"Rata-Rata umur: "<<rata;
}
