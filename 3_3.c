/*
 * 3_3.c
 * 
 * ����� �� �᫠ � ��।�����, ��୮ ��, �� ��� ��������� � ���浪� �����⠭��.
 * 
 * �㦭� �������� ���� ᫮�� YES ��� NO
 * 
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c;
	printf("������ �� 楫�� �᫠ �१ �஡��\n");
	scanf("%d%d%d", &a,&b,&c);
	printf("%s\n", a < b && b < c ? "YES" : "NO");
	return 0;
}
