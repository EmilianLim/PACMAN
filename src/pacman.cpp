#include "../include/pacman.h"

// Constructor de la clase PacMan
PacMan::PacMan(int startX, int startY) : x(startX), y(startY) {}

// Métodos para mover a Pac-Man en diferentes direcciones
void PacMan::moveUp() {
    y--; // Disminuye la coordenada y para moverse hacia arriba
}

void PacMan::moveDown() {
    y++; // Incrementa la coordenada y para moverse hacia abajo
}

void PacMan::moveLeft() {
    x--; // Disminuye la coordenada x para moverse a la izquierda
}

void PacMan::moveRight() {
    x++; // Incrementa la coordenada x para moverse a la derecha
}

// Métodos de acceso para obtener la posición actual de Pac-Man
int PacMan::getX() const {
    return x;
}

int PacMan::getY() const {
    return y;
}
