#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	int speedinbits, speedinkbites, result2;
	float result1;

	puts("������� ���������� ����������� � ���/�: ");
	scanf("%d", &speedinbits);
	result1 = speedinbits * 0.000125;
	printf("������ ���������� ����������� � �����/� �����: %.3f", result1);

	puts("\n������� ���������� ����������� � �����/�: ");
	scanf("%d", &speedinkbites);
	result2 = speedinkbites * 8000;
	printf("������ ���������� ����������� � ���/� �����: %d", result2);

}