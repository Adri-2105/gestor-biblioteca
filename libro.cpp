#include "Libro.h"
#include <iostream>

// Constructor
Libro::Libro(std::string t, std::string a, std::string i){

    titulo = t;
    autor = a;
    isbn = i;

}

// Getters

std::string Libro::getTitulo() const{
    return titulo;
}

std::string Libro::getAutor() const{
    return autor;
}

std::string Libro::getIsbn() const{
    return isbn;
}

// Mostrar información

void Libro::mostrarInfo() const{

    std::cout << "Titulo: " << titulo << std::endl;
    std::cout << "Autor: " << autor << std::endl;
    std::cout << "ISBN: " << isbn << std::endl;
    std::cout << "-------------------------" << std::endl;

}