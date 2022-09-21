#include <iostream>
using namespace std;

int main(){
	int sex,act;
	float berat, tinggi, BMR, usia, cal, level;
	cout<<"1 untuk Pria"<<endl;
	cout<<"2 untuk Wanita"<<endl;
	
	cout<<"Masukkan Jenis Kelamin anda 1 atau 2 : ";
	cin>>sex;
	
	cout<<"1 untuk orang tidak aktif"<<endl;
	cout<<"2 untuk orang sedikit aktif"<<endl;
	cout<<"3 untuk orang cukup aktif"<<endl;
	cout<<"4 untuk orang sangat aktif"<<endl;
	cout<<"5 untuk orang ekstra aktif"<<endl;
	
	cout<<"Masukkan tipe aktivitas anda : ";
	cin>>act;
	switch(act){
		case 1 : level = 1.2; break;
		case 2 : level = 1.375; break;
		case 3 : level = 1.55; break;
		case 4 : level = 1.725; break;
		case 5 : level = 1.9; break;
	} 

cout<<"Masukkan Tinggi (Cm): ";
cin>>tinggi;
cout<<"Masukkan Berat (Kg): ";
cin>>berat;
cout<<"Masukkan Usia: ";
cin>>usia;
if(sex == 1){
	BMR = 66 + (13.7 * berat) + (5 * tinggi) - (6.8 - usia); 
}else if (sex == 2){
	BMR = 655 + (9.6 * berat) + (1.8 * tinggi) - (4.7 - usia);
}else{
	cout<<"SALAH INPUT!";
}
cout<<endl;
cout<<"Basal Metabolic Rate anda adalah "<<BMR<<"";

cal = BMR * level;

cout<<endl;

cout<<"Kebutuhan Kalori Harian anda adalah : "<<cal<<"kalori."<<endl;



}
