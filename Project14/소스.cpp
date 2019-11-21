#include <stdio.h>

int main() {

	char star = '*';
	char* pstar = &star;

	printf("주소; %d\n코드값: %d\n문자: %c\n", &pstar, *pstar, *pstar);











}
