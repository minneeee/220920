/**
	@file	220920.c
	@breif 식별자, scanf, getchar, ASCII, 제어문자, 상수(constant), boundry test
	@author Kyungmin Kim (kuburoo2@naver.com)
	@date	2022-09-20
*/

// 식별자(변수이름, 함수이름, ...)
// - 영어 대문자, 소문자, 숫자(가장 앞자리는 제외), _
// - 키워드 제외(예 : main, if, else, printf, ...)
// - 팁 : 최대한 자세하게, 동사 + 명사 + 부사 순
// - 좋은 예 : calAvgFast, cal_avg_fast
// - 나쁜 예 : a1, a2, ...

// 표준 입출력 함수 : printf, putchar, puts, getchar, scanf, gets, ...
// stdio.h

// 자신의 나이를 입력하고 출력하는 프로그램
// 변수 선언 시에는 반드시 초기화!
// scanf 는 printf와 문법이 유사
// c.f. 인수를 주소로 사용, 주소 연산자(&, ampersand)

// ASCII (American Standard Code for information Interchange)
// 문자를 숫자로 매칭

// 제어문자, 특수문자, 이스케이프(escape) 문자, 확장문자
// e.g. \b, \n, \t, \r, \a, \", \', \\

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	// printf, scanf


int main(void)
{
	unsigned int age = 0, height = 0; // 변수 선언 및 초기화
	int ret = 0;	// 반환값
	char c = 0;
	puts("Hello, World!\n");
	c = getchar();
	//scanf("%c", &c);
	putchar(c);
	printf("%c\n", '\a');	// '문자', "문자열"
	ret = scanf("%d %d", &age, &height);	// 나이 입력
	printf("age : %d\nheight : %d\n", age, height);	// 나이 출력
	return 0;
}*/

// 상수(constant)와 변수(variables)
// 상수를 위한 식별자는 보통 대문자로 표기
// 1. 리터럴(literal) 상수 e.g. 'c', 34, 3.14, default 자료형(int, double)
// 2. 기호(symblic) 상수
// - 매크로(mecro) 상수 : #define PI 3.141592
// const int A = 3; // 문법적 오류 식별이 가능
// enum(구조체)


// 접미사 : u, ul, ull, l, ll, f, l
// 예 : 11.2f, 245u, 3.14l
// 예 : c = PI * 11.2f * 11.2f

// 팁 : 자료형 대치

/*#define u08 (unsigned char)
#define u16 (signed short)
typedef unsigned int u32;
int main(void)
{
	unsigned char c = 0;
	u08 c = 0;
	u32 l = 0;
	return 0;
}*/

// boundrt test(개발자 검증 단계에서 보통 수행)
// SRS -> 설계(기본, 상세) -> 구현 -> 검증(개발자, QA) -> 배포 -> 유지보수
// int형 변수 선언 -> -2^31 ~ (2^31)-1 -> -2^3, (2^31)-1, 0
// 경게점 정의 in limits.h, float.h
/*#include <limits.h>
#include <float.h>
#include <stdio.h>

int main(void)
{
	printf("INT_MIN : %d, INT_MAW : %d", INT_MIN, INT_MAX);
	printf("DOUBLE_MIN : %d, DOUBLE_MAW : %d", DBL_MIN, DBL_MAX);
	double f = 1.e10;
	f = f + 5.0;
	printf("f=%lf\n", f);
	printf("f=%p\n", f);
	return 0;
}*/

#include <stdio.h>
int main(void)
{
	const int A = 3;
	printf("%d\n", A);
	return 0;
}