#include <iostream>
using namespace std;

int main(){
	
	int tb,pil,hitung;
	
	cout << "PROGRAM APLIKASI PENGHITUNG BERAT BADAN" << endl;
	cout << "========================================" << endl;
	cout << "1. Pria" << endl;
	cout << "2. Wanita" << endl;
	cout << "Pilih pilihan Anda (1/2) : ";
	cin >> pil;
	
	if(pil == 1){
	system("cls");	
	
	cout << "PRIA" << endl;
	cout << "Masukkan Tinggi Badan Anda (cm) : ";
	cin >> tb;
	
	hitung = (tb - 100) - (tb - 100) * 10/100;
	
	cout << "Hasil : " << hitung << endl;
	}else if(pil == 2){
		
	system("cls");	
	
	cout << "WANITA" << endl;
	cout << "Masukkan Tinggi Badan Anda (cm) : ";
	cin >> tb;
	
	hitung = (tb - 100) - (tb - 100) * 15/100;
	
	cout << "Hasil : " << hitung << endl;
	}
	
	
	return 0;
}
