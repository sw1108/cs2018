// jica0628b.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int nums[] = { 1,2,3 };
	//sizeof는 인트의 바이트값을 반환한다 별표!
	int int_size = sizeof(int);
	int array_size = sizeof(nums) / sizeof(nums[0]);
    return 0;
}

