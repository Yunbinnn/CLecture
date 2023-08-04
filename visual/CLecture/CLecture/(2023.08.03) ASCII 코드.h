#pragma once

#include <stdio.h>
#include <limits.h>

#pragma region 열거형
// 명명된 정수형 상수의 집합입니다.

enum State
{
	IDLE,
	ATTACK,
	DIE,

	// enum에 설정된 값을 변경할 수 있으며, 중간에 값을
	// 변경했을 때 그 다음으로 설정된 값은 변경한 이후의
	// 값의 +1만큼 더하여 저장됩니다.
};

#pragma endregion

int main()
{
#pragma region 열거형

	// enum State stat;

	/*
	stat = IDLE;
	printf("State의 IDLE 값 : %d\n", stat);

	stat = ATTACK;
	printf("State의 ATTACK 값 : %d\n", stat);

	stat = DIE;
	printf("State의 DIE 값 : %d\n", stat);
	*/

	/*
	scanf_s("%d", &stat);

	switch (stat)
	{
	case IDLE:printf("대기 중 . . .\n");
		break;
	case ATTACK:printf("공격 중 . . .\n");
		break;
	case DIE: printf("사망 . . .\n");
		break;
	default:
		break;
	}
	*/

#pragma endregion

#pragma region 별

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

#pragma region 1~10 까지의 합

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

	// printf("1에서 10까지의 합 : %d\n", sum);

#pragma endregion

#pragma region ASCII 코드
	// 1936년 미국 ANSI에서 표준화한 정보교환용 7비트 부호체계이다.
	// 128개의 숫자, 문자, 특수문자, 제어문자가 표현됩니다.

	// char alphabet = '김';
	//  
	// printf("alphabet 변수의 ASCII 코드의 값 : %c\n", alphabet);
	// printf("alphabet 변수의 값 : %d\n", alphabet);

	// A to Z
	//  for (int i = 0; i < 26; i++)
	//  {
	//  	printf("%c ", 'A' + i);
	//  }

#pragma endregion

#pragma region 최솟값과 최댓값

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

	printf("value 배열의 최솟값 : %d\n", min);
	printf("value 배열의 최댓값 : %d\n", max);
	*/
#pragma endregion

	return 0;
}