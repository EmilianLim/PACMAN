#include <iostream>
#include "../include/pacman.h"
#include "../include/map.h"

int main() {
    // Crear el mapa y mostrarlo
    Map map;
    std::cout << "Mapa inicial:" << std::endl;
    map.display();

    // Crear un objeto PacMan en una posición válida (1, 1)
    PacMan pacman(1, 1);
    std::cout << "Posición inicial de PacMan: (" << pacman.getX() << ", " << pacman.getY() << ")" << std::endl;

    // Mover a PacMan en diferentes direcciones y verificar si el movimiento es posible
    int newX = pacman.getX(), newY = pacman.getY() - 1; // Una posición hacia arriba
    if (map.isWalkable(newX, newY)) {
        pacman.moveUp();
        std::cout << "PacMan se movió hacia arriba: (" << pacman.getX() << ", " << pacman.getY() << ")" << std::endl;
    } else {
        std::cout << "Movimiento hacia arriba no permitido." << std::endl;
    }

    newX = pacman.getX() - 1; // Una posición hacia la izquierda
    newY = pacman.getY();
    if (map.isWalkable(newX, newY)) {
        pacman.moveLeft();
        std::cout << "PacMan se movió a la izquierda: (" << pacman.getX() << ", " << pacman.getY() << ")" << std::endl;
    } else {
        std::cout << "Movimiento a la izquierda no permitido." << std::endl;
    }

    newX = pacman.getX();
    newY = pacman.getY() + 1; // Una posición hacia abajo
    if (map.isWalkable(newX, newY)) {
        pacman.moveDown();
        std::cout << "PacMan se movió hacia abajo: (" << pacman.getX() << ", " << pacman.getY() << ")" << std::endl;
    } else {
        std::cout << "Movimiento hacia abajo no permitido." << std::endl;
    }

    newX = pacman.getX() + 1; // Una posición hacia la derecha
    newY = pacman.getY();
    if (map.isWalkable(newX, newY)) {
        pacman.moveRight();
        std::cout << "PacMan se movió a la derecha: (" << pacman.getX() << ", " << pacman.getY() << ")" << std::endl;
    } else {
        std::cout << "Movimiento a la derecha no permitido." << std::endl;
    }

    return 0;
}
