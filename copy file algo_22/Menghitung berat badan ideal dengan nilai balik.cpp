#include <iostream>
using namespace std;

float berat_ideal(string gender, float bb, float tb){
	float bb_ideal;
	if (gender == "L"){
		bb_ideal = (tb - 100) - ((tb - 100)*0.1);
	}else if (gender =="P"){
		(tb - 100) - ((tb - 100)*0.15);
	}else {
		cout<<"Gender Salah";
	}
	cout<<"Berat Badan Ideal adalah: "<<bb_ideal<<endl;
	return bb_ideal;
}

int main(){
	string gender;
	float bb_ideal, tb, bb;
	cout<<"Masukkan Gender Anda : "; cin>>gender;
	cout<<"Masukkan Tinggi Badan : "; cin>>tb;
	cout<<"Masukkan Berat Badan : "; cin>>bb;
	cout<<berat_ideal(gender, bb, tb);
	
}
