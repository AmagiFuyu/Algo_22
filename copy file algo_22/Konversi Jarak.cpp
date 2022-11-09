#include <iostream>
using namespace std;

int main(){
	int pil;
	double inci, centi;
	cout<<"Program Konversi Jarak"<<endl;
	cout<<"1.Konversi ke inci"<<endl;
	cout<<"2.Konversi ke centi"<<endl;
	cout<<"Pilihan: "; cin>>pil;
	switch (pil){
	case 1: cout<<"Masukkan Ukuran (inci): ";
	cin>>inci;
	centi = inci * 2.54;
	cout<<"Ukuran dalam centi adalah: "<<centi;
	break;
	case 2: cout<"Masukkan Ukuran (centi): ";
	cin>>centi;
	centi = centi / 2.54;
	}
}
