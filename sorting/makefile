# Nombre del archivo ejecutable
TARGET = main

# Archivos fuente
SRCS = main.cpp bubble.cpp dataset.cpp funcion.cpp merge.cpp quick.cpp 

# Archivos objeto (se generarán automáticamente a partir de los archivos fuente)
OBJS = $(SRCS:.cpp=.o)

# Compilador y opciones
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Regla por defecto
all: $(TARGET)

# Regla para compilar los archivos fuente en archivos objeto
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para enlazar los archivos objeto en el ejecutable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Regla para limpiar los archivos generados
clean:
	rm -f $(TARGET) $(OBJS)
