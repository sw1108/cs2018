// jica1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int nKor, nEng, nMath, sum;
	printf("국어 영어 수학 점수를 차례로 입력하세요(빈칸으로 구분^^) : ");
	scanf_s("%d %d %d", &nKor, &nEng, &nMath);
	sum = nKor + nEng + nMath;
	//연산부분
	char name[80] = "홍길동";


	//출력부분
	printf("|----------|--------|--------|--------|--------|----------|\n");
	printf("|   이름   |  국어  |  영어  |  수학  |  총점  |   평균   |\n");
	printf("|%-10s|%8d|%8d|%8d|%8d|%10.21f|\n", name, nKor, nEng, nMath, sum, (double)sum / 3);
    return 0;
}

