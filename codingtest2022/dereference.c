#include <stdio.h>

int main()
{
	int data = 100;
	char ch = 'A';
	int* ptrint = &data;
	char* ptrchar = &ch;
	printf("���� ���� ��� : %d %c\n", *ptrint, *ptrchar);

	*ptrint = 200; //data�� *ptrint�� ���� �����Ͽ� ���� ����
	*ptrchar = 'B'; //ch�� *ptrchar�� ���� �����Ͽ� ���� ����
	printf("���� ���� ��� : %d %c\n", data, ch);

	return 0;
}