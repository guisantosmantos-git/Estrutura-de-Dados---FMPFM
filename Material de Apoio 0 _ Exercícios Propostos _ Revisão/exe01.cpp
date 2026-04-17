#include <iostream>

using namespace std;

int main()
{
    //declarando as vari�veis
    float peso, altura, imc;

    //entrada de dados
    cout << "Informe o seu peso: ";
    cin >> peso;
    cout << "Informe a sua altura: ";
    cin >> altura;

    //processamento
    imc = peso / (altura*altura);

    if (imc < 20){
        cout << "Voc� est� abaixo do peso";
    }
    else if(imc >= 20 && imc < 25){
        cout << "Voc� est� no peso ideal";
    }
    else{
        cout << "Voc� est� acima do peso";
    }

    return 0;
}