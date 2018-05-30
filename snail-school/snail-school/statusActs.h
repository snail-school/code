#pragma once
#include "stdafx.h"

/* �ൿ�� ������ ���� �� ������ ����ġ�� �����ϴ�  ����ü */
typedef struct {
	int hp;				// ü�� ����ġ
	int know;			// ���� ����ġ
	int luck;			// �� ����ġ
	int won;			// ���� ����ġ
	int spflag;			// ������ �ִ� ��. spflag = 1�̸� �� ���� �� ����.
}product;

/* �÷��̾��� ������ �������ִ� �Լ� */
void controlStatus(character me, product p) {
	me.hp += p.hp;
	me.know += p.know;
	me.luck += p.luck;
	me.won += p.won;
}

/*����*/
product bread, gimbap, xpotion;		// ��, �ﰢ���, x����

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
	printf("[����] ������ �Ծ��?\n");
	printf("1. �� - 1500��, ü�� +2\n");
	printf("2. �ﰢ��� - 1000��, ü�� +10\n");
	printf("3. x���� - 99999��, ü�� +50\n");
	scanf_s("%d", &choice);

	if (choice == 1 && (me.won >= bread.won)) {
		controlStatus(me, bread);
		printf("���� ��Ծ���.\n");
		printf("< �� -1500�� >\n");
		printf("< ü�� +2 >\n");
	}
	else if (choice == 2 && (me.won >= gimbap.won)) {
		controlStatus(me, gimbap);
		printf("���� ��Ծ���.\n");
		printf("< �� -1000�� >\n");
		printf("< ü�� +10 >\n");
	}
	else if (choice == 3 && (me.won >= xpotion.won)) {
		controlStatus(me, xpotion);
		printf("���� ��Ծ���.\n");
		printf("< �� -99999�� >\n");
		printf("< ü�� +50 >\n");
	}
}

/*���汸*/
product problems, sol, jokbo;		// ������, ������, �ָ��׸�, ����

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

	printf("[���汸] ������ �纼��?\n");
	if (problems.spflag == 1) printf("-------\n");
	else printf("1. ������ -20000��, ���� �� ���� +10\n");
	if (sol.spflag == 1) printf("-------\n");
	else printf("2. �ָ��׸� ��Ʈ -15000��, ���� �� �� +10\n");
	if (jokbo.spflag == 1) printf("-------\n");
	else printf("3. ���� -99999��, ���� �� ���� +50, ���� �� �� +20\n");

	scanf_s("%d", &choice);
	
	if (choice == 1 && problems.spflag == 0) {
		controlStatus(me, problems);
		problems.spflag = 1;
		printf("�������� �����ߴ�.\n");
		printf("< �� -20000�� >\n");
		printf("< ���� +10 >\n");
	}
	else if (choice == 2 && sol.spflag == 0) {
		controlStatus(me, sol);
		sol.spflag = 1;
		printf("�ָ��׸� ��Ʈ�� �����ߴ�.\n");
		printf("< �� -15000�� >\n");
		printf("< �� +10 >\n");
	}
	else if (choice == 3 && jokbo.spflag == 0) {
		controlStatus(me, jokbo);
		jokbo.spflag = 1;
		printf("������ �����ߴ�.\n");
		printf("< �� -99999�� >\n");
		printf("< ���� +50 >\n");
		printf("< �� +20 >\n");
	}
	else if (choice < 0 || choice > 3) {
		printf("< @ ���� �������Դϴ�. >\n");
	}
	else {
		printf("< @ ���� Ȱ��ȭ���� ���� �������Դϴ�. >\n");
	}
}

/* ü�� */
void cafeteria(character me) {
	printf("�޽Ľǿ��� ���ɽĻ縦 �ߴ�. (HP + 2)\n");
	me.hp += 2;
}

/* ���� */
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
	printf("[����] ���θ� ����. �������� ���θ� �� ����?");
	printf("1. ������\n");
	if (problems.spflag == 1) printf("2. ������\n");
	if (jokbo.spflag == 1) printf("3. ����\n");
	scanf_s("%d", &choice);
	
	if (choice == 1) {
		controlStatus(me, doTextbook);
		printf("�������� �����ߴ�...\n");
		printf("<���� +3>\n");
		printf("<ü�� -1>\n");
	}
	else if (choice == 2 && problems.spflag == 1) {
		controlStatus(me, doProblems);
		printf("���������� �����ߴ�...\n");
		printf("<���� +4>\n");
		printf("<ü�� -2>\n");
	}
	else if (choice == 3 && jokbo.spflag == 1) {
		controlStatus(me, doJokbo);
		printf("������ �����ߴ�...\n");
		printf("<���� +5>\n");
		printf("<ü�� -3>\n");
	}
	else if (choice < 0 || choice > 3) {
		printf("< @ ���� �������Դϴ�. >\n");
	}
	else printf("< @ ���� Ȱ��ȭ���� ���� �������Դϴ�. >\n");
}

/* �� */
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
	
	printf("[������ ���] ���ġ���� �����ϰ� ī������� �ϰ� �ִ�...\n");
	printf("���ġ �ϳ��� ���� ��︮�ڴ� ���� ������ �ϰ� �ִ�.\n\n");
	printf("1. ��Ŀ\n");
	printf("2. ��ī��\n");
	if (sol.spflag == 1) printf("3. �ָ��׸�\n");
	scanf_s("%d", &choice);

	if (choice == 1) {
		controlStatus(me, doPoker);
		printf("��Ŀ�� �ߴ�...\n");
		printf("<�� -3000�� >\n");
		printf("< �� +3 >\n");
	}
	else if (choice == 2) {
		controlStatus(me, doOnecard);
		printf("��ī�带 �ߴ�...\n");
		printf("< �� -1000�� >\n");
		printf("< �� +2 >\n");
	}
	else if (choice == 3 && sol.spflag == 1) {
		controlStatus(me, doSol);
		printf("�ָ��׸��� �ߴ�...\n");
		printf("< �� +3 >\n");
		printf("< ü�� -2 >\n");
	}
	else if (choice < 0 || choice > 3) {
		printf("< @ ���� �������Դϴ�. >\n");
	}
	else printf("< @ ���� Ȱ��ȭ���� ���� �������Դϴ�. >\n");
}

/*�˹��ϱ�*/
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

	printf("[�Խ��� ��] ���� ���� �Ƹ�����Ʈ ���� ���� �پ� �ִ�.\n");
	printf("� ���� �� ����?\n");
	printf("1. ���� ����\n");
	printf("2. â�� �۱�\n");
	printf("3. ���ѹ��� å������ �������.\n");
	printf("4. ���ѹ��� ���ΰ����� �������.\n");
	scanf_s("%d", &choice);

	if (choice == 1) {
		controlStatus(me, doGarden);
		printf("������ ������ ������...\n");
		printf("< �� +8000�� >\n");
		printf("< ü�� -1 >\n");
	}
	else if (choice == 2) {
		controlStatus(me, doWindow);
		printf("�б� â���� ������ �۾Ҵ�...\n");
		printf("< �� +10000�� >\n");
		printf("< ü�� -2 >\n");
	}
	else if (choice == 3) {
		controlStatus(me, doBag);
		printf("���ѹ��� ��� �� å������ ����־���...\n");
		printf("< �� +20000�� >\n");
		printf("< ü�� +1 >\n");
		printf("< ���� +1 >\n");
	}
	else if (choice == 4) {
		controlStatus(me, doShop);
		printf("��ȭ������ ���ѹ��� ���ΰ����� ����־���...\n");
		printf("< �� +22000�� >\n");
		printf("< ü�� +2 >\n");
		printf("< �� -1 >\n");
	}
	else {
		printf("< @ �Ұ����� �������Դϴ�. >");
	}
}