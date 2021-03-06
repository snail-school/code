// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 또는 프로젝트 관련 포함 파일이
// 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <windows.h>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
// #define BGM "8bit24.wav"

typedef struct character {
	int fav;		// 만렙 50
	char name[10];
	int know;		// 만렙 50
	int won;		// 만렙 99999원
	int luck;		// 만렙 50
	int hp;			// 만렙 50
}character;

// void bgmPlayer() { PlaySound(TEXT(BGM), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); }

int time_flag = 0;	// 시간을 나타내는 변수. 아침=1, 점심=2, 저녁=3, 하루가 끝나면 0
int date_flag = 0;	// 날짜를 나타내는 변수. 30일까지 진행된다.

void gotoxy(int x, int y) {
	COORD pos = { 2 * x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void interf(FILE *pFile) {
	if (pFile != NULL) {
		char strTemp[255], *pStr;
		while (!feof(pFile)) {
			pStr = fgets(strTemp, sizeof(strTemp), pFile);
			printf("%s", pStr);
		}
		fclose(pFile);
	}
}

void damagochi() {
	while (date_flag < 30) {
		date_flag++;
		time_flag++;
		for (; time_flag <= 3; time_flag++) {
			if (time_flag == 1) printf("Day %d | 아침\n", date_flag);
			else if (time_flag == 2) printf("Day %d | 점심\n", date_flag);
			else printf("Day %d | 저녁\n", date_flag);
		}
		time_flag = 0;
	}
}