#pragma once
#include "myStat.h"
#include "graphics.h"

/* �ൿ�� ������ ���� �� ������ ����ġ�� �����ϴ�  ����ü */
typedef struct product{
	int hp;				// ü�� ����ġ
	int know;			// ���� ����ġ
	int luck;			// �� ����ġ
	int won;			// ���� ����ġ
	int spflag;			// ������ �ִ� ��. spflag = 1�̸� �� ���� �� ����.
}product;

typedef struct character {
	int fav;		// ���� 50
	char name[10];
	int hp;			// ���� 50
	int know;		// ���� 50
	int won;		// ���� 99999��
	int luck;		// ���� 50
}character;

/* �÷��̾��� ������ �������ִ� �Լ� */
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
	xpotion.won = -99999;
	xpotion.spflag = 0;
}

void snackStore() {

	int choice;

	textingBox();
	gotoxy(1, 21); printf("[����] ������ �Ծ��?");
	gotoxy(1, 22); printf("1. ��\t\t\\ 1500\t(ü�� +2)");
	gotoxy(1, 23); printf("2. �ﰢ���\t\\ 1000\t(ü�� +10)");
	gotoxy(1, 24); printf("3. X����\t\\ 99999\t(ü�� +50)");
	gotoxy(1, 25); printf("> ");
	scanf_s("%d", &choice);

	system("cls");
	textingBox();

	if (choice == 1) {
		if (mywon >= abs(bread.won)) {
			controlStatus(bread);
			printf("���� ��Ծ���.\n");
			printf("< �� -1500�� >\n");
			printf("< ü�� +2 >\n");
		}
		else {
			gotoxy(1, 21); printf("���� ��⿣ ���� �����ϴ�...");
		}
	}
	else if (choice == 2) {
		if (mywon >= abs(gimbap.won)) {
			controlStatus(gimbap);
			printf("�ﰢ����� ��Ծ���.\n");
			printf("< �� -1000�� >\n");
			printf("< ü�� +10 >\n");
		}
		else {
			gotoxy(1, 21); printf("�ﰢ����� ��⿣ ���� �����ϴ�...");
		}
	}
	else if (choice == 3) {
		if (mywon >= abs(xpotion.won)) {
			controlStatus(xpotion);
			printf("X������ ��Ծ���.\n");
			printf("< �� -99999�� >\n");
			printf("< ü�� +50 >\n");
		}
		else {
			gotoxy(1, 21); printf("X������ ��⿣ ���� �����ϴ�...");
		}
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

void bookStore() {
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
		controlStatus(problems);
		problems.spflag = 1;
		printf("�������� �����ߴ�.\n");
		printf("< �� -20000�� >\n");
		printf("< ���� +10 >\n");
	}
	else if (choice == 2 && sol.spflag == 0) {
		controlStatus(sol);
		sol.spflag = 1;
		printf("�ָ��׸� ��Ʈ�� �����ߴ�.\n");
		printf("< �� -15000�� >\n");
		printf("< �� +10 >\n");
	}
	else if (choice == 3 && jokbo.spflag == 0) {
		controlStatus(jokbo);
		jokbo.spflag = 1;
		printf("������ �����ߴ�.\n");
		printf("< �� -99999�� >\n");
		printf("< ���� +50 >\n");
		printf("< �� +20 >\n");
	}
	else if (choice < 1 || choice > 3) {
		printf("< @ ���� �������Դϴ�. >\n");
	}
	else {
		printf("< @ ���� Ȱ��ȭ���� ���� �������Դϴ�. >\n");
	}
}

/* ü�� */
void cafeteria() {
	printf("�޽Ľǿ��� ���ɽĻ縦 �ߴ�. (HP + 2)\n");
	myhp += 2;
}

/* ���� */
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

	gotoxy(1, 21); printf("[ ���� ]");
	gotoxy(1, 22); printf("���θ� ����. �������� ���θ� �� ����?");
	gotoxy(1, 23); printf("1. ������");
	gotoxy(1, 24);
	if (problems.spflag == 1) {
		printf("2. ������");
		gotoxy(1, 25);
		if (jokbo.spflag == 1) {
			printf("3. ����");
			gotoxy(1, 26);
		}
	}
	else if (problems.spflag == 0 && jokbo.spflag == 1) {
		printf("3. ����");
		gotoxy(1, 25);
	}
	else {
	}
	printf("> ");

	scanf_s("%d", &choice);

	system("cls");

	srand(time(NULL));

	// ������
	if (choice == 1) {
		textbook(rand() % 8 + 1);

		textingBox();
		gotoxy(1, 21); printf("�������� �����ߴ�...");
		Sleep(500);
		
		if (myknow <= 50) {
			gotoxy(5, 6); printf("��������������������������");
			gotoxy(5, 7);
			if (myknow > 50 - doTextbook.know) printf("�� <���� +%d> ��", 50 - myknow);
			else printf("�� <���� +3> ��");
			gotoxy(5, 8); printf("��������������������������");
		}

		Sleep(500);

		if (myhp > abs(doTextbook.hp)) {
			gotoxy(5, 9); printf("��������������������������");
			gotoxy(5, 10); printf("�� <ü�� -1> ��");
			gotoxy(5, 11); printf("��������������������������");
		}
		controlStatus(doTextbook);
		showStatus();
	}
	// ������
	else if (choice == 2 && problems.spflag == 1) {
		pblbook(rand() % 8 + 1);
		
		textingBox();

		gotoxy(1, 21); printf("���������� �����ߴ�...\n");
		Sleep(500);
		if (myknow <= 50) {
			gotoxy(5, 6); printf("��������������������������");
			gotoxy(5, 7);
			if (myknow > 50 - doProblems.know) printf("�� <���� +%d> ��", 50 - myknow);
			else printf("�� <���� +4> ��");
			gotoxy(5, 8); printf("��������������������������");
		}
		Sleep(500);
		if (myhp > abs(doProblems.hp)) {
			gotoxy(5, 9); printf("��������������������������");
			gotoxy(5, 10); printf("�� <ü�� -2> ��");
			gotoxy(5, 11); printf("��������������������������");
		}
		controlStatus(doProblems);
		showStatus();
	}
	//����
	else if (choice == 3 && jokbo.spflag == 1) {
		jokbook(rand() % 8 + 1);

		textingBox();

		gotoxy(1, 21); printf("������ �����ߴ�...\n");
		Sleep(500);
		if (myknow <= 50) {
			gotoxy(5, 6); printf("��������������������������");
			gotoxy(5, 7);
			if (myknow > 50 - doJokbo.know) printf("�� <���� +%d> ��", 50 - myknow);
			else printf("�� <���� +5> ��");
			gotoxy(5, 8); printf("��������������������������");
		}	
		Sleep(500);
		if (myhp > abs(doJokbo.hp)) {
			gotoxy(5, 9); printf("��������������������������");
			gotoxy(5, 10); printf("�� <ü�� -3> ��");
			gotoxy(5, 11); printf("��������������������������");
		}
		controlStatus(doJokbo);
		showStatus();
	}
	// 1~3�� �ƴ� ���ڸ� �Է����� ��
	else if (choice < 1 || choice > 3) {
		textingBox();
		gotoxy(1, 21); printf("< @ ���� �������Դϴ�. >\n");
		_getch();
		study();
	}
	//Ȱ��ȭ���� ���� ������
	else {
		textingBox();
		gotoxy(1, 21); printf("< @ ���� Ȱ��ȭ���� ���� �������Դϴ�. >\n");
		_getch();
		study();
	}
}

/* �� */
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

	printf("[������ ���] ���ġ���� �����ϰ� ī������� �ϰ� �ִ�...\n");
	printf("���ġ �ϳ��� ���� ��︮�ڴ� ���� ������ �ϰ� �ִ�.\n\n");
	printf("1. ��Ŀ\n");
	printf("2. ��ī��\n");
	if (sol.spflag == 1) printf("3. �ָ��׸�\n");
	scanf_s("%d", &choice);

	if (choice == 1) {
		controlStatus(doPoker);
		printf("��Ŀ�� �ߴ�...\n");
		printf("<�� -3000�� >\n");
		printf("< �� +3 >\n");
	}
	else if (choice == 2) {
		controlStatus(doOnecard);
		printf("��ī�带 �ߴ�...\n");
		printf("< �� -1000�� >\n");
		printf("< �� +2 >\n");
	}
	else if (choice == 3 && sol.spflag == 1) {
		controlStatus(doSol);
		printf("�ָ��׸��� �ߴ�...\n");
		printf("< �� +3 >\n");
		printf("< ü�� -2 >\n");
	}
	else if (choice < 1 || choice > 3) {
		printf("< @ ���� �������Դϴ�. >\n");
	}
	else printf("< @ ���� Ȱ��ȭ���� ���� �������Դϴ�. >\n");
}

/*�˹��ϱ�*/
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

	printf("[�Խ��� ��] ���� ���� �Ƹ�����Ʈ ���� ���� �پ� �ִ�.\n");
	printf("� ���� �� ����?\n");
	printf("1. ���� ����\n");
	printf("2. â�� �۱�\n");
	printf("3. ���ѹ��� å������ �������.\n");
	printf("4. ���ѹ��� ���ΰ����� �������.\n");
	scanf_s("%d", &choice);

	if (choice == 1) {
		controlStatus(doGarden);
		printf("������ ������ ������...\n");
		printf("< �� +8000�� >\n");
		printf("< ü�� -1 >\n");
	}
	else if (choice == 2) {
		controlStatus(doWindow);
		printf("�б� â���� ������ �۾Ҵ�...\n");
		printf("< �� +10000�� >\n");
		printf("< ü�� -2 >\n");
	}
	else if (choice == 3) {
		controlStatus(doBag);
		printf("���ѹ��� ��� �� å������ ����־���...\n");
		printf("< �� +20000�� >\n");
		printf("< ü�� +1 >\n");
		printf("< ���� +1 >\n");
	}
	else if (choice == 4) {
		controlStatus(doShop);
		printf("��ȭ������ ���ѹ��� ���ΰ����� ����־���...\n");
		printf("< �� +22000�� >\n");
		printf("< ü�� +2 >\n");
		printf("< �� -1 >\n");
	}
	else {
		printf("< @ �Ұ����� �������Դϴ�. >");
	}
}