#include <iostream>
using namespace std;

int main(){
	
	int n,m;
	
	cout << "Nilai N : ";
	cin >> n;
	
	cout << "Nilai M : ";
	cin >> m;
	
for(int i = 0;i < n;i++){
	
	cout << "-";
	
}	
	cout << endl;
for(int i = 0;i < m;i++){
	
	cout << "|	|"<< endl;
	
}

for(int i = 0;i < n;i++){
	
	cout << "-";
	
}

return 0;	
}

