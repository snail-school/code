#pragma once

#include "myStat.h"
#pragma comment(lib, "winmm.lib")
// #define BGM "8bit24.wav"


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

void textingBox() {
	int i;
	gotoxy(0, 20); printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖");
	for (i = 0; i < 6; i++) {
		gotoxy(0, i + 21);
		printf("弛                                                                                弛");
	}
	gotoxy(0, 27); printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");
}
void showStatus() {
	gotoxy(1, 22);
	_getch();

	int i;
	gotoxy(30, 6); printf("忙式式式式式式式式式式式式式式忖");
	for (i = 0; i < 6; i++) {
		gotoxy(30, i + 7); printf("弛              弛");
	}
	gotoxy(31, 7); printf("≠MY STATUS≠");
	gotoxy(31, 9); printf("羹溘");
	gotoxy(31, 10); printf("雖溘");
	gotoxy(31, 11); printf("遴");
	gotoxy(31, 12); printf("絲");
	gotoxy(30, 13); printf("戌式式式式式式式式式式式式式式戎");

	for (i = 9; i < 13; i++) {
		int tmp = 0;

		if (i == 9) tmp = myhp;
		else if (i == 10) tmp = myknow;
		else if (i == 11) tmp = myluck;
		else tmp = mywon;

		if (tmp < 10) gotoxy(37, i);
		else if (tmp < 100) gotoxy(36, i);
		else if (tmp < 1000) gotoxy(35, i);
		else if (tmp < 10000) gotoxy(34, i);
		else gotoxy(33, i);

		printf("%d", tmp);
	}

	gotoxy(1, 22);
	_getch();
	system("cls");
}

void classroomInterface() {
	FILE *pFile;
	fopen_s(&pFile, "interfaces\\classroomInterface.txt", "r");
	interf(pFile);
}
void textbook(int flag) {
	FILE *pFile;
	if (flag == 1) {
		fopen_s(&pFile, "interfaces\\study_textbook1.txt", "r");
		interf(pFile);
	}
	else if (flag == 2) {
		fopen_s(&pFile, "interfaces\\study_textbook2.txt", "r");
		interf(pFile);
	}
	else if (flag == 3) {
		fopen_s(&pFile, "interfaces\\study_textbook3.txt", "r");
		interf(pFile);
	}
	else if (flag == 4) {
		fopen_s(&pFile, "interfaces\\study_textbook4.txt", "r");
		interf(pFile);
	}
	else if (flag == 5) {
		fopen_s(&pFile, "interfaces\\study_textbook5.txt", "r");
		interf(pFile);
	}
	else if (flag == 6) {
		fopen_s(&pFile, "interfaces\\study_textbook6.txt", "r");
		interf(pFile);
	}
	else if (flag == 7) {
		fopen_s(&pFile, "interfaces\\study_textbook7.txt", "r");
		interf(pFile);
	}
	else {
		fopen_s(&pFile, "interfaces\\study_textbook8.txt", "r");
		interf(pFile);
	}
}
void pblbook(int flag) {
	FILE *pFile;
	if (flag == 1) {
		fopen_s(&pFile, "interfaces\\study_pblbook1.txt", "r");
		interf(pFile);
	}
	else if (flag == 2) {
		fopen_s(&pFile, "interfaces\\study_pblbook2.txt", "r");
		interf(pFile);
	}
	else if (flag == 3) {
		fopen_s(&pFile, "interfaces\\study_pblbook3.txt", "r");
		interf(pFile);
	}
	else if (flag == 4) {
		fopen_s(&pFile, "interfaces\\study_pblbook4.txt", "r");
		interf(pFile);
	}
	else if (flag == 5) {
		fopen_s(&pFile, "interfaces\\study_pblbook5.txt", "r");
		interf(pFile);
	}
	else if (flag == 6) {
		fopen_s(&pFile, "interfaces\\study_pblbook6.txt", "r");
		interf(pFile);
	}
	else if (flag == 7) {
		fopen_s(&pFile, "interfaces\\study_pblbook7.txt", "r");
		interf(pFile);
	}
	else {
		fopen_s(&pFile, "interfaces\\study_pblbook8.txt", "r");
		interf(pFile);
	}
}
void jokbook(int flag) {
	FILE *pFile;
	if (flag == 1) {
		fopen_s(&pFile, "interfaces\\study_jokbook1.txt", "r");
		interf(pFile);
	}
	else if (flag == 2) {
		fopen_s(&pFile, "interfaces\\study_jokbook2.txt", "r");
		interf(pFile);
	}
	else if (flag == 3) {
		fopen_s(&pFile, "interfaces\\study_jokbook3.txt", "r");
		interf(pFile);
	}
	else if (flag == 4) {
		fopen_s(&pFile, "interfaces\\study_jokbook4.txt", "r");
		interf(pFile);
	}
	else if (flag == 5) {
		fopen_s(&pFile, "interfaces\\study_jokbook5.txt", "r");
		interf(pFile);
	}
	else if (flag == 6) {
		fopen_s(&pFile, "interfaces\\study_jokbook6.txt", "r");
		interf(pFile);
	}
	else if (flag == 7) {
		fopen_s(&pFile, "interfaces\\study_jokbook7.txt", "r");
		interf(pFile);
	}
	else {
		fopen_s(&pFile, "interfaces\\study_jokbook8.txt", "r");
		interf(pFile);
	}
}

void snackstoreInterface() {
	FILE *pFile;
	fopen_s(&pFile, "interfaces\\snackstoreInterface.txt", "r");
	interf(pFile);
}