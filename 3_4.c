/*
 * 3_4.c
 * 
 * Ввести номер месяца и вывести название времени года
 * 
 * Нужно напечатать время года на английском языке
 * 
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
	printf("Введите номер месяца:\n");
	scanf("%d", &a);
	if (a < 3 || a == 12)
		printf("winter\n");
	else if (a < 6)
		printf("spring\n");
	else if (a < 9)
		printf("summer\n");
	else 
		printf("autumn\n");
	return 0;
}
