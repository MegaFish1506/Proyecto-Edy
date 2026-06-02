#include <iostream>

int main() {
    int op;

    using namespace std;
    
    do {
        cout << "1.Nuevo Alumno" << endl;
        cout << "2.Agregar servicio a un estudiante" << endl;
        cout << "3.Modificar un servicio de un estudiante" << endl;
        cout << "4.Reportes" << endl;
        cout << "5.Elaboro (Nombre de todos los integrantes)" << endl;
        cout << "6.Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> op;

        switch (op) {
            case 1:
                break;
            
            case 5:
                cout << "Este proyecto fue elaborado por: " << endl;
                cout << "Angúlo Barraza Fabián" << endl;
                cout << "Espinoza Gamboa Israel" << endl;
                cout << "Morales Velarde Armando" << endl;
                cout << "Sanchez Quintero Carlos Jeovanny" << endl;
                break;
            case 6:
                break;
            default:
                break;
        }
    } while (op != 6);
    
    return 0;
}