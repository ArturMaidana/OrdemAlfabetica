#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char string1[40], string2[40];
	//int  a, b;
	int i = 0;

	printf("\nDigite a primeira palavra: ");
	gets(string1);

	printf("Digite a segunda palavra: ");
	gets(string2);

	printf("\n--- ORDEM ALFABETICA ---\n");

	while (1) {
		if (string1[i] == string2[i]) { i++; continue; }
		else if (string1[i] < string2[i]) { printf("\n%s\n%s\n\n", string1, string2); break; }
		else { printf("\n%s\n%s\n\n", string2, string1); break; }
	}

    FILE *arquivo;
    arquivo = fopen("comprimento_string.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return;
    }

    while (1) {
		if (string1[i] == string2[i]) { i++; continue; }
		else if (string1[i] < string2[i]) { printf("\n%s\n%s\n\n", string1, string2); break; }
		else { fprintf(arquivo,"\n%s\n%s\n\n", string2, string1); break; }
	}

    fclose(arquivo);
	printf("\nA ordem foi armazenada no arquivo 'OrdemAlfabetica.txt'.\n");

	return 0;
}