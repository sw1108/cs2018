// powerex-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
/*

helloworld123456hi
*/

int main()
{
	char word[32];
	scanf_s("%s", word, sizeof(word)); //&표시를 넣을려면 &word[]해야한다, 문자열을 스캔f쓸려면 아무것도 안붙인다.
	printf_s("입력한 문자열은 : %s \n", word);
	
	int nSize = sizeof(word) / sizeof(word[0]);
	for (int i = 0; i < nSize; i++) {
		if (word[i] == '\x00') break;//널문자를 만나면 for문 종료
		if ((word[i] >= 65 && word[i] <= 90) || (word[i] >= 97 && word[i] <= 122)) {
			word[i] = 42;
		}

	}
	printf_s("변경한 문자열은 : %s \n", word);

    return 0;
}

