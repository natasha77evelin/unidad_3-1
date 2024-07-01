//un programa para tomar reservas en avión
#include <iostream>
using namespace std;

typedef enum {BHI=1, AEP, EPA, EZE, BRC, CTC, CRD} tAeropuerto;

string origenAeropuesto (tAeropuerto origen);
string destinoAeropuesto (tAeropuerto destino);
string clase (int opcion_clase);
void mostrarMenuAeropuertos();
int obtenerOpcionAeropuerto();
void mostrarMenuClases();
int obtenerOpcionClase();

int main (){

    string nombre, apellido; //variables para cadenas de caracteres
    int dni;
    int opcion_clase, opcion_origen, opcion_destino;

    //Perdir datos al usuario
    cout << "Nombre: ";
    cin >> nombre;
    cin.sync();
    cout << "Apellido: ";
    cin >> apellido;
    cout << "DNI (sin puntos): ";
    cin >> dni;

    //Mostrar y obtener opción de aeropuerto de origen
    mostrarMenuAeropuertos();
    opcion_origen = obtenerOpcionAeropuerto();

    //Mostrar y obtener opción de aeropuerto de destino
    cout << "Elija la opción del Aeropuerto de Destino: " << endl;
    mostrarMenuAeropuertos();
    opcion_destino = obtenerOpcionAeropuerto();

    //Mostrar y obtener opción de clase
    mostrarMenuClases();
    opcion_clase = obtenerOpcionClase();

    tAeropuerto origen = tAeropuerto(opcion_origen); // conversión del tipo enumerador a un entero
    tAeropuerto destino = tAeropuerto(opcion_destino);

    //Mostrar datos finales
    cout << "------------------------------" << endl;
    cout << "Nombre y Apellido: " << nombre << " " << apellido << endl;
    cout << "DNI: " << dni << endl;
    cout << "Aeropuerto de Origen: " << origenAeropuesto(origen) << endl;
    cout << "Aeropuerto de Destino: " << destinoAeropuesto(destino) << endl;
    cout << "Clase: " << clase(opcion_clase) << endl;

    return 0;
}

void mostrarMenuAeropuertos() {
    cout << "----- Aeropuertos -----: " << endl;
    cout << " 1. Bahia Blanca-BHI " << endl;
    cout << " 2. Buenos Aires Aeroparque-AEP " << endl;
    cout << " 3. Buenos Aires El Palomar-EPA " << endl;
    cout << " 4. Buenos Aires Ezeiza-EZE " << endl;
    cout << " 5. San Carlos de Bariloche-BRC " << endl;
    cout << " 6. San Fernando del Valle de Catamarca-CTC" << endl;
    cout << " 7. Comodoro Rivadavia-CRD " << endl;
    cout << "-------------------------"<< endl;
}

int obtenerOpcionAeropuerto() {
    int opcion;
    cout << "Opción: ";
    cin >> opcion; 
    while (opcion < 1 || opcion > 7) { //Validación de opción válida
        cout << "Opción inválida. Intente de nuevo." << endl;
        cout << "Opción: ";
        cin >> opcion;
    }
    return opcion;
}

void mostrarMenuClases() {
    cout << "Elija en la Clase que desea viajar " << endl;
    cout << "1. Primera, 2. Business, 3. Económica: " << endl;
    cout << "-------------------------"<< endl;
}

int obtenerOpcionClase() {
    int opcion;
    cout << "Opción: ";
    cin >> opcion; 
    while (opcion < 1 || opcion > 3) { // Validación de opción válida
        cout << "Opción inválida. Intente de nuevo." << endl;
        cout << "Opción: ";
        cin >> opcion;
    }
    return opcion;
}

string origenAeropuesto(tAeropuerto origen){
    string cadOrigen;
    switch (origen){
    case BHI: cadOrigen = "Bahia Blanca-BHI"; break;
    case AEP: cadOrigen = "Buenos Aires Aeroparque-AEP"; break;
    case EPA: cadOrigen = "Buenos Aires El Palomar-EPA"; break;
    case EZE: cadOrigen = "Buenos Aires Ezeiza-EZE"; break;
    case BRC: cadOrigen = "San Carlos de Bariloche-BRC"; break;
    case CTC: cadOrigen = "San Fernando del Valle de Catamarca-CTC"; break;
    case CRD: cadOrigen = "Comodoro Rivadavia-CRD"; break;
    default: cadOrigen = "Desconocido"; break;
    }
    return cadOrigen;
}

string destinoAeropuesto(tAeropuerto destino){
    string cadDestino;
    switch (destino){
    case BHI: cadDestino = "Bahia Blanca-BHI"; break;
    case AEP: cadDestino = "Buenos Aires Aeroparque-AEP"; break;
    case EPA: cadDestino = "Buenos Aires El Palomar-EPA"; break;
    case EZE: cadDestino = "Buenos Aires Ezeiza-EZE"; break;
    case BRC: cadDestino = "San Carlos de Bariloche-BRC"; break;
    case CTC: cadDestino = "San Fernando del Valle de Catamarca-CTC"; break;
    case CRD: cadDestino = "Comodoro Rivadavia-CRD"; break;
    default: cadDestino = "Desconocido"; break;
    }
    return cadDestino;
}

string clase(int opcion_clase){
    string clase;
    switch (opcion_clase){
    case 1: clase = "Primera Clase"; break;
    case 2: clase = "Clase Business"; break;
    case 3: clase = "Clase Económica"; break;
    default: clase = "Desconocida"; break;
    }
    return clase;
}
