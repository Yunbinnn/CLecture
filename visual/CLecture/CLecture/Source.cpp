#include <stdio.h>

#pragma region ��� �Լ�
// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ�
// �۾��� �����ϴ� �Լ��Դϴ�.

void Function()
{
	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������
	// ���� ������ �޸𸮰� ��� ���̰� �ǹǷ�
	// ���� �����÷ο찡 �߻��մϴ�.
	printf("�Լ�ȣ��\n");
	Function();
}

#pragma endregion

void CountDown(int count)
{
	// ��� �ڵ�
	if (count <= 0)
		return;

	printf("count�� �� : %d\n", count);

	CountDown(count - 1);
}

// ���丮��
int Factorial(int a)
{
	if (a <= 0)
		return 0;

	int facValue = 1;
	
	for (int i = 1; i <= a; i++)
	{
		facValue *= i;
	}

	return facValue;
}

int NewFac(int count)
{
	if (count <= 1)
	{
		return 1;
	}
	else
	{
		return count * Factorial(count - 1);
	}
}

// !5(120) !4(24) !3(6)
// 3! = 1 * 2 * 3
// 4! = 1 * 2 * 3 * 4 

int main()
{
	// CountDown(3);

	int data = 10;
	
	int* ptr = &data;

	// �� ����� ���
	// ��Ʈ��ũ <- ����

	// ��Ʋ ����� ���
	// ���� �ּҿ� �������� ���� ����Ʈ
	// (LSB)���� �����ϴ� ����Դϴ�.

	// ���α׷��� ���������� ����Ǿ��� ��
	// 0�̶�� ���� ��ȯ�մϴ�.
	return 0;
}