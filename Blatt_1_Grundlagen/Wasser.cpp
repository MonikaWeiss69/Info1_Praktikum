// Wasser.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.

#include <iostream>
#include <windows.h>
#pragma execution_character_set( "utf-8" ) //Sagt dem Präprozessor welches Charakterset benutzt wird oder so
using namespace std;


int main()
{
	int Wert = 0;
	SetConsoleOutputCP(65001); //Ändert in der Console das Charackterset welches angezeigt wird
	cout << endl;
	cout << "Bitte geben Sie eine Temperatur in Grad Celsius ein: ";
	cin >> Wert;
	if (Wert < 0)
	{
		cout << endl;
		cout << "Bei " << Wert << " Grad Celsius ist Wasser Fest" << endl;
	}
	else if (Wert < 100)
	{
		cout << endl;
		cout << "Bei " << Wert << " Grad Celsius ist Wasser Flüßig" << endl;
	}
	else
	{
		cout << endl;
		cout << "Bei " << Wert << " Grad Celsius ist Wasser Gasförmig" << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}
