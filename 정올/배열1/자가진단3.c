#pragma warning (disable: 4996)
#include <stdio.h>
//10���� ���ڸ� �Է¹޾Ƽ� ù ��° �� ��° �ϰ� ��° 
//�Է¹��� ���ڸ� ���ʷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main()
{
	char arr[10];
	for (int i = 0; i < 10; i++)
		scanf(" %c", &arr[i]);
	printf("%c %c %c ", arr[0], arr[3], arr[6]);
	return 0;
}