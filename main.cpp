#include <iostream>

using namespace std;

int main()
{
    string zdanie;
    cout << "Podaj jakies zdanie" << endl;
    getline(cin,zdanie);    //pobieranie ca³ej linii od usera
    //cin >> zdanie //pobranie cinem spowoduje ¿e program potraktuje spacje jako separator i w cout wyswietli tylko jedno slowo

    cout << zdanie;

    return 0;
}
