// ex9-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int ary[] = { 1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,7 };
	int cun=0;
	int temp;
	int size = sizeof(ary) / sizeof(ary[0]);
	
	printf("찾기를 원하는 숫자를 입력하세요(1~20) :");
	scanf_s("%d", &temp);
	
	
	for (int i = 0; i < size; i++) {
		if (ary[i] == temp) {//논리 계산으로 해야 참 것짓 판명
			cun++;
			
		}
	}
	
	printf("개수:%d", cun);
    return 0;
}

