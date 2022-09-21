#include<iostream>
using namespace std;

int main(){
	string gender;
	float tb, bb, bb_ideal;
	
	cout << "Gender(L/P) : ";
	cin >> gender;
	
	cout << "Berat Badan (kg) : ";
	cin >> bb;
	
	cout << "Tinggi Badan (cm) : ";
	cin >> tb;
	
	if(gender =="L"){
		bb_ideal = (tb - 100) - ((tb - 100)*0.1);
	}else if(gender == "P"){
		(tb - 100) - ((tb - 100)*0.15);
	}else {
		cout << "Gender salah";
	}
	
	
	if(bb == bb_ideal){
		cout << "Ideal";
	}else if(bb > bb_ideal){
		cout << "Gemuk";
	}else {
		cout << "Kurus";
	}
}


