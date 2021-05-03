#include <iostream>
using namespace std;

int main(){

int jd,i,pil[10],harga[10],jumlah_bahan[10],hitung[10],subto[10];
string sembako[10];

cout << "PROGRAM SEMBAKO" << endl;
cout << "=========================" << endl;
cout << "1. Telur" << endl;
cout << "2. Beras" << endl;
cout << "3. Mie Instant" << endl;
cout << "4. Minyak" << endl;
cout << "5. Kecap" << endl;

cout << endl;
cout << "Masukkan Jumlah Data : ";
cin >> jd;

for(i = 0;i < jd;i ++){
cout << endl;
cout << "Data Ke : " << i+1 << endl;

cout << "Masukkan Pilihan Sembako : ";
cin >> pil[i];

cout << "Jumlah Bahan : ";
cin >> jumlah_bahan[i];

if(pil[i] == 1){
	
	sembako[i] = "Telur";
	harga[i] = 2000;
	hitung[i] = harga[i] * jumlah_bahan[i];
	
}else if(pil[i] == 2){

	sembako[i] = "Nasi";
	harga[i] = 9000;
	hitung[i] = harga[i] * jumlah_bahan[i];
	
}else if(pil[i] == 3){

	sembako[i] = "Mie Instant";
	harga[i] = 2500;
	hitung[i] = harga[i] * jumlah_bahan[i];
	
}else if(pil[i] == 4){

	sembako[i] = "Minyak";
	harga[i] = 4000;
	hitung[i] = harga[i] * jumlah_bahan[i];
	
}else if(pil[i] == 5){

	sembako[i] = "Kecap";
	harga[i] = 1500;
	hitung[i] = harga[i] * jumlah_bahan[i];
	
}

}

cout << endl;
cout << "HASIL BELANJA : " << endl;

cout << "No		Bahan Pangan		Jumlah Bahan		Harga		Total" << endl;
cout << "----------------------------------------------------------------------------------------" << endl;

for(i = 0;i < jd;i ++){

cout << i+1 <<"		"<< sembako[i] <<"			"	<< jumlah_bahan[i] <<"			"	<< harga[i] <<"		"<< hitung[i] << endl; 
cout << "----------------------------------------------------------------------------------------" << endl;
}


return 0;
}
