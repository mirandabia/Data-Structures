#include <iostream>
using namespace std;

/**
 * Verifica se um ano é bissexto.
 * Um ano é bissexto se for divisível por 4 e não for divisível por 100,
 * exceto se for divisível por 400.
 *
 * @param ano O ano a ser verificado.
 * @return true se o ano for bissexto, false caso contrário.
 */
bool isBissexto(int ano) {
    return (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
}

int main() {
    int ano;
    
    cout << "Digite um ano para verificar se é bissexto: " << endl;
    cin >> ano;
    
    if (isBissexto(ano)) {
        cout << ano << " é um ano bissexto." << endl;
    } else {
        cout << ano << " não é um ano bissexto." << endl;
    }
    
    return 0;
}