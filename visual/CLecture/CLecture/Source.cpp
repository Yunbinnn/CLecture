#include <stdio.h>

void main()
{

#pragma region �迭
	// ���� �ڷ����� ������� �̷���� ���� �����Դϴ�.

	int buffer[5] = { 0, };

	// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	// �迭�� ũ��� �������� �Ǵ� �������� 
	// ������ �޸� ������ ������ �˴ϴ�.
	// buffer[0] = 100;

	// buffer[2] = 400;

	// �迭�� ��� ù ��° ���Ҵ� 0���� �����մϴ�.

	// printf("%d\n\n", *(buffer + 1));

	// printf("%d\n\n", *(buffer + 2));

	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("buffer�� %d�� ° index�� : %d\n", i, buffer[i]);
	// }

	// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ��� ������
	// ��ҿ� ���� �迭�� ũ�Ⱑ �����˴ϴ�.
	float dataList[] = { 1.11f, 2.22f, 3.33f };

	// �迭�� �������� �޸� ������ ������, �迭�� �̸���
	// �迭�� ���� �ּҸ� ����ŵ�ϴ�.
	// printf("\ndataList�� �ּ� : %p\n", dataList);
	// printf("dataList�� �ּ� : %p\n", &dataList[0]);

	// ������ ����
	// float* floatPtr = dataList;
	// 
	// printf("floatPtr�� ����Ű�� �ּ� : %p\n", floatPtr);
	// printf("floatPtr�� ����Ű�� �� : %f\n\n", *(floatPtr + 0));
	// 
	// floatPtr += 1;
	// 
	// printf("floatPtr�� ����Ű�� �ּ� : %p\n", floatPtr);
	// printf("floatPtr�� ����Ű�� �� : %f\n", *(floatPtr));

	// �迭�� ũ�⸦ ����� �����͸� ������ �� �����ϴ�.
	// ex) dataList[4] = 36.1f; ERROR

#pragma endregion

#pragma region ���ڿ�
	// �������� �޸� ������ ����� 
	// ���� ������ �����Դϴ�.

	// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� �����
	// ����Ű���� �� �� ������, ���ڿ� ����� ������
	// ������ �б� ���� ������ �Ҵ�Ǳ� ������ ���ڿ���
	// ���� ������ �� �����ϴ�.

	const char* character = "Demian";

	// ���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ� ũ�Ⱑ
	// �����Ǹ�, �������� ���ڿ��� ���� �˷��ִ� ���� ���ڰ� �߰��˴ϴ�.
	character = "Kazuya Mishima";

	// ���ڿ��� ��� ���� �迭 ���̿� ��ȿ�� ���ڸ� �ְ� �ǹ�
	// ��ȿ�� ���ڱ����� ���ڿ��� ����մϴ�.

	printf("character�� ��: %s\n", character);
	printf("character�� ��: %c\n", *(character + 1));


#pragma endregion



}