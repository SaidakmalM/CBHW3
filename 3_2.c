/*
 * 3_2.c
 * 
 * ����� ���� �ᥫ � �뢥�� �������襥 �� ���
 * 
 * �㦭� �������� �������襥 �᫮
 * 
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c,d,e;
	printf("������ ���� 楫�� �ᥫ �१ �஡��\n");
	scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
	int min = a < b ? a : b;
	min = min < c ? min : c;
	min = min < d ? min : d;
	min = min < e ? min : e;
	printf("%d\n",min);
	return 0;
}
