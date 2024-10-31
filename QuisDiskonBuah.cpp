#include <iostream>
using namespace std;

double total(double buahApel, double buahJeruk, double buahSemangka) {
	double apel = 24000;
	double jeruk = 32500;
	double semangka = 8000;
	double totalBerat = buahApel + buahJeruk + buahSemangka;
	double hasil;

	double total = (apel * buahApel) + (jeruk * buahJeruk) + (semangka * buahSemangka);


	if (totalBerat >= 10) {
		hasil = (5.0 / 100) * total;
	}
	else if (totalBerat >= 8) {
		hasil = (2.0 / 100) * total;
	}
	else {
		hasil = total;
	}

	return total - hasil;
}

int main()
{
	double buahApel, buahJeruk, buahSemangka;
	cout << "Masukkan berat buah apel dalam kg : "; cin >> buahApel;
	cout << "Masukkan berat buah jeruk dalam kg: "; cin >> buahJeruk;
	cout << "Masukkan berat buah semangka dalam kg : "; cin >> buahSemangka;

	cout << "Total : ";
	cout << total(buahApel, buahJeruk, buahSemangka);

}