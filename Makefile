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

