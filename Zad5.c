#include <stdio.h>

int main() {
    char filename[100];
    int alphabet[26] = {0};
    char c;

    printf("Podaj nazwę pliku: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Nie można otworzyć pliku\n");
        return 1;
    }

    while ((c = fgetc(file)) != EOF) {
        if (c >= 'a' && c <= 'z') {
            alphabet[c - 'a']++;
        } else if (c >= 'A' && c <= 'Z') {
            alphabet[c - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", i + 'a', alphabet[i]);
    }

    fclose(file);
    return 0;
}
