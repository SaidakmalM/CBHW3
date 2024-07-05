/*
 * 3_2.c
 * 
 * Ввести пять чисел и вывести наименьшее из них
 * 
 * Нужно напечатать наибольшее число
 * 
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c,d,e;
	printf("Введите пять целых чисел через пробел\n");
	scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
	int min = a < b ? a : b;
	min = min < c ? min : c;
	min = min < d ? min : d;
	min = min < e ? min : e;
	printf("%d\n",min);
	return 0;
}
