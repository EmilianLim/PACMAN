#include "../include/map.h"
#include <iostream>

// Constructor que inicializa el diseño del mapa
Map::Map() {
    layout = {
        "#############",
        "#...........#",
        "#.#####.#####",
        "#.#...#.#...#",
        "#.#.###.#.###",
        "#.#.....#...#",
        "#.#####.#####",
        "#...........#",
        "#############"
    };
}

// Método para mostrar el mapa en la consola
void Map::display() const {
    for (const auto& row : layout) {
        std::cout << row << std::endl;
    }
}

bool Map::isWalkable(int x, int y) const {
    if (y < 0 || y >= static_cast<int>(layout.size()) || x < 0 || x >= static_cast<int>(layout[y].size())) {
        return false; // Fuera de los límites del mapa
    }
    return layout[y][x] == '.'; // Solo es transitable si es un espacio vacío (.)
}


// Método para obtener el ancho del mapa
int Map::getWidth() const {
    return layout[0].size();
}

// Método para obtener la altura del mapa
int Map::getHeight() const {
    return layout.size();
}
