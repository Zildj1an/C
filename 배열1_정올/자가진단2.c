#include <stdio.h>
//���� 10 ���� ������ �� �ִ� �迭�� ���� 
//1 ���� 10 ������ �����ϰ� ���ʴ�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
		arr[i] = i + 1;
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	return 0;
}