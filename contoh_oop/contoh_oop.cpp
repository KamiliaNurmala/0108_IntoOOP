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

		float hitungLuas() {
			return panjang * lebar;
		}

		void display() {
			cout << "Panjangnya = " << panjang << endl;
			cout << "Lebarnya = " << lebar << endl;
			cout << "Luasnya = " << hitungLuas() << endl;
		}
};

int main() {
	bangunDatar pp;
	pp.input();
	pp.display();

	return 0;
}