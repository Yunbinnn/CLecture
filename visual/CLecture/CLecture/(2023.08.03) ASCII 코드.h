#pragma once

#include <stdio.h>
#include <limits.h>

#pragma region ������
// ���� ������ ����� �����Դϴ�.

enum State
{
	IDLE,
	ATTACK,
	DIE,

	// enum�� ������ ���� ������ �� ������, �߰��� ����
	// �������� �� �� �������� ������ ���� ������ ������
	// ���� +1��ŭ ���Ͽ� ����˴ϴ�.
};

#pragma endregion

int main()
{
#pragma region ������

	// enum State stat;

	/*
	stat = IDLE;
	printf("State�� IDLE �� : %d\n", stat);

	stat = ATTACK;
	printf("State�� ATTACK �� : %d\n", stat);

	stat = DIE;
	printf("State�� DIE �� : %d\n", stat);
	*/

	/*
	scanf_s("%d", &stat);

	switch (stat)
	{
	case IDLE:printf("��� �� . . .\n");
		break;
	case ATTACK:printf("���� �� . . .\n");
		break;
	case DIE: printf("��� . . .\n");
		break;
	default:
		break;
	}
	*/

#pragma endregion

#pragma region ��

	// int i, j;

	/*
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i < j)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	*/

#pragma endregion

#pragma region 1~10 ������ ��

	// int i = 0, j = 0, sum = 0;

	/*
	for (i = 1; i <= 10; i++)
	{
		sum += i;
	}
	*/

	/*
	while (i <= 10)
	{
		sum += i;
		i += 1;
	}
	*/

	// printf("1���� 10������ �� : %d\n", sum);

#pragma endregion

#pragma region ASCII �ڵ�
	// 1936�� �̱� ANSI���� ǥ��ȭ�� ������ȯ�� 7��Ʈ ��ȣü���̴�.
	// 128���� ����, ����, Ư������, ����ڰ� ǥ���˴ϴ�.

	// char alphabet = '��';
	//  
	// printf("alphabet ������ ASCII �ڵ��� �� : %c\n", alphabet);
	// printf("alphabet ������ �� : %d\n", alphabet);

	// A to Z
	//  for (int i = 0; i < 26; i++)
	//  {
	//  	printf("%c ", 'A' + i);
	//  }

#pragma endregion

#pragma region �ּڰ��� �ִ�

	// [10] [5] [11] [1] [3]

	/*
	int value[5] = { 17,58,10,4,21 };

	int max = 0;
	int min = INT_MAX;

	for (int i = 0; i < 5; i++)
	{
		if (value[i] > max)
			max = value[i];

		if (value[i] < min)
			min = value[i];
	}

	printf("value �迭�� �ּڰ� : %d\n", min);
	printf("value �迭�� �ִ� : %d\n", max);
	*/
#pragma endregion

	return 0;
}