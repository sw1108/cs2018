// jica0628.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num[] = { 7,2,3,4,5 };
	int nGnum;
	nGnum = num[0];
	
	
	for (int i = 0; i < 5; i++) {
		if (nGnum > num[i]) {
			nGnum = num[i];

		}
	}
	printf("가장 나이 작은 사람은 %d 입니다.", nGnum);
    return 0;
}

