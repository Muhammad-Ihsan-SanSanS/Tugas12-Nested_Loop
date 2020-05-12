#include <iostream>
using namespace std;

int main ()
{
	int w;
	
	cout << "Masukkan panjang pola: ";
	cin >> w;
	
	cout << "Pola:" << endl;
	
	for ( int x = 1; x <= w; x++ ) {
		
		for ( int y = w; y > x; y-- ) {
			cout << " ";
		}
		
		for ( int z = 1; z <= (2 * x - 1); z++ ) {
			cout << "*";
		}
		cout << endl;
	}
}
