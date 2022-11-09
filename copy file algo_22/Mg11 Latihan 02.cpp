#include <iostream>
using namespace std;

void hitungvolumebalok(double p, double l, double t){
	double volume = p * l * t;
	cout<<"Volume balok adalah: "<<volume<<endl;
}

int main(){
	double p, l, t;
	cout<<"Masukkan panjang: "; cin>>p;
	cout<<"Masukkan lebar: "; cin>>l;
	cout<<"Masukkan tinggi: "; cin>>t;
	hitungvolumebalok(p, l, t);
	return 0;
}
