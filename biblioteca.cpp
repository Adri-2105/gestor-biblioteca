#include "Biblioteca.h"
#include <iostream>
#include <algorithm>

// Agrega un libro al vector
void Biblioteca::agregarLibro(const Libro& libro){
    libros.push_back(libro);
}
// Lista todos los libros guardados
void Biblioteca::listarLibros() const{

    // Verifica si la biblioteca está vacía
    if(libros.empty()){
        std::cout << "No hay libros en la biblioteca.\n";
        return;
    }

    // Recorre el vector y muestra cada libro
    for(const auto& libro : libros){
        libro.mostrarInfo();
    }

}

size_t Biblioteca::findByIsbn(const std::string& isbn) const{

    for(size_t i = 0; i < libros.size(); ++i){

        if(libros[i].getIsbn() == isbn){
            return i;
        }

    }

    return static_cast<size_t>(-1);

}

bool Biblioteca::eliminarLibro(const std::string& isbn){

    auto it = std::find_if(libros.begin(), libros.end(),
        [&isbn](const Libro& l){ return l.getIsbn() == isbn; });

    if(it != libros.end()){

        libros.erase(it);
        return true;

    }

    return false;

}