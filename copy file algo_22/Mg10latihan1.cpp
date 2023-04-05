#include <iostream>
using namespace std;

struct Mahasiswa{
	string Nim;
	string Nama;
	string mk;
	int nilai;
    char huruf;
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
	
	switch (Mhs[i].nilai){
		case 0 ... 45: Mhs[i].huruf='E'; break;
		case 46 ... 55: Mhs[i].huruf='D'; break;
		case 56 ... 62: Mhs[i].huruf='C';break;
		case 63 ... 79: Mhs[i].huruf='B'; break;
		case 80 ... 100: Mhs[i].huruf='A'; break;
	}
    }
	for (i=0; i<3; i++){
		cout<<"\n\nNIM	: "<<Mhs[i].Nim;
		cout<<"\n\nNama	: "<<Mhs[i].Nama;
		cout<<"\n\nMatkul	: "<<Mhs[i].mk;
		cout<<"\n\nIPK	: "<<Mhs[i].nilai;
        cout<<"\n\nNilai Huruf : " << Mhs[i].huruf;
	}
}
