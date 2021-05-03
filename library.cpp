#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main(){
	
	double x,y;
	
	cout << "Variable X : ";
	cin >> x;
	
	cout << "Variable Y : ";
	cin >> y;
	
	double z = max(x,y);
	
	cout << z << endl;
	
	return 0;
}
