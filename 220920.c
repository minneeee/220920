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

#define _CRT_SECURE_NO_WARNINGS
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
}
