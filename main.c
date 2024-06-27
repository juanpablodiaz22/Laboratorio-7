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

