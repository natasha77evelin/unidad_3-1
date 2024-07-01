//una APP que pida la comanda y muestre por pantalla la Info solicitada.

#include <iostream>
#include <string>

using namespace std;

typedef enum { primer_plato = 1, plato_principal, postre } tPedidos;

string eleccion_plato(int opcion);

int main() {
    int numero_mesa;
    string nombre_mozo, fecha, hora;
    tPedidos plato_elegido;
    int opcion;

    // Pedir comanda
    cout << "Numero de mesa: ";
    cin >> numero_mesa;

    cout << "Mozo: ";
    cin.ignore(); // Ignora el carácter de nueva línea dejado en el buffer
    getline(cin, nombre_mozo);

    cout << "Fecha (dd/mm/aa): ";
    cin >> fecha;

    cout << "Hora (hh:mm): ";
    cin >> hora;

    cout << "Plato (1- Primer plato, 2- Plato principal, 3- Postre): ";
    cin >> opcion;
    while (opcion <= 0 || opcion > 3) {
        cout << "Valor no valido. Plato (1- Primer plato, 2- Plato principal, 3- Postre): ";
        cin >> opcion;
    }

    // Convertir opción a tPedidos
    plato_elegido = tPedidos(opcion);

    // Mostrar por pantalla la información
    cout << "--- Comanda ---" << endl;
    cout << "Numero de mesa: " << numero_mesa << endl;
    cout << "Mozo: " << nombre_mozo << endl;
    cout << "Fecha: " << fecha << endl;
    cout << "Hora: " << hora <<" hs " << endl;
    cout << "Plato elegido: " << eleccion_plato(opcion) << endl;

    return 0;
}

string eleccion_plato(int opcion) {
    switch (opcion) {
        case primer_plato:
            return "Primer plato";
        case plato_principal:
            return "Plato principal";
        case postre:
            return "Postre";
        default:
            return "Opción desconocida";
    }
}

