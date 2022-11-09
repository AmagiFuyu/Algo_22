#include <iostream>
using namespace std;

int main(){
	int harga, jenis_kamar, lama_inap; int sarapan = 50000;
	int total;
	string nama;
	char ds;
	cout<<"Hotel Bahagia"<<endl;
	cout<<"-------------"<<endl;
	cout<<"1.VVIP (Rp1.000.000)"<<endl;
	cout<<"2.VIP (Rp750.000)"<<endl;
	cout<<"3.Standard (Rp500.000)"<<endl;
	cout<<"4.Melati (Rp250.000)"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"Masukkan nama anda : "; cin>>nama;
	cout<<"Masukkan jenis kamar : "; cin>>jenis_kamar;
	cout<<"Masukkan lama inap : "; cin>>lama_inap;
	cout<<"Dengan sarapan(y/n) Rp50.000/hr: "; cin>>ds;
	cout<<"---------------------------------"<<endl;
	cout<<"Terima kasih "<<nama<<endl;
	switch(jenis_kamar){
		case 1: cout<<"Kamar anda VVIP"<<endl;
		harga = 1000000;
		break;
		case 2: cout<<"Kamar anda VIP"<<endl;
		harga = 750000;
		break;
		case 3: cout<<"Kamar anda Standard"<<endl;
		harga = 500000;
		break;
		case 4: cout<<"Kamar anda Melati"<<endl;
		harga = 250000;
		break;
	}
	if(ds == 'y'){
		cout<<"Lama menginap "<<lama_inap<<" hari dengan sarapan"<<endl;
		total = (harga * lama_inap) + (sarapan * lama_inap);
	}else {
		cout<<"Lama menginap "<<lama_inap<<" hari tanpa sarapan"<<endl;
		total = (harga * lama_inap);
	}
	cout<<"Total bayar : "<<total<<endl;
	return 0;
} 
