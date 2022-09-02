#pragma once

// PreProcessor (전처리기)
// 전처리 지시어 라고도 하며
// 컴파일전에 컴파일러에게 미리 명령을 내리는 구문입니다.
// # 으로 정의하며 전처리기는 세미콜론(;) 을 작성하지 않으며
// 한 라인에 한 개의 전처리기만을 사용하실 수 있습니다.

#include <stdio.h>
// #include
// Header File 을 해당 파일에 포함시키는 전처리 지시어 입니다.
// Header File 은 해당 파일에 선언된 함수나 전역 변수 , 매크로등을
// 다른 파일에서 사용할 수 있도록 작성하는 파일입니다.
//
// 	-Header File 에 종류에는 기본 제공 헤더파일과 사용자 정의 헤더파일이 있습니다.
//	 기본 제공 (Header File) : Visual Studio 에서 기본적으로 제공하는 헤더 파일들로
//	 외부 종속성에 미리 추가된 헤더파일을 의미합니다.
//	 추가할시 꺽쇠(<>) 를 이용합니다.
//	 ex ) #include <Windows.h>
//  -사용자 정의 Header File : 사용자가 직접 작성한 헤더파일입니다.
//	 추가할 시 큰 따옴표("") 를 이용합니다.
//	 ex ) #include "MyHeader.h"

// #define
// 심볼 , 매크로 상수 , 매크로 함수를 정의하는 기능입니다.

#define Symbol // 심볼 Symbol 을 정의합니다.
// 심볼 : 상징성으로 #ifdef , #ifndef 의 조건으로 사용됩니다.

#define TEN 10 // 매크로 상수 TEN 을 정의합니다.
// 매크로 상수 : 미리 만들어진 상수로 의미성을 부여합니다. 매크로 상수 사용시 해당 상수값으로 치환됩니다.

#define PLUS(x, y) x + y // 매크로 함수 PLUS 를 정의합니다.
// 매크로 함수 : 미리 만들어진 함수로 의미성을 부여하며 사용시 해당 식으로 치환됩니다.

// #ifdef : 해당 심볼이 정의되어 있는지 확인하고 정의되어 있다면 코드를 활성화 합니다. 아니라면 코드를 비활성화 
#ifdef Symbol
void Hello()
{ printf("Hello World!\n"); }
#else // else : 위 조건식이 맞지 않을 시 활성화 하는 전처리기 입니다.
void Hello()
{ printf("Hello World!\n"); }
#endif
// #endif : 조건 전처리기의 끝을 나타냅니다.
// #if , #ifdef, #ifndef 사용시 무조건으로 끝에 작성하셔야 합니다.

#define Symbol2
// undef : 심볼 , 매크로 상수 , 매크로 함수의 정의를 해제합니다.
#undef Symbol2

// ifndef : 해당 심볼이 정의되어있지 않은지 확인하고 정의되어 있지 않다면 코드를 활성화 합니다. 아니라면 비활성화 합니다.
#ifndef Symbol2
void World()
{ printf("World!\n"); }
#endif 
	
// #if : 조건 전처리기 입니다. 해당 조건이 참이라면 코드를 활성화합니다.
#if TEN == 10
void Ten()
{ printf("Ten 은 10입니다. \n"); }
#elif TEN < 10 // #elif : 위 조건식이 맞지 않을 시 다시 조건식을 검사합니다.
void Ten()
{ printf("Ten 은 10보다 작습니다. \n"); }
#else 
void Ten()
{ printf("Ten 은 10보다 큽니다. \n"); }
#endif