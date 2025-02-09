//Programm zur Aproximation der Eulerzahl e

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n = 0;
	int N = 0;
	int Schrittweite = 0;
	double Wert = 0.0;
	double Diff = 0.0;

	do {
		cout << "Wie viele Schritte Sollen berechnetwerden?: ";
		cin >> N;
		if( N <= 0) {
			cout << "Das ist keine Positive Zahl" << endl;
		}
	} while(N <= 0);
	cout << "Wie groß Sollen die Rechenschritte sein?: ";
		cin >> Schrittweite;
	
	cout  << setw(8) << "n"  <<setw(10) << "Wert" << setw(10) << "Diff" << endl;
	cout << "-------------------------" << endl;

	do
	{
		n = n + Schrittweite;
		Wert = 0.0;
		Wert = (1.+1. /double(n));
		Wert = pow(Wert, double(n));
		Diff = M_E - Wert;
		cout << right << setw(8)<< n << right << setw(10) << fixed << setprecision(5) << Wert << right << setw(10) << fixed << setprecision(5) << Diff << endl;
		
	} while(n < N);
	cout << "-------------------------" << endl << "e = " << fixed << setprecision(5) << M_E << endl;
	system("pause"); 
	return 0;
}


