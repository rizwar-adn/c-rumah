#include <iostream>
using namespace std;

int main(){
	
	int pil,angka[10];
	menu:
	cout << "Aplikasi Sederhana" << endl;
	cout << "=======================================" << endl;
	cout << "1. Program Menghitung Bilangan Ganjil" << endl;
	cout << "2. Program Menghitung Bilangan Genap" << endl;
	
	cout << "Masukkan Pilihan Anda  : ";
	cin >> pil;
	
	while(pil < 3){
		if(pil == 1){
			system("cls");
			cout << "Selamat Datang diProgram Menghitung Bilangan Ganjil" << endl;
			
			for(int i = 0;i <= 10;i++){
				cout << "Masukkan Data : ";
				cin >> angka[i];
			}
			cout << endl;
			for(int i = 0;i <= 10;i+=2){
				cout << "Hasil : " << angka[i] << endl;
			}
			goto menu;
		}else if(pil == 2){
			system("cls");
			cout << "Selamat Datang diProgram Menghitung Bilangan Genap" << endl;
			
			for(int i = 0;i <= 10;i++){
				cout << "Masukkan Data : ";
				cin >> angka[i];
			}
			cout << endl;
			for(int i = 0;i <= 10;i+=3){
				cout << "Hasil : " << angka[i] << endl;
			}
			goto menu;
		}
		pil++;
	}
	
	return 0;
}
