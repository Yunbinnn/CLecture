#pragma once

#include <stdio.h>

// �ڷ��� �Լ��� �̸� (�Ű� ����)
void Function()
{
	// ���� �̸��� �Լ��� ������ �� �����ϴ�.
	printf("Function\n");
}

// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°�
// ��ġ���� ������ ���ϴ� ���� ���� �� �����ϴ�.
char CharFunction()
{
	return 'A';
}

#pragma region �Ű� ����
// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η�
// �����ϱ� ���� ����ϴ� �����Դϴ�.

void Calculator(int x)
{
	x = 450;

	printf("x�� �� : %d\n", x);
}

// ������ ���� ȣ��
void Swap(int* x, int* y)
{
	int temp = 0;

	temp = *x;
	*x = *y;
	*y = temp;

}

// �Ű� ������ �Լ� ���ο����� ������ �̷������,
// �Լ��� ����Ǹ� �޸𸮿��� �������, ��������
// �Ű� ������ ������ �� �ֽ��ϴ�.

#pragma endregion

void main()
{

#pragma region ����(void) ������
	// �ڷ����� �������� ���� ���·� ���
	// �ڷ����� ������ �� �ִ� �������Դϴ�.

	// int (4 byte)
	// int data = 100;

	// float (4 byte)
	// float pi = 3.141592f;

	// void* ptr = &data;

	// ���� �����ʹ� �޸� �ּҿ� �����ؼ�
	// ���� ������ �� �����ϴ�.
	// *ptr = 10; ERROR

	// *(int*)ptr = 9999;

	// printf("ptr�� ����Ű�� �� : %d\n\n", *(int*)ptr);
	// printf("data�� �� : %d\n\n\n", data);

	// ptr = &pi;

	// printf("ptr�� ����Ű�� �� : %f\n\n", *(float*)ptr);
	// printf("pi�� �� : %f\n", pi);

#pragma endregion

#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� ����ȭ��
	// ���� ���������� ����� �ڵ��� �����Դϴ�.

	// �Լ��� ȣ��
	// for (int i = 0; i < 5; i++)
	// 	Function();

	// printf("%c\n", CharFunction());

#pragma endregion

#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű� ������ ������
	// ���޵Ǵ� ���Դϴ�.

	// int value = 100;
	// Calculator(value);
	// printf("value�� �� : %d\n", value);

	// �� �ٲٱ�
	int a = 10;
	int b = 20;

	// int temp = 0;

	// temp = a;
	// a = b;
	// b = temp;

	Swap(&a, &b);

	printf("a�� �� : %d, b�� �� : %d\n", a, b);

#pragma endregion

}