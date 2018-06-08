#pragma once
#include "myStat.h"
#include "graphics.h"

/* 행동과 아이템 대한 각 스텟의 가중치를 저장하는  구조체 */
typedef struct product{
	int hp;				// 체력 가중치
	int know;			// 지력 가중치
	int luck;			// 운 가중치
	int won;			// 가격 가중치
	int spflag;			// 가지고 있는 수. spflag = 1이면 더 가질 수 없다.
}product;

typedef struct character {
	int fav;		// 만렙 50
	char name[10];
	int hp;			// 만렙 50
	int know;		// 만렙 50
	int won;		// 만렙 99999원
	int luck;		// 만렙 50
}character;

/* 플레이어의 스텟을 조절해주는 함수 */
void controlStatus(product p) {
	myhp += p.hp;
	myknow += p.know;
	myluck += p.luck;
	mywon += p.won;

	if (myhp < abs(p.hp)) myhp = 0;
	if (myknow < abs(p.know)) myknow = 0;
	if (myluck < abs(p.luck)) myluck = 0;
	if (mywon < abs(p.won)) mywon = 0;

	if (myhp > 50) myhp = 50;
	if (myknow > 50) myknow = 50;
	if (myluck > 50) myluck = 50;
	if (mywon > 50) mywon = 50;
}

/*매점*/
product bread, gimbap, xpotion;		// 빵, 삼각김밥, x포션

void snackStatus() {
	bread.hp = 20;
	bread.know = 0;
	bread.luck = 0;
	bread.won = -1500;
	bread.spflag = 0;

	gimbap.hp = 10;
	gimbap.know = 0;
	gimbap.luck = 0;
	gimbap.won = -1000;
	gimbap.spflag = 0;

	xpotion.hp = 50;
	xpotion.know = 0;
	xpotion.luck = 0;
	xpotion.won = -99999;
	xpotion.spflag = 0;
}

void snackStore() {

	int choice;

	textingBox();
	gotoxy(1, 21); printf("[매점] 무엇을 먹어볼까?");
	gotoxy(1, 22); printf("1. 빵\t\t\\ 1500\t(체력 +2)");
	gotoxy(1, 23); printf("2. 삼각김밥\t\\ 1000\t(체력 +10)");
	gotoxy(1, 24); printf("3. X포션\t\\ 99999\t(체력 +50)");
	gotoxy(1, 25); printf("> ");
	scanf_s("%d", &choice);

	system("cls");
	textingBox();

	if (choice == 1) {
		if (mywon >= abs(bread.won)) {
			controlStatus(bread);
			printf("빵을 사먹었다.\n");
			printf("< 돈 -1500원 >\n");
			printf("< 체력 +2 >\n");
		}
		else {
			gotoxy(1, 21); printf("빵을 사기엔 돈이 부족하다...");
		}
	}
	else if (choice == 2) {
		if (mywon >= abs(gimbap.won)) {
			controlStatus(gimbap);
			printf("삼각김밥을 사먹었다.\n");
			printf("< 돈 -1000원 >\n");
			printf("< 체력 +10 >\n");
		}
		else {
			gotoxy(1, 21); printf("삼각김밥을 사기엔 돈이 부족하다...");
		}
	}
	else if (choice == 3) {
		if (mywon >= abs(xpotion.won)) {
			controlStatus(xpotion);
			printf("X포션을 사먹었다.\n");
			printf("< 돈 -99999원 >\n");
			printf("< 체력 +50 >\n");
		}
		else {
			gotoxy(1, 21); printf("X포션을 사기엔 돈이 부족하다...");
		}
	}
}

/*문방구*/
product problems, sol, jokbo;		// 교과서, 문제집, 솔리테르, 족보

void bookStatus() {
	problems.hp = 0;
	problems.know = 10;
	problems.luck = 0;
	problems.won = -20000;
	problems.spflag = 0;

	sol.hp = 0;
	sol.know = 0;
	sol.luck = 10;
	sol.won = -15000;
	sol.spflag = 0;

	jokbo.hp = 0;
	jokbo.know = 50;
	jokbo.luck = 20;
	jokbo.won = -99999;
	jokbo.spflag = 0;
}

void bookStore() {
	int choice;

	printf("[문방구] 무엇을 사볼까?\n");
	if (problems.spflag == 1) printf("-------\n");
	else printf("1. 문제집 -20000원, 지닐 시 지력 +10\n");
	if (sol.spflag == 1) printf("-------\n");
	else printf("2. 솔리테르 세트 -15000원, 지닐 시 운 +10\n");
	if (jokbo.spflag == 1) printf("-------\n");
	else printf("3. 족보 -99999원, 지닐 시 지력 +50, 지닐 시 운 +20\n");

	scanf_s("%d", &choice);

	if (choice == 1 && problems.spflag == 0) {
		controlStatus(problems);
		problems.spflag = 1;
		printf("문제집을 구입했다.\n");
		printf("< 돈 -20000원 >\n");
		printf("< 지력 +10 >\n");
	}
	else if (choice == 2 && sol.spflag == 0) {
		controlStatus(sol);
		sol.spflag = 1;
		printf("솔리테르 세트를 구입했다.\n");
		printf("< 돈 -15000원 >\n");
		printf("< 운 +10 >\n");
	}
	else if (choice == 3 && jokbo.spflag == 0) {
		controlStatus(jokbo);
		jokbo.spflag = 1;
		printf("족보를 구입했다.\n");
		printf("< 돈 -99999원 >\n");
		printf("< 지력 +50 >\n");
		printf("< 운 +20 >\n");
	}
	else if (choice < 1 || choice > 3) {
		printf("< @ 없는 선택지입니다. >\n");
	}
	else {
		printf("< @ 현재 활성화되지 않은 선택지입니다. >\n");
	}
}

/* 체력 */
void cafeteria() {
	printf("급식실에서 점심식사를 했다. (HP + 2)\n");
	myhp += 2;
}

/* 지력 */
product doTextbook, doProblems, doJokbo;

void studyStatus() {
	doTextbook.hp = -1;
	doTextbook.know = 3;
	doTextbook.luck = 0;
	doTextbook.won = 0;

	doProblems.hp = -2;
	doProblems.know = 4;
	doProblems.luck = 0;
	doProblems.won = 0;

	doJokbo.hp = -3;
	doJokbo.know = 5;
	doJokbo.luck = 0;
	doJokbo.won = 0;
}

void study() {
	int choice;

	system("cls");
	classroomInterface();
	textingBox();

	gotoxy(1, 21); printf("[ 교실 ]");
	gotoxy(1, 22); printf("공부를 하자. 무엇으로 공부를 해 볼까?");
	gotoxy(1, 23); printf("1. 교과서");
	gotoxy(1, 24);
	if (problems.spflag == 1) {
		printf("2. 문제집");
		gotoxy(1, 25);
		if (jokbo.spflag == 1) {
			printf("3. 족보");
			gotoxy(1, 26);
		}
	}
	else if (problems.spflag == 0 && jokbo.spflag == 1) {
		printf("3. 족보");
		gotoxy(1, 25);
	}
	else {
	}
	printf("> ");

	scanf_s("%d", &choice);

	system("cls");

	srand(time(NULL));

	// 교과서
	if (choice == 1) {
		textbook(rand() % 8 + 1);

		textingBox();
		gotoxy(1, 21); printf("교과서로 공부했다...");
		Sleep(500);
		
		if (myknow <= 50) {
			gotoxy(5, 6); printf("┌───────────┐");
			gotoxy(5, 7);
			if (myknow > 50 - doTextbook.know) printf("│ <지력 +%d> │", 50 - myknow);
			else printf("│ <지력 +3> │");
			gotoxy(5, 8); printf("└───────────┘");
		}

		Sleep(500);

		if (myhp > abs(doTextbook.hp)) {
			gotoxy(5, 9); printf("┌───────────┐");
			gotoxy(5, 10); printf("│ <체력 -1> │");
			gotoxy(5, 11); printf("└───────────┘");
		}
		controlStatus(doTextbook);
		showStatus();
	}
	// 문제집
	else if (choice == 2 && problems.spflag == 1) {
		pblbook(rand() % 8 + 1);
		
		textingBox();

		gotoxy(1, 21); printf("문제집으로 공부했다...\n");
		Sleep(500);
		if (myknow <= 50) {
			gotoxy(5, 6); printf("┌───────────┐");
			gotoxy(5, 7);
			if (myknow > 50 - doProblems.know) printf("│ <지력 +%d> │", 50 - myknow);
			else printf("│ <지력 +4> │");
			gotoxy(5, 8); printf("└───────────┘");
		}
		Sleep(500);
		if (myhp > abs(doProblems.hp)) {
			gotoxy(5, 9); printf("┌───────────┐");
			gotoxy(5, 10); printf("│ <체력 -2> │");
			gotoxy(5, 11); printf("└───────────┘");
		}
		controlStatus(doProblems);
		showStatus();
	}
	//족보
	else if (choice == 3 && jokbo.spflag == 1) {
		jokbook(rand() % 8 + 1);

		textingBox();

		gotoxy(1, 21); printf("족보로 공부했다...\n");
		Sleep(500);
		if (myknow <= 50) {
			gotoxy(5, 6); printf("┌───────────┐");
			gotoxy(5, 7);
			if (myknow > 50 - doJokbo.know) printf("│ <지력 +%d> │", 50 - myknow);
			else printf("│ <지력 +5> │");
			gotoxy(5, 8); printf("└───────────┘");
		}	
		Sleep(500);
		if (myhp > abs(doJokbo.hp)) {
			gotoxy(5, 9); printf("┌───────────┐");
			gotoxy(5, 10); printf("│ <체력 -3> │");
			gotoxy(5, 11); printf("└───────────┘");
		}
		controlStatus(doJokbo);
		showStatus();
	}
	// 1~3이 아닌 숫자를 입력했을 때
	else if (choice < 1 || choice > 3) {
		textingBox();
		gotoxy(1, 21); printf("< @ 없는 선택지입니다. >\n");
		_getch();
		study();
	}
	//활성화되지 않은 선택지
	else {
		textingBox();
		gotoxy(1, 21); printf("< @ 현재 활성화되지 않은 선택지입니다. >\n");
		_getch();
		study();
	}
}

/* 운 */
product doPoker, doOnecard, doSol;
void cardStatus() {
	doPoker.hp = 0;
	doPoker.know = 0;
	doPoker.luck = 3;
	doPoker.won = -3000;

	doOnecard.hp = 0;
	doOnecard.know = 0;
	doOnecard.luck = 2;
	doOnecard.won = -1000;

	doSol.hp = -2;
	doSol.know = 0;
	doSol.luck = 5;
	doSol.won = 0;
}
void cardPlace() {
	int choice;

	printf("[암흑의 골목] 양아치들이 건전하게 카드게임을 하고 있다...\n");
	printf("양아치 하나가 같이 어울리자는 듯이 손짓을 하고 있다.\n\n");
	printf("1. 포커\n");
	printf("2. 원카드\n");
	if (sol.spflag == 1) printf("3. 솔리테르\n");
	scanf_s("%d", &choice);

	if (choice == 1) {
		controlStatus(doPoker);
		printf("포커를 했다...\n");
		printf("<돈 -3000원 >\n");
		printf("< 운 +3 >\n");
	}
	else if (choice == 2) {
		controlStatus(doOnecard);
		printf("원카드를 했다...\n");
		printf("< 돈 -1000원 >\n");
		printf("< 운 +2 >\n");
	}
	else if (choice == 3 && sol.spflag == 1) {
		controlStatus(doSol);
		printf("솔리테르를 했다...\n");
		printf("< 운 +3 >\n");
		printf("< 체력 -2 >\n");
	}
	else if (choice < 1 || choice > 3) {
		printf("< @ 없는 선택지입니다. >\n");
	}
	else printf("< @ 현재 활성화되지 않은 선택지입니다. >\n");
}

/*알바하기*/
product doGarden, doWindow, doBag, doShop;

void workStatus() {
	doGarden.hp = -1;
	doGarden.know = 0;
	doGarden.luck = 0;
	doGarden.won = 8000;

	doWindow.hp = -2;
	doWindow.know = 0;
	doWindow.luck = 0;
	doWindow.won = 10000;

	doBag.hp = 1;
	doBag.know = 1;
	doBag.luck = 0;
	doBag.won = 20000;

	doShop.hp = 2;
	doShop.know = 0;
	doShop.luck = -1;
	doShop.won = 22000;
}

void workTime() {
	int choice;

	printf("[게시판 앞] 여러 가지 아르바이트 구인 공고가 붙어 있다.\n");
	printf("어떤 일을 해 볼까?\n");
	printf("1. 정원 쓸기\n");
	printf("2. 창문 닦기\n");
	printf("3. 수한무의 책가방을 들어주자.\n");
	printf("4. 수한무의 쇼핑가방을 들어주자.\n");
	scanf_s("%d", &choice);

	if (choice == 1) {
		controlStatus(doGarden);
		printf("정원을 열심히 쓸었다...\n");
		printf("< 돈 +8000원 >\n");
		printf("< 체력 -1 >\n");
	}
	else if (choice == 2) {
		controlStatus(doWindow);
		printf("학교 창문을 열심히 닦았다...\n");
		printf("< 돈 +10000원 >\n");
		printf("< 체력 -2 >\n");
	}
	else if (choice == 3) {
		controlStatus(doBag);
		printf("수한무가 등교할 때 책가방을 들어주었다...\n");
		printf("< 돈 +20000원 >\n");
		printf("< 체력 +1 >\n");
		printf("< 지력 +1 >\n");
	}
	else if (choice == 4) {
		controlStatus(doShop);
		printf("백화점에서 수한무의 쇼핑가방을 들어주었다...\n");
		printf("< 돈 +22000원 >\n");
		printf("< 체력 +2 >\n");
		printf("< 운 -1 >\n");
	}
	else {
		printf("< @ 불가능한 선택지입니다. >");
	}
}