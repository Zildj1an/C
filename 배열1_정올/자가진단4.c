#pragma warning(disable:4996)
#include <stdio.h>

//100 ���� ������ ������ �� �ִ� �迭�� �����ϰ� ������ ���ʷ� �Է¹޴ٰ� 
//0 �� �ԷµǸ� 0 �� �����ϰ� �� ������ �Էµ� ������ ���� ���߿� �Էµ� 
//�������� ���ʴ�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
int main()
{
	int arr[100];
	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == 0)
		{
			for (int j = i - 1; j >= 0; j--)
				printf("%d ", arr[j]);
			break;
		}
	}
	return 0;
}