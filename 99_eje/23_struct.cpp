
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char * name;
    int age;
} person;

int main() {
    person john;
    /* testing code */
    john.name = "John";
    john.age = 27;
    printf("%s is %d years old.", john.name, john.age);
    return EXIT_SUCCESS;
}
