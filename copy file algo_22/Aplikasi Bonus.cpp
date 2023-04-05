#include<iostream>
using namespace std;

string  total(int total){
	string t;
	if (total >= 50000 && total <= 100000){
		t = "Bonus Piring";
	}else if(total > 100000 && total <= 150000) {
		t = "Bonus Voucher Diskon 50%";
	
	return t;
}

int main(){
	int t;
	cout<<"Masukkan Total Belanja: "; cin>>t;
	cout<<"Bonus Anda: "<<total(t);
}
