/*
 * 3_1.c
 * 
 * Ввести пять целых чисел и вывести наибольшее из них
 * 
 * Необходимо напечатать наибольшее число
 * 
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c,d,e;
	printf("Введите пять целых чисел через пробел\n");
	scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
	int max = a > b ? a : b;
	max = max > c ? max : c;
	max = max > d ? max : d;
	max = max > e ? max : e;
	printf("%d\n",max);
	return 0;
}
