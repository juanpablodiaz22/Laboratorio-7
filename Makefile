# Compilador
CC = gcc

# Archivo ejecutable
TARGET = sort_people

# Flags de compilación
CFLAGS = -Wall -Wextra -pedantic -std=c99

# Archivos fuente
SRCS = main.c

# Archivos objeto
OBJS = $(SRCS:.c=.o)

# Regla para compilar el ejecutable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Regla para compilar archivos .c a .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpia archivos generados
clean:
	rm -f $(OBJS) $(TARGET)