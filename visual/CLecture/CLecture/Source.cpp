#include <stdio.h>

void main()
{

#pragma region 자료형 변환

	// 서로 다른 자료형을 가지고 있는 변수끼리
	// 연산이 이루어질 때 지정했던 자료형을
	// 다른 자료형으로 변환하는 과정입니다.

	// 암묵적 형 변환	
	/*
	// 서로다른 자료형으로 연산이 이루어질 때
	// 자료형의 크기가 큰 자료형으로 변환되는 과정입니다.

	int integer = 10;
	float decimal = 6.5f;

	// sizeof() : 자료형의 크기를 반환하는 연산자입니다.

	// printf("int의 자료형 크기 = %d\n", sizeof(integer));
	// printf("float의 자료형 크기 = %d\n", sizeof(decimal));
	//
	// printf("integer + decimal = %f\n", integer + decimal);

	// int	  float
	// [  ] = 7.756f;
	integer = 7.756f;

	// 표현범위가 작은 데이터에 표현범위가 큰 데이터를
	// 저장하게 되면 암묵적으로 데이터 손실이 발생합니다.
	printf("integer 변수의 값 : %d\n", integer);

	// 정수형에서 실수형으로 암묵적 자료형 변환은
	// 가능하지만, 실수형에서 정수형으로 암묵적
	// 자료형 변환은 되지 않습니다.
	*/

	// 명시적 형 변환
	/*
	// 연산이 이루어지기 전에 사용자가 직접
	// 자료형을 변환하는 과정입니다.

	int x = 10;
	int y = 3;

	// 정수형 변수끼리 연산을 수행하게 되면
	// 정수의 결과 값만 가질 수 있습니다.

	float result = x / (float)y;

	printf("result의 값 : %f\n", result);
	*/
#pragma endregion

#pragma region continue문

	// 해당 조건문만 실행하지 않고, 
	// 반복문은 이어서 실행하는 제어문입니다.

	// for (int i = 1; i <= 5; i++)
	// {
	//	  if (i == 3)
	//    continue;
	//  
	//    printf("i의 값 : %d\n", i);
	// }



#pragma endregion

#pragma region 시프트 연산자

	// 비트 값을 주어진 숫자만큼 부호 방향으로
	// 이동시키는 연산자입니다.

	// int a = 3;
	// 
	// printf("a를 왼쪽 2번 시프트 연산한 결과 : %d\n", a <<= 2); // 0000 1100
	// 
	// printf("a의 값 : %d\n", a); // 0000 0011
	// 
	// printf("a를 오른쪽 3번 시프트 연산한 결과 : %d\n", a >> 3); // 0000 0001


#pragma endregion

}