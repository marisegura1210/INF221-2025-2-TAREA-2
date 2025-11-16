//hola
#include <iostream> // Librería para entrada/salida estándar
#include <limits>   // Para limpiar el buffer en caso de error

using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número entero: ";

    // Validación de entrada
    while (!(cin >> numero)) {
        cout << "Entrada inválida. Por favor ingrese un número entero: ";
        cin.clear(); // Limpia el estado de error
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descarta entrada incorrecta
    }

    cout << "El número ingresado es: " << numero << endl;hjghj

    return 0; // Indica que el programa terminó correctamente
}
