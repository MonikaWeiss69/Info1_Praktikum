// Blatt_5_Random.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
// Seit einfügen des Codes in eine weiter do schleife und hinzufügen von system(); ist cin und cout mehrdeutig, still works no problems

#include <iostream>
#include <iomanip>


int main()
{
    using namespace std;

    int Untergrenze = 0;
    int Obergrenze = 0;
    int Eingabe = 0;
    int Versuche = 0;
    int Zufallszahl = 0;
    int Weiter = 0;
    const int MaxVersuche = 5;
    
    do
    {
        //system("cls");
        do
        {
            cout << endl << "Gib die Untergrenze ein: ";
            cin >> Untergrenze;
            cout << endl << "Gib die Obergrenze ein: ";
            cin >> Obergrenze;


        } while (Obergrenze <= Untergrenze);

        srand(unsigned int(time(0)));
        Zufallszahl = Untergrenze + rand() % Obergrenze;

        do
        {
            Versuche += 1;

            if (Versuche == 1)
            {
                cout << "Du hast insgesamt " << MaxVersuche << " Versuche.\n";
            }
            else if (MaxVersuche - Versuche <= 1)
            {
                cout << "Du kannst nur noch " << 1 + MaxVersuche - Versuche << " mal raten!";
            }

            cout << "Versuch die Zahl zwischen " << Untergrenze << " und " << Obergrenze << " zu erraten.\n";
            cin >> Eingabe;

            if (Eingabe < Zufallszahl)
            {
                cout << "zu klein\n";
            }
            else if (Eingabe > Zufallszahl)
            {
                cout << "zu gross\n";
            }
            else if (Eingabe == Zufallszahl)
            {
                cout << "Richtig!\n";
            }
        } while (Eingabe != Zufallszahl && Eingabe > 0 && MaxVersuche != Versuche);

        cout << "\nDie Zufallszahl war tatsaechlich: " << Zufallszahl << endl;
        if (MaxVersuche == Versuche)
        {
            cout << "\nDu hast alle  Versuche aufgebraucht!";
        }
        else
        {
            cout << "Du hast " << Versuche << " Versuche gebraucht!" << endl;
        }
        cout << "Wollen sie weiter Spielen?(1/0): ";
        cin >> Weiter;
    } while (Weiter == 1);

    /*
    do
    {
        cout << endl << "Gib die Untergrenze ein: ";
        cin >> Untergrenze;
        cout << endl << "Gib die Obergrenze ein: ";
        cin >> Obergrenze;


    } while (Obergrenze <= Untergrenze);

    srand(unsigned int (time(0)));
    Zufallszahl = Untergrenze + rand() % Obergrenze;
    
    do
    {
        Versuche += 1;

        if (Versuche == 1)
        {
            cout << "Du hast insgesamt " << MaxVersuche << " Versuche.\n";
        }
        else if (MaxVersuche - Versuche <= 1)
        {
            cout << "Du kannst nur noch " << 1 + MaxVersuche - Versuche << " mal raten!";
        }

        cout << "Versuch die Zahl zwischen " << Untergrenze << " und " << Obergrenze << " zu erraten.\n";
        cin >> Eingabe;

        if (Eingabe < Zufallszahl)
        {
            cout << "zu klein\n";
        }
        else if (Eingabe > Zufallszahl)
        {
            cout << "zu gross\n";
        }
        else if (Eingabe == Zufallszahl)
        {
            cout << "Richtig!\n";
        }
    } while (Eingabe != Zufallszahl && Eingabe > 0 && MaxVersuche != Versuche );

    cout << "\nDie Zufallszahl war tatsaechlich: " << Zufallszahl << endl;
    if (MaxVersuche == Versuche)
    {
        cout << "\nDu hast alle  Versuche aufgebraucht!";
    }
    else 
    {
        cout << "Du hast " << Versuche << " Versuche gebraucht!" << endl;
    }
    cout << "Wollen sie weiter Spielen?(1/0): ";
    cin >> Weiter;
    */
}


