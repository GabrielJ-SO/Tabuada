#include <iostream>
using namespace std;

int main()
{
    int operando1, operando2, resultado;

    for (operando1 = 1; operando1 <= 10; operando1++) {
		    cout << "Tabuada do: " << operando1 << endl;
            for (operando2 = 0; operando2 <= 10; operando2++) {
                    resultado = operando1 * operando2;
					cout << operando1 << " x " << operando2 << " = " << resultado << endl;
        }
            cout << endl;
    }

    return 0;
}


