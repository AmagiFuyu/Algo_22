#include <iostream>
using namespace std;

int main(){
	int umur; string nama;
	cout<<"masukkan nama anda : ";
	cin>>nama;
	cout<<"masukkan umur anda : ";
	cin>>umur;
	cout<<"------------------";
	cout<<"Terimakasih "<<nama<<endl;
	cout<<"umur anda : "<<umur<<endl;
	(umur > 17) ? cout<<"anda dewasa"<<endl :
	cout<<"anda anak"<<endl;
}
	
	
