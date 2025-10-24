#include <iostream>
using namespace std;

int main() {
	int num;
	double nf;
	nf = 1;
	cout << "Enter a positive integer: ";
	cin >> num;
	
	for(int i =1; i <= num; ++i){
	nf *=i;
	}
	cout <<"nf = " << nf << endl;
	return 0; 
}