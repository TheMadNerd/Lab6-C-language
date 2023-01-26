#include <stdio.h>

int main() {
    char filename[100];
    int count = 0;
    char c;

    printf("Podaj nazwę pliku: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Nie można otworzyć pliku\n");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    count = ftell(file);
    rewind(file);
    printf("Ilość znaków w pliku: %d\n", count);

    fclose(file);
    return 0;
}