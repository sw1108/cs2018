// ex6-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a, b;
	char _op;
	int nSolve;

	scanf_s("%d %d\n", &a,&b);
	scanf_s("%c", &_op, sizeof(_op));

	switch (_op) {
	case '+' : 
		nSolve = a + b;
		break;
	case '-' :
		nSolve = a - b;
		break;
	case '*' :
		nSolve = a * b;
		break;
	case '/' :
		nSolve = a / b;
		break;
	case '%' :
		nSolve = a % b;
		printf("나머지입니다.");
		break;
	default :
		printf("잘못입력하셧습니다.");
		break;
	}

	printf("%d %c %d = %d \n", a, _op, b, nSolve);
    return 0;
}

