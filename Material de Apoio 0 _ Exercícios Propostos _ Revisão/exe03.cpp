#include <iostream>

using namespace std;

int main()
{
    float numHoras, salMin, salReceber;
    float horaTrab, salBruto, imposto;

    cout << "Digite o n�mero de horas trabalhadas: " << endl;
    cin >> numHoras;
    cout << "Digite o valor do sal�rio m�nimo: " << endl;
    cin >> salMin;

    horaTrab = salMin / 2;
    salBruto = numHoras * horaTrab;
    imposto = salBruto * 3/100;
    salReceber = salBruto - imposto;

    cout << "Sal�rio Bruto: " << salBruto << endl;
    cout << "Sal�rio a receber: " << salReceber << endl;

    return 0;
}