/*
 * 3_4.c
 * 
 * ����� ����� ����� � �뢥�� �������� �६��� ����
 * 
 * �㦭� �������� �६� ���� �� ������᪮� �몥
 * 
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
	printf("������ ����� �����:\n");
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
