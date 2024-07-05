/*
 * 3_3.c
 * 
 * Ввести три числа и определить, верно ли, что они вводились в порядке возрастания.
 * 
 * Нужно напечатать одно слово YES или NO
 * 
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c;
	printf("Введите три целых числа через пробел\n");
	scanf("%d%d%d", &a,&b,&c);
	printf("%s\n", a < b && b < c ? "YES" : "NO");
	return 0;
}
