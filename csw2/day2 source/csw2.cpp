// csw2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int ages[5];
	int tot=0;
	double avg;
	int i = 0;
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &ages[i]);
		tot = tot + ages[i];
	}
	avg = (double)tot / i;
	printf("다섯 명의 평균 나이는 %.1lf입니다.\n", avg);

    return 0;
}

