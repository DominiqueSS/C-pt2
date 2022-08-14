#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	int age;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a sua idade: ");
	scanf_s("%i", &age);
	system("cls");
	printf("\n\n\nA sua idade é: %i\n\n\n", age);

	return 0;
}