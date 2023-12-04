#include <iostream>
#include <time.h>
#include <cstdlib>
#include <math.h>

using namespace std;

void number();
void dividers(int a);
void ukladanie(int a, int b);
void age(int a);
int prawdaFalsz(int a);
void losowanie();
void zwracaLiczbe(int a);
void niepodzielneLiczby();


int main()
{
	srand(time(NULL));

	number();
	cout << endl << "koniec" << endl;
	dividers(74765);
	cout << "koniec 2" << endl;
	ukladanie(rand() % 10, rand() % 10);
	cout << "koniec 3" << endl;
	age(2007);
	cout << "koniec 4" << endl;

	cout << "Kolokwium2" << endl;
	cout << prawdaFalsz(rand() % 100);
	cout << endl << "koniec 2" << endl;
	losowanie();
	cout << endl << "koniec 3" << endl;
	zwracaLiczbe(rand() % 10000);
	cout << endl << "koniec 4" << endl;
	niepodzielneLiczby();
}

void number() {
	for (size_t i = 140; i <= 1410; i++)
	{
		if (i % 16 == 0 && i % 3 == 0) {
			cout << i << " ";
		}
	}
}

void dividers(int a) {

	cout << "Liczba do podzielenia: " << a << endl;

	for (size_t i = 1; i <= a; i++)
	{
		if (a % i == 0) {
			cout << i << endl;
		}
	}
}

void ukladanie(int a, int b) {
	if (a > b) {
		cout << a << endl;
		cout << b << endl;
	}
	else {
		cout << b << endl;
		cout << a << endl;
	}
}

void age(int a) {

	int age = 2023 - a;

	if (age < 18) {
		cout << age << endl;
		cout << "Nie jestes pelnoletni" << endl;
	}
	else {
		cout << age << endl;
		cout << "Jestes pelnoletni" << endl;
	}
}

int prawdaFalsz(int a) {

	cout << "Liczba: " << a << endl;

	if (a % 2 == 0) return true;
	else return false;
}

void losowanie() {
	int a = rand() % 20 - 10;
	int b = rand() % 20 - 10;
	int c = rand() % 20 - 10;

	do
	{
		if (b == a) {
			b = rand() % 20 - 10;
		}

		if (c == a || c == b) {
			c = rand() % 20 - 10;
		}

	} while (c == a || c == b || b == a);


	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

}

void zwracaLiczbe(int a) {
	 
	int z = 0;

	cout << "Liczba: " << a << endl;

	while (a > 0)
	{
		a /= 10;
		z++;
	}

	cout << z;
}

void niepodzielneLiczby() {

	int a = 0;
	int b = 0;
	int liczby[30];

	while (b <30)
	{
		a++;

		if (a % 3 != 0) {
			liczby[b] = a;
			b++;
		}
	}

	for (size_t i = 0; i < 30; i++)
	{
		cout << liczby[i] << " ";
	}
}