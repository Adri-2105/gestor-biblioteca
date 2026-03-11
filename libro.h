#ifndef LIBRO_H
#define LIBRO_H

#include <string>

class Libro {

private:
    std::string titulo;
    std::string autor;
    std::string isbn;

public:

    // constructor
    Libro(std::string t, std::string a, std::string i);

    // getters
    std::string getTitulo() const;
    std::string getAutor() const;
    std::string getIsbn() const;

    // mostrar información
    void mostrarInfo() const;

};

#endif