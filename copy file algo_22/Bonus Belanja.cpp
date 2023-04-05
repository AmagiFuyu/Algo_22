#include<iostream>
using namespace std;

string  total(int total){
	string t;
	if (total >= 50000 && total <= 100000){
		t = "Bonus Piring";
	}else if(total > 100000 && total <= 150000){
		t = "Bonus Voucher Diskon 50%";
	}else if(total > 150000 && total <= 200000){
		cout<<"Bonus Gelas Kaca";
	}else if(total > 200000 && total <= 250000){
		cout<<"Bonus Payung";
	}else if(total > 250000 && total <= 300000){
		cout<<"Bonus Sepatu Adidas";
	}
	return t;
}

int main(){
	int t;
	cout<<"Masukkan Total Belanja Anda : "; cin>>t;
	cout<<total(t)<<endl;
	cout<<"Terima Kasih"<<endl;
}
