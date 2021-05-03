#include <iostream>
using namespace std;

int main(){
	
int jum_data,i,angka_karakter[20];
string nama[20],residence[20];

cout << "Program Array Shingeki No Kyojin" << endl;
cout << "1. Eren Yeager" << endl;
cout << "2. Mikasa Ackerman" << endl;
cout << "3. Armin Arlert" << endl;
cout << "4. Sasha Brause" << endl;
cout << "5. Connie Springer" << endl;
cout << "6. Jean Kirstein" << endl;
cout << "7. Levi Ackerman" << endl;
cout << "8. Erwin Smith" << endl;
cout << "9. Hange Zoe" << endl;
cout << "10. Reiner Braun" << endl;
cout << "11. Bertholdt Hover" << endl;
cout << "12. Annie Leonhart" << endl;
cout << "13. Marcel Galliard" << endl;
cout << "14. Porco Galliard" << endl;
cout << "15. Pieck Finger" << endl;
cout << "16. Zeke Yeager" << endl;
cout << "17. Falco Grice" << endl;
cout << "18. Gabi Braun" << endl;
cout << "19. King Floch" << endl;
cout << endl;
cout << "Masukkan Jumlah Data : ";
cin >> jum_data;

for(i = 0;i < jum_data;i++){
	cout << endl;
	cout << "Data Ke " << i+1 << endl;
	
	cout << "Masukkan Angka Karakter : ";
	cin >> angka_karakter[i];
	
	if(angka_karakter[i] == 1){
		
		nama[i] = "Eren Yeager";
		residence[i] = "Eldia";
		
	}else if(angka_karakter[i] == 2){
		
		nama[i] = "Mikasa Ackerman";
		residence[i] = "Eldia";
		
	}else if(angka_karakter[i] == 3){
		
		nama[i] = "Armin Arlert";
		residence[i] = "Eldia";
	}else if(angka_karakter[i] == 4){
		
		nama[i] = "Sasha Brause";
		residence[i] = "Eldia";
	}else if(angka_karakter[i] == 5){
		
		nama[i] = "Connie Springer";
		residence[i] = "Eldia";
	}else if(angka_karakter[i] == 6){
		
		nama[i] = "Jean Kirstein";
		residence[i] = "Eldia";
	}else if(angka_karakter[i] == 7){
		
		nama[i] = "Levi Ackerman";
		residence[i] = "Eldia";
	}else if(angka_karakter[i] == 8){
		
		nama[i] = "Erwin Smith";
		residence[i] = "Eldia";
	}else if(angka_karakter[i] == 9){
		
		nama[i] = "Hange Zoe";
		residence[i] = "Eldia";
	}else if(angka_karakter[i] == 10){
		
		nama[i] = "Eren Yeager";
		residence[i] = "Eldia / Marley";
	}else if(angka_karakter[i] == 11){
		
		nama[i] = "Bertholdt Hover";
		residence[i] = "Eldia / Marley";
	}else if(angka_karakter[i] == 12){
		
		nama[i] = "Annie Leonhart";
		residence[i] = "Eldia / Marley";
	}else if(angka_karakter[i] == 13){
		
		nama[i] = "Marcel Galliard";
		residence[i] = "Marley";
	}else if(angka_karakter[i] == 14){
		
		nama[i] = "Porco Galliard";
		residence[i] = "Marley";
	}else if(angka_karakter[i] == 15){
		
		nama[i] = "Pieck Finger";
		residence[i] = "Marley";
	}else if(angka_karakter[i] == 16){
		
		nama[i] = "Zeke Yeager";
		residence[i] = "Eldia / Marley";
	}else if(angka_karakter[i] == 17){
		
		nama[i] = "Falco Grice";
		residence[i] = "Marley";
	}else if(angka_karakter[i] == 18){
		
		nama[i] = "Gabi Braun";
		residence[i] = "Marley";
	}else if(angka_karakter[i] == 19){
		
		nama[i] = "King Floch";
		residence[i] = "Eldia";
	}
	
}

cout << endl;
cout << "OUTPUT : " << endl;
cout << "========================" << endl;

for(i = 0;i < jum_data;i++){
	cout << endl;
	
	cout << "Data Ke " << i+1 << endl;
	cout << "Nama : " << nama[i] << endl;
	cout << "Berpihak : " << residence[i] << endl;
	
}
	
return 0;
}
