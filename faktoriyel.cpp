#include <iostream>

using namespace std;

void faktoriyelAl() {
	int faktoriyel = 1;
	for(int i=1 ; i <= 5 ; i++) {
		faktoriyel = faktoriyel * i;
	}
	
	cout << "faktoriyel= " << faktoriyel + 1;
}

int main() {
	faktoriyelAl();
	}