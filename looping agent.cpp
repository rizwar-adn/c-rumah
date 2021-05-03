#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int i = 0;
	string agent[] = {"Phoenix","Reyna","Sage","Jett","Brimstone","Breach"};
	
	while(i < 6){
		cout << agent[i] << endl;
		i+=2;
		
		if(agent[i] != "2"){
			cout << "Anjay Phoenix" << endl;
		}
	}
	
	return 0;
}
