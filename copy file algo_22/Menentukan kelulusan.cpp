#include <iostream>
using namespace std;

int main(){
	int nilai, uts, uas;
	cout<<"uts : ";
	cin>>uts;
	cout<<"uas : ";
	cin>>uas;
	nilai = uts + uas / 2;
	if(nilai >= 60){
		cout<<"lulus"<<endl;
	}else{
		cout<<"tidak Lulus"<<endl;
		return 0;
	}
	
}
