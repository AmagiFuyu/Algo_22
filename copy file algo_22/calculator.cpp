#include<iostream>
using namespace std;

int main(){
	int pil, angka; float a,b,c;
	char ulang;
	do{
	cout<<"Kalkulator Canggih"<<endl;
	cout<<"1.Penjumlahan"<<endl;
	cout<<"2.Pengurangan"<<endl;
	cout<<"3.Perkalian"<<endl;
	cout<<"4.Pembagian"<<endl;
	cout<<"5.Modulus"<<endl;
	cout<<"Masukkan Pilihan anda : "; cin>>pil;
	switch(pil){
				case 1: cout<<"Masukkan angka pertama : ";
				cin>>a;
				cout<<"Masukkan angka kedua : ";
				cin>>b;
				c = a + b;
				cout<<"Hasil penjumlahan adalah : "<<c<<endl;
				cout<<"Coba lagi? (Y/T) : "; cin>>ulang;
		break;
		case 2: cout<<"Masukkan angka pertama : ";
				cin>>a;
				cout<<"Masukkan angka kedua : ";
				cin>>b;
				c = a - b;
				cout<<"Hasil pengurangan adalah : "<<c<<endl;
				cout<<"Coba lagi? (Y/T) : "; cin>>ulang;
		break;
		case 3: cout<<"Masukkan angka pertama : ";
				cin>>a;
				cout<<"Masukkan angka kedua : ";
				cin>>b;
				c = a * b;
				cout<<"Hasil perkalian adalah : "<<c<<endl;
				cout<<"Coba lagi? (Y/T) : "; cin>>ulang;
		break;
		case 4: cout<<"Masukkan angka pertama : ";
				cin>>a;
				cout<<"Masukkan angka kedua : ";
				cin>>b;
				c = a / b;
				cout<<"Hasil pembagian adalah : "<<c<<endl;
				cout<<"Coba lagi? (Y/T) : "; cin>>ulang;
		break;
		case 5: cout<<"Masukkan angka : ";
				cin>>angka;
				cout<<angka %2;
				cout<<"Hasil sisa bagi adalah : "<<c<<endl;
				cout<<"Coba lagi? (Y/T) : "; cin>>ulang;
		break;			
	}
	}
	while (ulang == 'y' || ulang == 'Y');
	return 0;
}
