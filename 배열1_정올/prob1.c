#include <stdio.h>

int main()
{
	//���� 10���� ������ �� �ִ� �迭�� ����� 
	//10���� ���ڸ� �Է¹޾� �Է¹��� ���ڸ� 
	//�̾ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	char a[10];
	
	for (int i = 0; i < 10; i++)
		scanf(" %c", &a[i]);
	
	for (int i = 0; i < 10; i++)
		printf("%c", a[i]);
	return 0;
}