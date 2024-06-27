#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Se crea una funcion que define la estructura Person
typedef struct {
    char name[50];
    int age;
    double height;
} Person;

// Se crea una funcion de comparacion para ordenar por nombre
int compare_by_name(const void *a, const void *b) {
    Person *personA = (Person *)a;
    Person *personB = (Person *)b;
    return strcmp(personA->name, personB->name);
}

// Se crea una funcion de comparacion para ordenar por edad
int compare_by_age(const void *a, const void *b) {
    Person *personA = (Person *)a;
    Person *personB = (Person *)b;
    return (personA->age - personB->age);
}

// Se crea una funcion de comparacion para ordenar por altura
int compare_by_height(const void *a, const void *b) {
    Person *personA = (Person *)a;
    Person *personB = (Person *)b;
    return (personA->height > personB->height) - (personA->height < personB->height);
}

// Se crea una funcion para imprimir el arreglo de personas
void print_people(Person people[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Age: %d, Height: %.2f\n", people[i].name, people[i].age, people[i].height);
    }
}

int main() {
    // Se crea un arreglo de personas
    Person people[5] = {
        {"Esteban", 33, 165.5},
        {"David", 41, 180.3},
        {"Carlos", 22, 175.0},
        {"Benjamin", 28, 160.2},
        {"Arturo", 15, 170.8}
    };

    int size = sizeof(people) / sizeof(people[0]);

    // Se ordena por nombre y muestra el resultado
    qsort(people, size, sizeof(Person), compare_by_name);
    printf("Ordenado por nombre:\n");
    print_people(people, size);

    // Se ordena por edad y muestra el resultado
    qsort(people, size, sizeof(Person), compare_by_age);
    printf("\nOrdenado por edad:\n");
    print_people(people, size);

    // Se ordena por altura y muestra el resultado
    qsort(people, size, sizeof(Person), compare_by_height);
    printf("\nOrdenado por altura:\n");
    print_people(people, size);

    return 0;
}