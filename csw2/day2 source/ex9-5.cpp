// ex9-5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char word[32];
	scanf_s("%s", word, sizeof(word)); //&표시를 넣을려면 &word[]해야한다, 문자열을 스캔f쓸려면 아무것도 안붙인다.
	printf_s("입력한 문자열은 : %s \n", word);
	
	int nSize = sizeof(word) / sizeof(word[0]);
	int nLength = 0;

	for (int i = 0; i < nSize; i++) {

		if (word[i] == '\x00') {
			break;
		}
		nLength++;
	}
	int nFSM = 0;
	printf_s("문자열크기 : %d\n", nLength);
	for (int i = 0; i < nLength; i++) {
			
		if (nFSM == 0) {
			if (word[i] == '@') nFSM = 1;
				printf_s("%c", word[i]);
			}
		else if (nFSM ==1) {
			if (word[i] == '@') {
				nFSM = 0;
				printf_s("@");
				break;
			}
				printf_s("*");
			}
	
		}
	printf_s("\n");
    return 0;
}

