#include <iostream>
#include <string>
#include <cstdlib> // atof
using namespace std;

// Operaciones
double suma(double a, double b) { return a + b; }
double resta(double a, double b) { return a - b; }
double multi(double a, double b) { return a * b; }
double divi(double a, double b) {
    if (b == 0) {
        cout << "Error: division por cero" << endl;
        exit(1);
    }
    return a / b;
}

// Funcion callback
void calc(double (*op)(double, double), double x, double y) {
    cout << "Resultado: " << op(x, y) << endl;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cout << "Uso: ./oper num1 operador num2" << endl;
        return 1;
    }

    double n1 = atof(argv[1]);
    string op = argv[2];
    double n2 = atof(argv[3]);

    if (op == "+") {
        calc(suma, n1, n2);
    } else if (op == "-") {
        calc(resta, n1, n2);
    } else if (op == "*" || op == "x" || op == "X") {
        calc(multi, n1, n2);
    } else if (op == "/") {
        calc(divi, n1, n2);
    } else {
        cout << "Operador no valido. Usa +, -, *, /" << endl;
    }

    return 0;
}
