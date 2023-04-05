#include <iostream>
using namespace std;

void hitungberatbadanideal(float bb, float tb){
	string gender;
	float bb_ideal;
	if (gender == "L" || 'l'){
		bb_ideal = (tb - 100) - ((tb - 100)*0.1);
	}else if (gender =="P" || 'p'){
		(tb - 100) - ((tb - 100)*0.15);
	}else {
		cout<<"Gender Salah";
	}
	cout<<"Berat Badan Ideal adalah: "<<bb_ideal<<endl;
}

int main(){
	string gender;
	float bb, tb, bb_ideal;
	cout<<"Gender: "; cin>>gender;
	cout<<"Berat badan: "; cin>>bb;
	cout<<"Tinggi badan: "; cin>>tb;
	hitungberatbadanideal(gender, bb, tb, bb_ideal);
	return 0;
}
