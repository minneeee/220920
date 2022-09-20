/**
	@file	220920.c
	@breif �ĺ���, scanf, getchar, ASCII, �����, ���(constant), boundry test
	@author Kyungmin Kim (kuburoo2@naver.com)
	@date	2022-09-20
*/

// �ĺ���(�����̸�, �Լ��̸�, ...)
// - ���� �빮��, �ҹ���, ����(���� ���ڸ��� ����), _
// - Ű���� ����(�� : main, if, else, printf, ...)
// - �� : �ִ��� �ڼ��ϰ�, ���� + ��� + �λ� ��
// - ���� �� : calAvgFast, cal_avg_fast
// - ���� �� : a1, a2, ...

// ǥ�� ����� �Լ� : printf, putchar, puts, getchar, scanf, gets, ...
// stdio.h

// �ڽ��� ���̸� �Է��ϰ� ����ϴ� ���α׷�
// ���� ���� �ÿ��� �ݵ�� �ʱ�ȭ!
// scanf �� printf�� ������ ����
// c.f. �μ��� �ּҷ� ���, �ּ� ������(&, ampersand)

// ASCII (American Standard Code for information Interchange)
// ���ڸ� ���ڷ� ��Ī

// �����, Ư������, �̽�������(escape) ����, Ȯ�幮��
// e.g. \b, \n, \t, \r, \a, \", \', \\

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	// printf, scanf


int main(void)
{
	unsigned int age = 0, height = 0; // ���� ���� �� �ʱ�ȭ
	int ret = 0;	// ��ȯ��
	char c = 0;
	puts("Hello, World!\n");
	c = getchar();
	//scanf("%c", &c);
	putchar(c);
	printf("%c\n", '\a');	// '����', "���ڿ�"
	ret = scanf("%d %d", &age, &height);	// ���� �Է�
	printf("age : %d\nheight : %d\n", age, height);	// ���� ���
	return 0;
}*/

// ���(constant)�� ����(variables)
// ����� ���� �ĺ��ڴ� ���� �빮�ڷ� ǥ��
// 1. ���ͷ�(literal) ��� e.g. 'c', 34, 3.14, default �ڷ���(int, double)
// 2. ��ȣ(symblic) ���
// - ��ũ��(mecro) ��� : #define PI 3.141592
// const int A = 3; // ������ ���� �ĺ��� ����
// enum(����ü)


// ���̻� : u, ul, ull, l, ll, f, l
// �� : 11.2f, 245u, 3.14l
// �� : c = PI * 11.2f * 11.2f

// �� : �ڷ��� ��ġ

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

// boundrt test(������ ���� �ܰ迡�� ���� ����)
// SRS -> ����(�⺻, ��) -> ���� -> ����(������, QA) -> ���� -> ��������
// int�� ���� ���� -> -2^31 ~ (2^31)-1 -> -2^3, (2^31)-1, 0
// ����� ���� in limits.h, float.h
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