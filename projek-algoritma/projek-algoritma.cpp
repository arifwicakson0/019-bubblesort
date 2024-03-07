#include <iostream>
#include <chrono>
using namespace std;

int a(20);          // Deklari array a dengan ukuran 20
int n;             //  deklarasi variabel n untuk menyimpan banyaknya elemen pada array

vid input() {          //
while (true) {    // Loping
		cout << "Masukan banyaknya elemen pada array ; ";
	cin >> n;          //
	if (n <= 20)      //
		break;       //
	else {          //
		cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // output ke layar
	}
}
cout << endl;
cout << "==========" << endl;
cout << "Masukan Elemen Array" << endl;
cout << "==========" << endel;

for (int i = 0; i < n i++) {  // Looping dengan i dimulai dari 0 hingga n-1