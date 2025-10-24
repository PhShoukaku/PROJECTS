#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	char ans;
	
do {
	system ("cls");
int N;
cout << "Enter any number to print in series: ";
cin >> N;
int i = 1;
while (i <= N) {
cout << i << endl;
i = i + 1;
}
cout << "Do you want to try again y/n: ";
cin >> ans;}

while ((ans=='y') || (ans== 'Y'));

cout << "BYE!";

return 0;
}