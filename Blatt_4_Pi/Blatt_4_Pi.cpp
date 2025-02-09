// Blatt_4_Pi.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>



using namespace std;



bool valid_input = false;
int formel = 0;
int n = 0;
double ergebnis = 0.0;
double summe = 0.0;
double diff = 0.0;
double power = 0.0;
int i = 0;

double rechnung(int formel, int n)
{
    if ( formel == 1 ){
        for (int i = 0; i < n; i++) {
            power = pow(-1., i);
            ergebnis = (power / 2 * i + 1);
        }
        
        return 4 * ergebnis;
    }
    else {
        return 3.14;
    }
    
}
int tabelle(int formel,int n)
{
    cout << "n, n-tes Glied, Summe , Differenz\n---------------------------------\n";
    for (int i = 0; i < n; i++) {
        power = pow(-1., i);
        ergebnis = 4 * (power / 2 * i + 1);
        summe = summe + ergebnis;
        diff = M_PI - summe;
        cout << fixed << setprecision(5) << right << setw(10) << i << fixed << setprecision(5) << right << setw(10) << ergebnis << fixed << setprecision(5) << right << setw(10) << summe << fixed << setprecision(5) << right << setw(10) << diff << endl;
       
    }
    system("pause");
    return 0;
}

int main()
{
    do  {
        cout << "Willkommen im Pi-Rechner\nWelches Formel zur berechnung von Pi soll verwendet werden?\n1) Leibniz 2)andere :";
        cin >> formel;
        if (formel != 1) {
            cout << "Invalider Input!";
        }
        else {
            valid_input = true;
        }
    } while (valid_input == false);
    do 
    {   
        cout << "Wie viele Schritte wollen sie rechnen?:";
            cin >> n;
        if (n > 0) {
            valid_input = true;
            }
        else {
            cout << "Invalider Input!";
            valid_input = false;
        }
    } while (valid_input = false);
    tabelle(formel, n);

    /*
    if (formel == 1) {
        cout << fixed << leibniz(n);
    }
    else {
        cout << "Formel nicht gefunden";
    }
    */
}

