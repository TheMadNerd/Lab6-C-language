#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
 FILE *plik;
 int i, k;
 int numbers[5];
    printf("Podaj 5 liczb: \n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
 plik=fopen("dane","w");
 for (int i = 0; i < 5; i++) {
        fprintf(plik, "%d ", numbers[i]);
    }
    fclose(plik);
 plik=fopen("dane","r");
 for(i=0;i<5;i++)
 {
 fscanf(plik,"%4d",&k);
 printf("%3d\n",k);
 }
}