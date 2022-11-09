#include <iostream>
using namespace std;

int main(){
	int pil, harga, total, jumlah;
	string baju, topi;
	cout<<"Aplikasi POS"<<endl;
	cout<<"1.Baju (Rp 1.000)"<<endl;
	cout<<"2.Topi (Rp 500)"<<endl;
	cout<<"Masukkan pilihan anda: "; cin>>pil;
	switch (pil){
		case 1: cout<<"Masukkan Jumlah: "; cin>>jumlah;
		harga = 1000;
		total = harga * jumlah;
		cout<<"total : "<<total;
		break;
		case 2: cout<<"Masukkan Jumlah : "; cin>>jumlah;
		harga = 500;
		total = harga * jumlah;
		cout<<"total : "<<total;
	}
}
