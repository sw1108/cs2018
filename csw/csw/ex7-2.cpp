// ex7-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int i, sum;
	i = 0;
	sum = 0;

	while (i <= 100) {
		if ((i % 3) == 0) {
			sum = sum + i;
		}

		i++;
	}
	printf("%d\n", sum);
    return 0;
}

