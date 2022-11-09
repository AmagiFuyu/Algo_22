#include <iostream>
using namespace std;

int main(){
	int nilai_k;
	string nama;
	cout<<"Masukkan nama anda: ";
	cin>>nama;
	cout<<"Masukkan Nilai Kecantikan: ";
	cin>>nilai_k;
	switch (nilai_k){
	case 0 ... 84: cout<<nama<<" Anda perlu oplas";
	break;
	case 85 ... 100: cout<<nama<<" Anda Ganteng";
	break;
	}
	if (nilai_k < 0){
		cout<<"salah input";
	}
	if(nilai_k > 100){
		cout<<"Bohong";
	}
}
