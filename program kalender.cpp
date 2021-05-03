#include <iostream>
using namespace std;

int main(){
	string bulan[] = {"januari","februari","maret","april","mei","juni","juli","agustus","november","desember"};
	int tgl[10],tanggal[10],bul,bulann[10];
	
	for(int i = 0;i < bul;i++){
		cout << "Masukkan Bulan Ke Berapa : ";
		cin >> bulan[i];
		cout << "Masukkan Tanggal Tujuan Keberapa : ";
		cin >> tgl[i];
		if(tgl[i] > 30){
			tgl[i] = 0;
			bulann[i] += bulan[i];
		}
		cout << "Bulan : " << bulann[i] << endl;
	cout << "Tanggal : " << tanggal[i] << endl;	
	}
	return 0;
}
