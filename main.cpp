#include <iostream>
#include <string>
using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int anioPublicacion;
    string edicion;
    int cantidadPaginas;

public:
    void ingresarDatos() {
        cout << "Titulo: ";
        getline(cin, titulo);

        cout << "Autor: ";
        getline(cin, autor);

        cout << "Año de publicacion: ";
        cin >> anioPublicacion;
        cin.ignore();

        cout << "Edicion: ";
        getline(cin, edicion);

        cout << "Cantidad de paginas: ";
        cin >> cantidadPaginas;
        cin.ignore();
    }

    void mostrarInformacion() {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Año de publicacion: " << anioPublicacion << endl;
        cout << "Edicion: " << edicion << endl;
        cout << "Cantidad de paginas: " << cantidadPaginas << endl;
    }
};

int main() {
    const int CANTIDAD_LIBROS = 5;
    Libro libros[CANTIDAD_LIBROS];

    cout << "===== REGISTRO DE LIBROS =====" << endl << endl;

    for (int i = 0; i < CANTIDAD_LIBROS; i++) {
        cout << "--- Libro " << (i + 1) << " ---" << endl;
        libros[i].ingresarDatos();
        cout << endl;
    }

    cout << "===== LISTADO DE LIBROS =====" << endl << endl;

    for (int i = 0; i < CANTIDAD_LIBROS; i++) {
        cout << "Libro " << (i + 1) << ":" << endl;
        libros[i].mostrarInformacion();
        cout << endl;
    }

    return 0;
}
