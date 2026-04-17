#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Pedido {
    string nomePrato;
    int quantidade;
    float precoTotal;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    vector<Pedido> pedidos;
    Pedido pedidoAtual;
    float precoParada = 0.0; // Valor espec�fico para encerrar o registro de pedidos

    cout << "Programa de Registro de Pedidos do Restaurante" << endl;
    cout << "Insira 0 no pre�o total para finalizar o registro de pedidos." << endl;

    do {
        cout << "Digite o nome do prato: ";
        getline(cin, pedidoAtual.nomePrato);
        cout << "Digite a quantidade do prato: ";
        cin >> pedidoAtual.quantidade;
        cout << "Digite o pre�o total do pedido: ";
        cin >> pedidoAtual.precoTotal;
        cin.ignore(); // Limpa o buffer de entrada ap�s a leitura de um valor num�rico

        // Verifica se o pre�o total � diferente do valor de parada
        if (pedidoAtual.precoTotal != precoParada) {
            pedidos.push_back(pedidoAtual); // Adiciona o pedido atual ao vetor de pedidos
        }

    } while (pedidoAtual.precoTotal != precoParada); // Continua at� que o valor de parada seja inserido

    cout << "\nRegistro de Pedidos:" << endl;
    for (const auto& pedido : pedidos) {
        cout << "Prato: " << pedido.nomePrato
         << ", Quantidade: " << pedido.quantidade
         << ", Pre�o Total: R$" << pedido.precoTotal << endl;
    }

    return 0;
}