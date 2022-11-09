#include <iostream>
using namespace std;

struct Mahasiswa{
	char Nim[11];
	char Nama[25];
	char Alamat[4];
	int Umur;
};

int main(){
	Mahasiswa Mhs[5];
	int i;
	for (i=0; i<5; i++){
		cout<<"Nim	: ";
		cin>>Mhs[i].Nim;
		cout<<"Nama	: ";
		cin>>Mhs[i].Nama;
		cout<<"Alamat	: ";
		cin>>Mhs[i].Alamat;
		cout<<"Umur	: ";
		cin>>Mhs[i].Umur;
		cout<<endl;
	}
	for (i=0; i<5; i++){
		cout<<"\n\nNIM	: "<<Mhs[i].Nim;
		cout<<"\n\nNama	: "<<Mhs[i].Nama;
		cout<<"\n\nAlamat	: "<<Mhs[i].Alamat;
		cout<<"\n\nUmur	: "<<Mhs[i].Umur;
	}
}
