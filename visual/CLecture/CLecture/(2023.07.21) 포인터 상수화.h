#pragma once

#include <stdio.h>

#pragma region ��ũ��
// ���α׷� ������ Ư���� �����Ͱ� ���ڿ���
// ���ǵǰ� ó���Ǵ� �����Դϴ�.

#define Size 5
	// ��ó�����?
	// ���α׷��� �����ϵǱ� ������ ���α׷��� ����
	// ���� ó���ϴ� �����Դϴ�.

#pragma endregion


void main()
{

#pragma region ������ ���ȭ

	float data = 99.865f;
	int* pointer = NULL;

	// ������ ������ ũ��� �߾� ó�� ��ġ�� �� ����
	// ó���� �� �ִ� ũ��� ��������, �� ���� ó���� �� �ִ�
	// ũ��� �ü���� ���� ũ�Ⱑ �����˴ϴ�.
	// printf("pointer ������ ũ�� : %d\n", sizeof(pointer));

	// ������ ������ �����ϱ� ���� �ּ� ���� ���� ��
	// ������ �ڷ����� ������ ������ �ڷ����� ��ġ�ؾ� �մϴ�.
	// pointer = &data; // ERROR

	// ��� ���� ������
	/*
	int hp = 100;
	int mp = 50;

	const int* cPtr = &hp;

	printf("cPtr�� ����Ű�� �� : %d\n", *cPtr);

	// ������ ������ ����� �����Ͽ�, ������ ������ ����Ű��
	// �ִ� �ּҿ� �����ϴ� ���� ������ �� �����ϴ�.
	// *cPtr = 999; (ERROR)

	cPtr = &mp;

	// �����ͷ� �����Ǿ� �ִ� ������ ���ȭ�� ����
	// ������ ���� �ʽ��ϴ�.
	mp = 999;

	printf("cPtr�� ����Ű�� �� : %d\n", *cPtr);
	*/

	// ������ ���
	/*
	float decimal1 = 5.75f;  // (4 byte)
	float decimal2 = 3.99f; // (4 byte)
	float * const floatPtr = &decimal1; //(8 byte) �ʱ�ȭ �ʼ�

	// ������ ����� ������ ������ ���ȭ�Ǿ� ���ο�
	// �ּҰ��� ������ �� �����ϴ�.
	// floatPtr = &decimal2 ERROR

	*floatPtr = 16.825f;

	printf("floatPtr�� ����Ű�� �� : %f\n", *floatPtr);
	printf("decimal1�� �� : %f\n", decimal1);

	// *ptr = 6.4168f
	*/

	// Memo
	/* ��� ���� �����ʹ� �ּҸ� �����Ӱ� �ٲ� �� �ְ�
	// �������� ���� ���� ��ȯ �� �� ������,
	// ������ ����� �ݴ�� �ּ� ��ȯ�� �Ұ����ϰ�,
	�������� ���� ���� ��ȯ�� �� �ֽ��ϴ�. */

#pragma endregion

#pragma region ��ũ��

	// ��ũ���� ��� �ڷ����� �������� �����Ƿ�
	// �޸� ������ ������ ���� �ʽ��ϴ�.

	for (int i = 0; i < Size; i++)
	{
		printf("ä�� ��...\n");
	}

	for (int i = 0; i < Size; i++)
	{
		printf("���� ��...\n");
	}

	for (int i = 0; i < Size; i++)
	{
		printf("��� ��...\n");
	}

#pragma endregion

}