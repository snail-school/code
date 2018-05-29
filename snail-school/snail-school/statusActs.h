#pragma once
#include "stdafx.h"

/* 행동과 아이템 대한 각 스텟의 가중치를 저장하는  구조체 */
typedef struct {
	int hp;				// 체력 가중치
	int know;			// 지력 가중치
	int luck;			// 운 가중치
	int won;			// 가격 가중치
	int spflag;			// 가지고 있는 수. spflag = 1이면 더 가질 수 없다.
}product;

/* 플레이어의 스텟을 조절해주는 함수 */
void controlStatus(character me, product p) {
	me.hp += p.hp;
	me.know += p.know;
	me.luck += p.luck;
	me.won += p.won;
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
	xpotion.won = 99999;
	xpotion.spflag = 0;
}

void snackStore(character me) {

	int choice;
	printf("[매점] 무엇을 먹어볼까?\n");
	printf("1. 빵 - 1500원, 체력 +2\n");
	printf("2. 삼각김밥 - 1000원, 체력 +10\n");
	printf("3. x포현 - 99999원, 체력 +50\n");
	scanf_s("%d", &choice);

	if (choice == 1 && (me.won >= bread.won)) {
		controlStatus(me, bread);
		printf("빵을 사먹었다.\n");
		printf("< 돈 -1500원 >\n");
		printf("< 체력 +2 >\n");
	}
	else if (choice == 2 && (me.won >= gimbap.won)) {
		controlStatus(me, gimbap);
		printf("빵을 사먹었다.\n");
		printf("< 돈 -1000원 >\n");
		printf("< 체력 +10 >\n");
	}
	else if (choice == 3 && (me.won >= xpotion.won)) {
		controlStatus(me, xpotion);
		printf("빵을 사먹었다.\n");
		printf("< 돈 -99999원 >\n");
		printf("< 체력 +50 >\n");
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

void bookStore(character me) {
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
		controlStatus(me, problems);
		problems.spflag = 1;
		printf("문제집을 구입했다.\n");
		printf("< 돈 -20000원 >\n");
		printf("< 지력 +10 >\n");
	}
	else if (choice == 2 && sol.spflag == 0) {
		controlStatus(me, sol);
		sol.spflag = 1;
		printf("솔리테르 세트를 구입했다.\n");
		printf("< 돈 -15000원 >\n");
		printf("< 운 +10 >\n");
	}
	else if (choice == 3 && jokbo.spflag == 0) {
		controlStatus(me, jokbo);
		jokbo.spflag = 1;
		printf("족보를 구입했다.\n");
		printf("< 돈 -99999원 >\n");
		printf("< 지력 +50 >\n");
		printf("< 운 +20 >\n");
	}
	else if (choice < 0 || choice > 3) {
		printf("< @ 없는 선택지입니다. >\n");
	}
	else {
		printf("< @ 현재 활성화되지 않은 선택지입니다. >\n");
	}
}

/* 체력 */
void cafeteria(character me) {
	printf("급식실에서 점심식사를 했다. (HP + 2)\n");
	me.hp += 2;
}

/* 지력 */
product doTextbook, doProblems, doJokbo;

void studyStatus() {
	doTextbook.know = 3;
	doTextbook.hp = -1;

	doProblems.know = 4;
	doProblems.hp = -2;

	doJokbo.know = 5;
	doJokbo.hp = -3;
}

void study(character me) {
	int choice;
	printf("[교실] 공부를 하자. 무엇으로 공부를 해 볼까?");
	printf("1. 교과서\n");
	if (problems.spflag == 1) printf("2. 문제집\n");
	if (jokbo.spflag == 1) printf("3. 족보\n");
	scanf_s("%d", &choice);
	
	if (choice == 1) {
		controlStatus(me, doTextbook);
		printf("교과서로 공부했다...\n");
		printf("<지력 +3>\n");
		printf("<체력 -1>\n");
	}
	else if (choice == 2 && problems.spflag == 1) {
		controlStatus(me, doProblems);
		printf("문제집으로 공부했다...\n");
		printf("<지력 +4>\n");
		printf("<체력 -2>\n");
	}
	else if (choice == 3 && jokbo.spflag == 1) {
		controlStatus(me, doJokbo);
		printf("족보로 공부했다...\n");
		printf("<지력 +5>\n");
		printf("<체력 -3>\n");
	}
	else if (choice < 0 || choice > 3) {
		printf("< @ 없는 선택지입니다. >\n");
	}
	else printf("< @ 현재 활성화되지 않은 선택지입니다. >\n");
}

/* 운 */
product doPoker, doOnecard, doSol;
void cardStatus() {
	doPoker.luck = 3;
	doPoker.won = -3000;
	doOnecard.luck = 2;
	doOnecard.won = -1000;
	doSol.luck = 5;
	doSol.hp = -2;
}
void cardPlace(character me) {
	int choice;
	
	printf("[암흑의 골목] 양아치들이 건전하게 카드게임을 하고 있다...\n");
	printf("양아치 하나가 같이 어울리자는 듯이 손짓을 하고 있다.\n\n");
	printf("1. 포커\n");
	printf("2. 원카드\n");
	if (sol.spflag == 1) printf("3. 솔리테르\n");
	scanf_s("%d", &choice);

	if (choice == 1) {
		controlStatus(me, doPoker);
		printf("포커를 했다...\n");
		printf("<돈 -3000원 >\n");
		printf("< 운 +3 >\n");
	}
	else if (choice == 2) {
		controlStatus(me, doOnecard);
		printf("원카드를 했다...\n");
		printf("< 돈 -1000원 >\n");
		printf("< 운 +2 >\n");
	}
	else if (choice == 3 && sol.spflag == 1) {
		controlStatus(me, doSol);
		printf("솔리테르를 했다...\n");
		printf("< 운 +3 >\n");
		printf("< 체력 -2 >\n");
	}
	else if (choice < 0 || choice > 3) {
		printf("< @ 없는 선택지입니다. >\n");
	}
	else printf("< @ 현재 활성화되지 않은 선택지입니다. >\n");
}

/*알바하기*/
product doGarden, doWindow, doBag, doShop;

void workStatus() {
	doGarden.won = 8000;
	doGarden.hp = -1;

	doWindow.won = 10000;
	doWindow.hp = -2;

	doBag.won = 20000;
	doBag.hp = 1;
	doBag.know = 1;

	doShop.won = 22000;
	doShop.hp = 2;
	doShop.luck = -1;
}

void workTime(character me) {
	int choice;

	printf("[게시판 앞] 여러 가지 아르바이트 구인 공고가 붙어 있다.\n");
	printf("어떤 일을 해 볼까?\n");
	printf("1. 정원 쓸기\n");
	printf("2. 창문 닦기\n");
	printf("3. 수한무의 책가방을 들어주자.\n");
	printf("4. 수한무의 쇼핑가방을 들어주자.\n");
	scanf_s("%d", &choice);

	if (choice == 1) {
		controlStatus(me, doGarden);
		printf("정원을 열심히 쓸었다...\n");
		printf("< 돈 +8000원 >\n");
		printf("< 체력 -1 >\n");
	}
	else if (choice == 2) {
		controlStatus(me, doWindow);
		printf("학교 창문을 열심히 닦았다...\n");
		printf("< 돈 +10000원 >\n");
		printf("< 체력 -2 >\n");
	}
	else if (choice == 3) {
		controlStatus(me, doBag);
		printf("수한무가 등교할 때 책가방을 들어주었다...\n");
		printf("< 돈 +20000원 >\n");
		printf("< 체력 +1 >\n");
		printf("< 지력 +1 >\n");
	}
	else if (choice == 4) {
		controlStatus(me, doShop);
		printf("백화점에서 수한무의 쇼핑가방을 들어주었다...\n");
		printf("< 돈 +22000원 >\n");
		printf("< 체력 +2 >\n");
		printf("< 운 -1 >\n");
	}
	else {
		printf("< @ 불가능한 선택지입니다. >");
	}
}