# Nombre del ejecutable
TARGET = bin/pacman-game

# Compilador
CXX = g++

# Bandera para depuración
CXXFLAGS = -Wall -g -std=c++17

# Archivos fuente
SRCS = $(wildcard src/*.cpp)

# Archivos objeto
OBJS = $(SRCS:.cpp=.o)

# Regla para compilar el programa
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Regla para compilar los archivos fuente en archivos objeto
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para limpiar el proyecto
clean:
	rm -
