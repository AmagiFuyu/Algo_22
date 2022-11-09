#include<iostream>
using namespace std;

int main(){
	int pil, jmlpaket, jmltunai, harga, gt, total;
	char tunai;
	string nama, nama_paket;
	cout<<"Aplikasi Paket Sembako"<<endl;
	cout<<"Paket DonasiCovid-19"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"1.Sembako (Rp100.000)"<<endl;
	cout<<"2.Sembako + Masker (Rp150.000)"<<endl;
	cout<<"3.Sembako + Face Shield (Rp250.000)"<<endl;
	cout<<"4.Sembako + APD (Rp500.000)"<<endl;
	cout<<"5.Sembako + ALL (Rp1.000.000)"<<endl;
	cout<<"Masukkan Pilihan Anda (1-5): "; cin>>pil;
	cout<<"Masukkan Nama Anda: "; cin>>nama;
	cout<<"Masukkan jumlah paket yang akan disumbangkan: "; cin>>jmlpaket;
	cout<<"InginMenambah Sumbangan Tunai(y/t): "; cin>>tunai;
	cout<<"Terima kasih "<<nama<<" atas bantuan anda "<<endl;
	cout<<"Paket yang disumbangkan: "<<nama_paket;
	cout<<"Sumbangan Tunai anda: "<<jmltunai;
	cout<<"Total yang harus dibayarkan: "<<gt;
	switch(pil){
		case 1: cout<<"sembako";
		harga = 100000;
		break;
		case 2: cout<<"Sembako + Masker";
		harga = 150000;
		break;
		case 3: cout<<"Sembako + Face shield";
		harga = 250000;
		break;
		case 4: cout<<"Sembako + APD";
		harga = 150000;
		break;
		case 5: cout<<"Sembako + ALL";
		harga = 1000000;
		break;
	}
	if (tunai == 'y'){
		cout<<"Jumlah Sumbangan tunai anda: "<<jmltunai;
		total = (jmlpaket * harga) + tunai;
	}else{
		total = jmlpaket * harga;
	}
}
