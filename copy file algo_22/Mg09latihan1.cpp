#include <iostream>
using namespace std;

int main(){
	const int MAX_ARRAY1 = 3,MAX_ARRAY2 = 4;
	int A [MAX_ARRAY1][MAX_ARRAY2] = {{3,4,8,0},{3,9,2,1},{6,3,0,2}};
	for (int b=0;b<MAX_ARRAY1;b++){
		for (int k=0;k<MAX_ARRAY2;k++){
			cout<<A[b][k]<<"";
		}
		cout<<endl;
	}
	
}
