// ex6-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int age; //자동완성 기능은 ctrl 스페이스
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age); 
	if (age >= 70 || age <= 6) {
		printf("무료입장입니다.");
	}
	else {
		printf("입장료는 3000원입니다.");
	}
	
	
	
    return 0;
}

