#include <iostream>
using namespace std;

typedef enum {manzana=1, naranja, pera, banana, kiwi, mandarina} tFrutas;

string nombre_fruta(tFrutas fruta);

int main (){

    string proveedor, razon_social, fechaHoy, fechaEntrega;
    int opcion_fruta;
    const int FRUTAS = 6;
    tFrutas frutas_pedidas [FRUTAS]; 
    int contador= 0;

    //Pedir al usuario los datos
    cout << "Codigo del proveedor: ";
    cin >> proveedor;
    cin.sync();
    cout << "Razon social: ";
    getline (cin, razon_social);
    cout << "Fecha de solicitud dd/mm/aa: ";
    cin >> fechaHoy;
    cout << "Fecha de entrega dd/mm/aa: ";
    cin >> fechaEntrega;

    cout << "Ingrese las opciones de las Frutas que desea pedir (presione 0 para terminar)" << endl;
    cout << "1 - Manzana " << endl;
    cout << "2 - Naranja " << endl;
    cout << "3 - Pera " << endl;
    cout << "4 - Banana " << endl;
    cout << "5 - Kiwi " << endl;
    cout << "6 - Mandarina " << endl;
    cout << "0 - Finalizar " << endl;
    cout << "Opcion: ";
    cin >> opcion_fruta;
    while (opcion_fruta != 0){
        if (opcion_fruta >=1 && opcion_fruta <=6){
            if(contador < FRUTAS){
            tFrutas fruta = tFrutas (opcion_fruta); // Conversion de enumeradores a enteros
            frutas_pedidas [contador] = fruta; // Cada fruta elegida se guarda en el contador
            contador++; 
            cout << "Fruta seleccionada: " << nombre_fruta (fruta) << endl; //Funcion que devuelve el nombre
            }
        else {
                cout << "Maximo de frutas alcanzado" << endl;
            break;
        }
        }
        else {
            cout << "Opcion no valida. Seleccione las opciones disponibles (0 para terminar)" << endl;        
            }
        cout << "Opcion: ";
        cin >> opcion_fruta; // Otra fruta para continuar en el while
    }

    // Mostrar los datos
    cout << "----Datos del Pedido----" << endl;
    cout << "Codigo Proveedor: " << proveedor << endl;
    cout << "Razon Social: " << razon_social << endl;
    cout << "Fecha de Solicitud: " << fechaHoy << endl;
    cout << "Fecha de Entrega: " << fechaEntrega << endl;
    cout << "Frutas Pedidas: ";
    for (int i = 0; i < contador; ++i) {
        cout << nombre_fruta(frutas_pedidas[i]);//Imprime el nombre de la fruta
        if (i < contador - 1) { 
            cout << ", "; //Imprime una coma despues de cada fruta, excepto en la ultima.
        }
    }
    cout << endl;
    
    return 0;
}
string nombre_fruta(tFrutas fruta) {
    string cadFrutas;
    switch (fruta) {
        case manzana: { 
            cout << "Manzana";
        } break;
        case naranja: { 
            cout <<"Naranja";
        } break;
        case pera: { 
            cout << "Pera";
        } break;
        case banana: { 
            cout << "Banana";
        } break;
        case kiwi: { 
            cout << "Kiwi";
        } break;
        case mandarina: { 
            cout << "Mandarina";
        } break;
    }
    return cadFrutas;
}
