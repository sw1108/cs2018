// jica3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	printf("%d \n", 10 > 20);
	printf("%d \n", 10 < 20);


	int a;
	scanf_s("%d", &a);
	if (a < 0) {
		a = a * -1;
	}
	printf("절대값은 = %d\n", a);
    return 0;
}

