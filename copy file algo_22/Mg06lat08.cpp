#include <iostream>
using namespace std;
int main(){
	for (int a=1; a<= 10;a= a + 2){
		if (a == 6){
			continue;
		}
		cout<<a<<"";
	}
}
