#include <stdio.h>

int main() {
    char name[100];
    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);
    puts("The student name: ");
    puts(name);
    return 0;
}
