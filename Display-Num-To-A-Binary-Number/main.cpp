/**
@file Display-Num-To-A-Binary-Number.cpp

@mainpage 키보드로 입력 받은 정수를 2진 바이너리 값으로 출력

@date 2018/04/23

@author 김규태(gyutae100@gmail.com)

@details 입력 받은 정수를 2진 바이너리 값으로 출력한다.

@version 0.0.1
*/

#include "stdafx.h"

#include <stdio.h>
#include <string.h>

#include <Windows.h>

#include "lib_bit.h"



/**
@return int : 프로그램 정상 종료 여부 파악한다.

@brief 사용자가 입력한 10진 자연수 값을 2진 비트로 출력한다.

@warning 입력시 숫자가 아닌 문자가 입력되면 안된다.
*/
int main()
{
	unsigned int src_num = 0;

	while (1) {

		//------------------------------------------------------------------------------
		//	키보드 값 입력
		//	
		//	사용자가 음수를 입력 할 경우가 존재가능
		//	입력값은 long타입으로 받자
		//	만일 unsigned int형으로 -1입력 받으면 0xffffffff가 되버리는 참사가 일어난다
		//------------------------------------------------------------------------------
		long tmp = 0;
		puts("비트로 표현 할 값 입력(unsigned int형 범위 내) : ");
		scanf_s("%u", &tmp);

		//입력 값 유효성 체크
		if (tmp < 0 || tmp > UINT_MAX) { 

			puts("잘못된 유효숫자 입력, 다시 입력하세요\n");
			continue;
		}
		//정상적인 유효숫자 입력한 경우
		else {

			//unsigned int형으로 재타입 캐스팅!
			src_num = (unsigned int)tmp;
		}

		//10진수 값을 2진수 비트 단위로 출력
		if (DisplayNumToBit(src_num)) {

			puts("성공!\n");
		}
		else {

			puts("실패!\n");
		}
	}
}

