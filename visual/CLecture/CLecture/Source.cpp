#include <stdio.h>

int main()
{
#pragma region ���� ������

	/*
	 int data = 100;
	 int* ptr1 = &data;   // 8 byte, 1���� ex) 00AABB00 ~ 07
	 int** ptr2 = &ptr1;  // 8 byte, 2����

	 **ptr2 = 999;

	 printf("data�� �� : %d\n", data);
	 printf("**ptr2�� �� : %d\n", **ptr2);
	*/

	/*
	 int a = 10, b = 20;

	 int* aPtr1 = &a;
	 int* bPtr1 = &b;

	 int** aPtr2 = &aPtr1;
	 int** bPtr2 = &bPtr1;

	 **aPtr2 = 100;
	 **bPtr2 = 200;

	 int* temp = *aPtr2;

	 *aPtr2 = *bPtr2;
	 *bPtr2 = temp;

	 printf("**aPtr2�� ����Ű�� �� : %d\n", **aPtr2);
	 printf("**bPtr2�� ����Ű�� �� : %d\n", **bPtr2);
	*/

#pragma endregion

#pragma region ���

	/*
	int input;
	int count = 0;

	printf("������ �Է��ϼ��� : ");

	scanf_s("%d", &input);

	printf("\n");

	for (int i = 1; i <= input; i++)
	{
		if (input % i == 0)
		{
			printf("%d ", i);
			count++;
		}
	}

	printf("\n\n%d�� ����� ���� : %d��\n", input, count);
	*/
#pragma endregion

	return 0;
}