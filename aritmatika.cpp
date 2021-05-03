#include <iostream>
using namespace std;

int main(){

int angka1,angka2,pilih,hitung;

cout << "<<== PROGRAM ARITMATIKA SEDERHANA ==>>" << endl;
cout << "1. PERTAMBAHAN" << endl;
cout << "2. PERNGURANGAN" << endl;
cout << "3. PERKALIAN" << endl;
cout << "4. PEMBAGIAN" << endl;

cout << endl;
cout << "Pilih Pilihan Anda : ";
cin >> pilih;

while(pilih > 0){

if(pilih == 1){

cout << "PERTAMBAHAN" << endl;
cout << "Masukkan Angka ke 1 : ";
cin >> angka1;

cout << "Masukkan Angka ke 2 : ";
cin >> angka2;

hitung = angka1 + angka2;

cout << "Hasil : " << hitung << endl;  

}else if(pilih == 2){

cout << "PENGURANGAN" << endl;
cout << "Masukkan Angka ke 1 : ";
cin >> angka1;

cout << "Masukkan Angka ke 2 : ";
cin >> angka2;

hitung = angka1 - angka2;

cout << "Hasil : " << hitung << endl;  

}else if(pilih == 3){

cout << "PERKALIAN" << endl;
cout << "Masukkan Angka ke 1 : ";
cin >> angka1;

cout << "Masukkan Angka ke 2 : ";
cin >> angka2;

hitung = angka1 * angka2;

cout << "Hasil : " << hitung << endl;  

}else if(pilih == 4){

cout << "PEMBAGIAN" << endl;
cout << "Masukkan Angka ke 1 : ";
cin >> angka1;

cout << "Masukkan Angka ke 2 : ";
cin >> angka2;

hitung = angka1 / angka2;

cout << "Hasil : " << hitung << endl;  

}else{

cout << "Pilihan anda tidak ada" << endl;

}
}
return 0;
}
