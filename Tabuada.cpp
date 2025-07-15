#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    system("chcp 65001"); // muda o código do console para UTF-8

    float operando1, operando2, resultado;
    char opcao;
	bool continuar = true, entrada = false;


    while (continuar)
    {
        cout << "\tCALCULAR TABUADA ☺" << endl;
        cout << "O que você prefere?" << endl;
        cout << "1. Gerar a tabuada do 1 ao 10." << endl;
	    cout << "2. Gerar a tabuada de um número específico." << endl;
        cout << "3. Sair." << endl;
	    cout << "Digite a opção desejada: ";
        cin >> opcao;


        switch (opcao)
        {
        case '1':
            system("cls");
            cout << "\tTabuada do 1 ao 10:" << endl << endl;
            for (operando1 = 1; operando1 <= 10; operando1++) {
                cout << "Tabuada do: " << operando1 << endl;
                for (operando2 = 0; operando2 <= 10; operando2++) {
                    resultado = operando1 * operando2;
                    cout << operando1 << " x " << operando2 << " = " << resultado << endl;
                }
                cout << endl;
            }

            break;

        case '2':
            system("cls");

            cout << "Digite o número para gerar a tabuada:" << endl;
            cout << "Número: ";
            cin >> operando1;
            
            cout << "\tTabuada do " << operando1 << ":" << endl << endl;
            for (operando2 = 0; operando2 <= 10; operando2++) {
                resultado = operando1 * operando2;
                cout << operando1 << " x " << operando2 << " = " << resultado << endl;
            }
            
            break;

        case '3':
            system("cls");
            cout << "Saindo do programa." << endl;
            continuar = false;
			
            break;


        default:
			system("cls");
            cout << "Opção inválida. Por favor, escolha 1 ou 2." << endl;
			system("pause");

            break;
        }

    }
    return 0;
}


