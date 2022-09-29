#include<iostream>
using namespace std;
int main(){
	
	int harga,jk,li;
	int hargas=50000;
	int total;
	string nama;
	char ds;
	cout<<"Hotel Bahagia"<<endl;
	cout<<"--------------"<<endl;
	cout<<"1. VVIP (1.000.000)"<<endl;
	cout<<"2. VIP (750.000)"<<endl;
	cout<<"3. Standard (500.000)"<<endl;
	cout<<"4. Melati (250.000)"<<endl;
	cout<<"--------------"<<endl;
	cout<<"Masukan nama anda: "; cin>>nama;
	cout<<"Masukan jenis kamar : "; cin>>jk;
	cout<<"Lama inap: "; cin>>li;
	cout<<"Dengan sarapan (y/n) Rp50.000/hr : "; cin>>ds;
	cout<<"--------------"<<endl;
	cout<<"Terima kasih "<<nama<<endl;
	switch(jk){
		case 1 : cout<<"Kamar anda VVIP"<<endl;
		harga=1000000;break;
		case 2 : cout<<"Kamar anda VIP"<<endl; 
		harga=750000;break;
		case 3 : cout<<"Kamar anda Standard"<<endl; 
		harga=500000;break;
		case 4 : cout<<"Kamar anda Melati"<<endl; 
		harga=250000;break;
	}
	if(ds=='y'){ 
		cout<<"Lama menginap "<<li<<" hari dengan sarapan"<<endl;
		total=(harga*li)+(hargas*li);
	
	}
	else {
		cout<<"Lama menginap "<<li<<" hari tanpa sarapan"<<endl;
		total=(harga*li);
	}
	cout<<"Total bayar: "<<total<<endl;
	return 0;
}

