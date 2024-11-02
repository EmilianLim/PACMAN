#ifndef MAP_H
#define MAP_H

#include <vector>
#include <string>

class Map {
public:
    // Constructor que inicializa el mapa
    Map();

    // Método para mostrar el mapa en la consola
    void display() const;

    // Método para verificar si una posición es transitable
    bool isWalkable(int x, int y) const;

    // Métodos para obtener el tamaño del mapa
    int getWidth() const;
    int getHeight() const;

private:
    // Mapa bidimensional almacenado como un vector de strings
    std::vector<std::string> layout;
};

#endif // MAP_H
