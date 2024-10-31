#include <iostream> 
using namespace std;

void hitungEk(double massa, double kecepatan) {
	double energikinetik = 0.5 * massa * kecepatan * kecepatan;
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
	hitungEk(totalMassa = massaSepeda, kecepatan);

	return 0;

}