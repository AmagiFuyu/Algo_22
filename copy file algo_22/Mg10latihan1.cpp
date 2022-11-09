#include <iostream>
using namespace std;

struct Mahasiswa{
	string Nim;
	string Nama;
	string mk;
	int nilai;
};

int main(){
	int nilai;
	Mahasiswa Mhs[3];
	int i;
	for (i=0; i<3; i++){
		cout<<"Nim	: ";
		cin>>Mhs[i].Nim;
		cout<<"Nama	: ";
		cin>>Mhs[i].Nama;
		cout<<"Matkul	: ";
		cin>>Mhs[i].mk;
		cout<<"Nilai	: ";
		cin>>Mhs[i].nilai;
		cout<<endl;
	}
	switch (Mhs[i].nilai){
		case 0 ... 45: cout<<"E"; break;
		case 46 ... 55: cout<<"D"; break;
		case 56 ... 62: cout<<"C";break;
		case 63 ... 79: cout<<"B"; break;
		case 80 ... 100: cout<<"A"; break;
	}
	for (i=0; i<3; i++){
		cout<<"\n\nNIM	: "<<Mhs[i].Nim;
		cout<<"\n\nNama	: "<<Mhs[i].Nama;
		cout<<"\n\nMatkul	: "<<Mhs[i].mk;
		cout<<"\n\nIPK	: "<<Mhs[i].nilai;
	}
}
