// ex7-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int i, sum;
	i = 0;
	sum = 0;
	while (i < 100) {
		printf("%d\n",i);
		i = i + 1; //i++ 랑 같은 기능
		sum = sum + i;
	}
	printf("%d", sum);

	i = 0;
	while (i <= 50)
	{
		printf("-");
		i++;
	}
	i = 100;
	while (i >= 0) {
		printf("%d\n", i);
		i -= 10; //i값을 10씩 빼주는 값
	}
	i = 0;
	while (i <= 100) {
		if ((i % 2) == 0) {
			printf("짝수 : %d \n", i);
		}
		else {
			printf("홀수 : %d \n", i);
		}
		i++;
	}
    return 0;
}

