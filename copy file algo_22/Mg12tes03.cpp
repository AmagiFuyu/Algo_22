#include <iostream>
using namespace std;

string kata = "UVERS";

string tampil(){
	return kata = "yodi";
}

int main(){
	cout<<"dari fungsi: "<<tampil()<<endl;
	cout<<"dari main: "<<kata<<endl;
	kata = "Keren";
	cout<<"dari fungsi: "<<tampil()<<endl;
	cout<<"dari main: "<<kata<<endl;	
}
