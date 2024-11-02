#ifndef PACMAN_H
#define PACMAN_H

// Declaración de la clase PacMan
class PacMan {
public:
    // Constructor para inicializar la posición de Pac-Man
    PacMan(int startX, int startY);

    // Métodos para mover a Pac-Man
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();

    // Método para obtener la posición actual de Pac-Man
    int getX() const;
    int getY() const;

private:
    // Posición de Pac-Man en el mapa
    int x;
    int y;
};

#endif // PACMAN_H
