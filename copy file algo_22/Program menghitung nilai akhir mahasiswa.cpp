#include <iostream>
using namespace std;

int main(){
	int tugas, uts, uas, nilai_anda; char nilai_huruf; string predikat, nama; 
	cout<<"Program Menghitung Nilai Akhir Mahasiswa"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"Masukkan nama anda : ";
	cin>>nama;
	cout<<"Masukkan nilai Tugas: ";
	cin>>tugas;
	cout<<"Masukkan nilai UTS : ";
	cin>>uts;
	cout<<"Masukkan nilai UAS : ";
	cin>>uas;
	nilai_anda = (tugas + uts + uas)/3;
	switch(nilai_anda){
	case 0 ... 20: cout<<"Nilai huruf : E"<<endl;
	cout<<"Predikat : Sangat Kurang"<<endl;
	break;
	case 21 ... 40: cout<<"Nilai huruf : D"<<endl;
	cout<<"Predikat : Kurang"<<endl;
	break;
	case 41 ... 60: cout<<"Nilai huruf : C"<<endl;
	cout<<"Predikat : Cukup"<<endl;
	break;
	case 61 ... 80: cout<<"Nilai huruf : B"<<endl;
	cout<<"Predikat : Baik"<<endl;
	break;
	case 81 ... 100: cout<<"Nilai huruf : A"<<endl;
	cout<<"Predikat : Sangat Baik"<<endl;
	break;
	}
	cout<<"Selamat "<<nama<<endl;
	cout<<"Nilai Anda : "<<nilai_anda<<endl;
	cout<<"Nilai Huruf : "<<nilai_huruf<<endl;
	cout<<"Predikat : "<<predikat<<endl;
}
