#include <iostream>
using namespace std;

class bangunDatar {

	// akses modifier
	private:
		float panjang, lebar;
	public:	
		float luas;

		void input() {

			cout << "Masukan panjangnya = ";
			cin >> panjang;
			cout << "Masukan lebarnya = ";
			cin >> lebar;
		}

};