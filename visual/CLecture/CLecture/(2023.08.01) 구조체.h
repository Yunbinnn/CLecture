#pragma once

#include <stdio.h>
#include <math.h>

#pragma region ����ü
// ���� ���� ������ �ϳ��� �������� ����ȭ��
// ���� �ϳ��� ��ü�� �����ϴ� �� �Դϴ�.

//	struct GameObject
//	{
//		int health;	  // 4
//		char grade;	  // 1
//		double pos_x; // 8
//	
//		// ����ü�� �����ϱ� ���� ����ü�� 
//		// �޸� ������ �������� �����Ƿ�, ����ü 
//		// ���ο� �ִ� �����͸� �ʱ�ȭ�� �� �����ϴ�.
//	};
#pragma endregion

//	struct Player
//	{
//		float x;
//		float y;
//	};
//	
//	struct Enemy
//	{
//		float x;
//		float y;
//	};


int main()
{
#pragma region ����ü ����

	// struct GameObject object;
	// 
	// object.health = 100;
	// object.pos_x = 3.45f;
	// 
	// printf("object.health�� �� : %d\n", object.health);
	// printf("object.pos_x�� �� : %lf\n\n", object.pos_x);
	// 
	// struct GameObject obj = { 300,6.25f };
	// 
	// printf("obj.health�� �� : %d\n", obj.health);
	// printf("obj.pos_x�� �� : %lf\n", obj.pos_x);
#pragma endregion

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �ѹ��� 
	// ���� �� �ֵ���, �����Ϸ��� �������� ��Ͽ� ���߾� 
	// ����Ʈ�� �е����ִ� ����ȭ �۾��Դϴ�.

	// printf("GameObject�� ũ�� : %u\n", (int)sizeof(struct GameObject));

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿� ũ�Ⱑ
	// ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.

#pragma endregion

#pragma region ������ �Լ�

	// int result = pow(5, 3);
	// float decimal = 100.0f;
	// 
	// // sqrt : ��ȯ�ϴ� ������ long, double, float
	// decimal = sqrt(decimal);
	// 
	// printf("result ������ ��� : %d\n", result);
	// printf("decimal ������ ��� : %f\n", decimal);

#pragma endregion

#pragma region �� �� ������ �Ÿ�

	// struct Player player;
	// struct Enemy enemy;
	// 
	// player.x = pow(3, 2); // 9
	// player.y = pow(4, 2); // 16
	// 
	// enemy.x = pow(5, 2);  // 25
	// enemy.y = pow(2, 2);  // 4
	// 
	// float pos_x = enemy.x - player.x;
	// float pos_y = enemy.y - player.y;
	// 
	// double result = sqrt(pow(pos_x, 2) + pow(pos_y, 2));
	// 
	// printf("Player�� Enemy������ �Ÿ� : %lf\n", result);

#pragma endregion

	return 0;
}