// Blatt_5_Eulerzahl2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    unsigned long long int faculty = 0;
    int n = 0;
    double sum = 0.0;
    int tableize = 0;
    int width = 16;

    cout << "Bitte geben sie einen positiven Integer ein: ";
    cin >> n;
    cout << "Sollen die Rechenschritte tabelarisch aufgeführt werden? (0 = nein, 1 = ja): ";
    cin >> tableize;
    if (tableize)
    {
        cout << setw(width) << "n" << setw(width) << "Summe" << setw(width) << "Differenz" << setw(width) << "Prozental" << setw(width) << endl << "-----------------------------------------------------" << endl;
    }

    for (int i = 0; i <= n; i++)
    {    
        if (i > 0) 
        {
            faculty = faculty * i;
        }
        else
        {
            faculty = 1;
        }
        
        sum = sum + (1 /(double)faculty);
        if (tableize == 1)
        {
            double diff = M_E - sum;
            double qout = (sum / (double)M_E) * 100;
            cout << setw(width) << i << setw(width) << setprecision(10) << fixed << sum << setw(width) << setprecision(10) << fixed << diff << setw(width) << setprecision(10) << fixed << qout << endl;
        }
    }
    
    if (tableize == 1)
    {
        cout << "-----------------------------------------------------" << endl;
    }
    else 
    {
        cout << "e(" << n << ") = " << fixed << sum << endl;
        cout << "Mit einer Abweichung von: " << fixed << M_E - sum << endl;
    }
    

}
