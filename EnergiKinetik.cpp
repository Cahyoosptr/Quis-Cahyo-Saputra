#include <iostream>
#include <cmath>
using namespace std;

void hitungEk(double massa, double kecepatan) {
	double energikinetik = 0.5 * massa * pow(kecepatan,2);
	cout << "Energi kinetik : " << energikinetik << " Joule" << endl;

}

int main() {
	double massaSepeda, beratBadan, kecepatan;

	cout << "Masukkan massa sepeda (gram): ";
	cin >> massaSepeda;
	cout << "Masukkan massa Andika (kg): ";
	cin >> beratBadan;
	cout << "Masukkan kecepatan (ms): ";
	cin >> kecepatan;

	double totalMassa = massaSepeda + beratBadan;
	hitungEk(totalMassa , kecepatan);

	return 0;

}
