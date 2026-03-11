# gestor-biblioteca
Proyecto de Organización Computacional - Sistema gestor de biblioteca


Proyecto realizado para la materia **Organización Computacional 2**.

## Descripción

Este programa es un gestor de biblioteca en C++ que permite administrar libros desde la consola.

El sistema utiliza programación orientada a objetos y vectores para almacenar los libros.

## Funcionalidades

El programa permite:

- Agregar libros
- Listar libros almacenados
- Buscar libros por ISBN
- Eliminar libros
- Mostrar la información completa de un libro

## Estructura del proyecto

El proyecto está dividido en varios archivos:

- `main.cpp` → contiene el menú principal
- `Libro.h / libro.cpp` → definición de la clase Libro
- `Biblioteca.h / biblioteca.cpp` → manejo del vector de libros

## Compilación

Para compilar el programa usar:
g++ main.cpp biblioteca.cpp libro.cpp -o gestor


Para ejecutar:
.\gestor.exe
