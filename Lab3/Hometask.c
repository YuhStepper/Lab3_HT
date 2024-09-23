#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	int speedinbits, speedinkbites, result2;
	float result1;

	puts("Введите пропускную способность в бит/с: ");
	scanf("%d", &speedinbits);
	result1 = speedinbits * 0.000125;
	printf("Данная пропускная способность в Кбайт/с будет: %.3f", result1);

	puts("\nВведите пропускную способность в Кбайт/с: ");
	scanf("%d", &speedinkbites);
	result2 = speedinkbites * 8000;
	printf("Данная пропускная способность в бит/с будет: %d", result2);

}