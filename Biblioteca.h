#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include <string>
#include "Libro.h"
// Clase que administra una colección de libros
class Biblioteca {

private:
// Vector que almacena todos los libros de la biblioteca
    std::vector<Libro> libros;

public:
// Agrega un libro al vector
    void agregarLibro(const Libro& libro);
// Muestra todos los libros almacenados
    void listarLibros() const;
// Busca un libro por su ISBN y devuelve su posición
    size_t findByIsbn(const std::string& isbn) const;
// Elimina un libro usando su ISBN
    bool eliminarLibro(const std::string& isbn);

};

#endif