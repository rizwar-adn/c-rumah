#include <iostream>
using namespace std;

int main(){
	
	int angka1,angka2,angka3,angka4;
	string huruf;
	cin >> angka1 >> angka2 >> angka3 >> angka4;
	if(angka1&&angka2&&angka3&&angka4 == 1){
		huruf = "A";
		cout << huruf;
	}else if(angka1&&angka2&&angka3&&angka4 == 2){
		huruf = "B";
		cout << huruf;
	}else if(angka1&&angka2&&angka3&&angka4 == 3){
		huruf = "C";
		cout << huruf;
	}else if(angka1||angka2||angka3||angka4 == 4){
		huruf = "D";
		cout << huruf;
	}else if(angka1||angka2||angka3||angka4 == 5){
		huruf = "E";
		cout << huruf;
	}else if(angka1||angka2||angka3||angka4 == 6){
		huruf = "F";
		cout << huruf;
	}
	
	return 0;
}
