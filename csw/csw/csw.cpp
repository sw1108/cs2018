// csw.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	printf("\x41 \n");
	printf("♭♩♪♬◆☆★◐◑○●◎⊙◈◇△▲▽▼□■◁◀▷▶◇◆♤♠♡♥♧♣\n");
	/*특수문자 표현법*/
	printf("부호:%d, 부호없음:%u \n", -1, -1);

	printf("십진수:%d ,팔진수:%o , 16진수:%x \n", 16, 16, 16);
	printf("%x \n", '□');

	printf("pi : %lf ,%le \n", 3.1415926, 3.14159326);
	/*파이 표현*/
	// unsigned int a;
	/*부호를 인정하지 않는 a */
	// unsigned char b;         //0~255
	// char c; //-128~127
	double _val = 0.0000001;

	printf("pi : %lf ,%le \n", _val, _val);
	/*더블함수로 실수 변환하여 나타낼수도 있다.*/

	printf("%c , %s \n", 'H', "Hello");
	
	int a, b;
	printf("두 정수를 입력하세요 : ");
	scanf_s("%d %d", &a, &b);
	printf("나눗셈 연산식은 \" %d / %d = %lf\"입니다", a, b, (double)a / b);
	return 0;

}

