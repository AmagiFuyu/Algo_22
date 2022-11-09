#include <iostream>
using namespace std;

int main(){
	int harga,makanan,jumlah;
	int total; 
	cout<<"Rumah Makan Acek Sancheez"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"1.Nasi Goreng Rp15.000"<<endl;
	cout<<"2.Mie Goreng Rp15.000"<<endl;
	cout<<"3.Kwetiau Goreng Rp20.000"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Masukkan Pilihan anda : ";
	cin>>makanan;
	cout<<"Masukkan Jumlah Pesanan : ";
	cin>>jumlah;
	switch(makanan){
		case 1: cout<<"Menu anda Nasi Goreng"<<endl;
		harga = 15000;
		break;
		case 2: cout<<"Menu Anda Mie Goreng"<<endl;
		harga = 15000;
		break;
		case 3: cout<<"Menu anda Kwetiau Goreng"<<endl;
		harga = 20000;
		break;
	}
	total = harga * jumlah;
	cout<<"jumlah Pesanan : "<<jumlah<<endl;
	cout<<"Harga : "<<harga<<endl;
	cout<<"Total bayar : "<<total<<endl;
	cout<<"Terima Kasih,Pesanan anda sedang diproses."<<endl;
	return 0;
}
