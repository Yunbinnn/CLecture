#include <stdio.h>

#pragma region 재귀 함수
// 어떤 함수에서 자신을 다시 호출하여
// 작업을 수행하는 함수입니다.

void Function()
{
	// 재귀 함수는 함수를 계속 호출하기 때문에
	// 스택 영역에 메모리가 계속 쌓이게 되므로
	// 스택 오버플로우가 발생합니다.
	printf("함수호출\n");
	Function();
}

#pragma endregion

void CountDown(int count)
{
	// 방어 코드
	if (count <= 0)
		return;

	printf("count의 값 : %d\n", count);

	CountDown(count - 1);
}

// 팩토리얼
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

	// 빅 엔디안 방식
	// 네트워크 <- 통일

	// 리틀 엔디안 방식
	// 낮은 주소에 데이터의 낮은 바이트
	// (LSB)부터 저장하는 방법입니다.

	// 프로그램이 정상적으로 종료되었을 때
	// 0이라는 값을 반환합니다.
	return 0;
}