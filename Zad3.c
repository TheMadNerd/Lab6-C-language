#include <stdio.h>

int main() {
    char file1[100], file2[100];
    char line[100];

    printf("Podaj nazwę pliku źródłowego: ");
    scanf("%s", file1);

    printf("Podaj nazwę pliku docelowego: ");
    scanf("%s", file2);

    FILE *src = fopen(file1, "r");
    if (src == NULL) {
        printf("Nie można otworzyć pliku źródłowego\n");
        return 1;
    }

    FILE *dest = fopen(file2, "w");
    if (dest == NULL) {
        printf("Nie można otworzyć pliku docelowego\n");
        return 1;
    }

    while (fgets(line, sizeof(line), src)) {
        fputs(line, dest);
    }

    fclose(src);
    fclose(dest);

    printf("Zawartość pliku %s została skopiowana do pliku %s\n", file1, file2);
    return 0;
}
