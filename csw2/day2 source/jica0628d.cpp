// jica0628d.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char word[32];
	int num=0;
	int nSize = sizeof(word) / sizeof(word[0]);
	int cunt = 0;
	scanf_s("%s", word, sizeof(word)); //&표시를 넣을려면 &word[]해야한다, 문자열을 스캔f쓸려면 아무것도 안붙인다.
	printf_s("입력한 문자열은 : %s \n", word);
	
	for (int i = 0; i < nSize; i++) {
			if (word[i] == 0x00) {// '\x00' 이나 null 이나 0x00 다 같음
			break;
		}
		if ((word[i] >= 65 && word[i] <= 90) || (word[i] >= 97 && word[i] <= 122)){//영어 아스키 코드표 값
			cunt++;

		}
		num++;
	}
	printf("%s 단어의 길이는 %d 이다\n", word, num);
	printf("%s 단어의 길이는 %d 이다\n", word, cunt);
    return 0;
}

