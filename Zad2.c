#include <stdio.h>

int main() {
    char filename[100], text[100];

    printf("Podaj nazwę pliku: ");
    scanf("%s", filename);

    printf("Podaj tekst do zapisania: ");
    scanf("%s", text);

    FILE *file = fopen(filename, "w");
    
    fprintf(file, "%s", text);
    fclose(file);

    printf("Tekst zapisany do pliku %s\n", filename);
    return 0;
}
