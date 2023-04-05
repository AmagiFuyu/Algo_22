#include <iostream>
using namespace std;
struct barang{
	string nbrg;
	double harga;
	int jumlah;
	char jenis;
	double total;
};

int main(){
	barang b;
	b.nbrg="Baju";
	cout<<b.nbrg;
}
