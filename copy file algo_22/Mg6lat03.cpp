#include <iostream>
using namespace std;

int main(){
	int u;
	char lagi;
	atas:
	cout<<"Masukkan umur: ";
	cin>>u;
	cout<<"Umur anda adalah: "<<u<<endl;
	cout<<"Ulang lagi (y/t): ";
	cin>>lagi;
	if(lagi == 'y'){
		goto atas;
	}	
}
//label berfungsi untuk penanda agar goto bisa ke label tsb.
