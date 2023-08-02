#pragma once

#include <stdio.h>
#include <math.h>

#pragma region 구조체
// 여러 개의 변수를 하나의 집합으로 구조화한
// 다음 하나의 객체를 생성하는 것 입니다.

//	struct GameObject
//	{
//		int health;	  // 4
//		char grade;	  // 1
//		double pos_x; // 8
//	
//		// 구조체를 선언하기 전에 구조체는 
//		// 메모리 공간이 생성되지 않으므로, 구조체 
//		// 내부에 있는 데이터를 초기화할 수 없습니다.
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
#pragma region 구조체 선언

	// struct GameObject object;
	// 
	// object.health = 100;
	// object.pos_x = 3.45f;
	// 
	// printf("object.health의 값 : %d\n", object.health);
	// printf("object.pos_x의 값 : %lf\n\n", object.pos_x);
	// 
	// struct GameObject obj = { 300,6.25f };
	// 
	// printf("obj.health의 값 : %d\n", obj.health);
	// printf("obj.pos_x의 값 : %lf\n", obj.pos_x);
#pragma endregion

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한번에 
	// 읽을 수 있도록, 컴파일러가 레지스터 블록에 맞추어 
	// 바이트를 패딩해주는 최적화 작업입니다.

	// printf("GameObject의 크기 : %u\n", (int)sizeof(struct GameObject));

	// 구조체의 크기는 구조체를 구성하는 멤버 중에 크기가
	// 가장 큰 자료형의 배수가 되도록 정렬합니다.

#pragma endregion

#pragma region 제곱근 함수

	// int result = pow(5, 3);
	// float decimal = 100.0f;
	// 
	// // sqrt : 반환하는 값으로 long, double, float
	// decimal = sqrt(decimal);
	// 
	// printf("result 변수의 결과 : %d\n", result);
	// printf("decimal 변수의 결과 : %f\n", decimal);

#pragma endregion

#pragma region 두 점 사이의 거리

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
	// printf("Player와 Enemy사이의 거리 : %lf\n", result);

#pragma endregion

	return 0;
}