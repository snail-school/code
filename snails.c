#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

int snails();

int main()
{
	snails(); 
}

int snails(){
	int key;
	printf("���ΰ��� ���п��� 4������ �����̰� ���ΰ����� �ٰ����µ�...\n");
	Sleep(1000); 
	printf(" �� next \n");
	printf(" please enter \n"); 
	key=getch();
	if(key==13){
		system("cls");
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 11); 
		printf("^@\n");
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15); 
		printf(" �̻ﵹ \n");
		printf(" Ư�� : ���� \n"); 
		Sleep(2000);
		printf("�¾�� �� ���� ���� 1���� ���� �� ���� ������\n");
		printf("�ø��ǾƵ�� ���� �Ͼ����Ѵ�. \n");
		Sleep(2000);
		printf("�׸���� �Ȱ��� ������ �Ƹ��ٿ� ���������̴�.\n");
		printf("����ϰ� ������ ���������� ��� ������ �޸��� ������ �ִ�^^.\n");
		Sleep(2000);
	}
	printf(" �� next \n");
	printf(" please enter \n"); 
	key=getch();
	if(key==13){
		system("cls");
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 10);
		printf("\"@\n");
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
		printf(" �� ���ѹ�  \n");
		printf(" Ư�� : ��� \n");
		Sleep(2000);
		printf("�縳 ����-�ϰ���б� �̻����� ��뵶������ ���� �б��� \n");
		printf("(�񸮷�) �������� ������̴�. \n");
		Sleep(2000);
		printf("�����̵尡 �ſ� ���� ���� �Ⱦ��ϴ� �����̴�.\n");
		printf("���ΰ����� ������ ��������, ���� ������ ���� �����ϴµ�.....:o .\n");
		Sleep(2000);
	}
	printf(" �� next \n");
	printf(" please enter \n"); 
	key=getch();
	if(key==13){
		system("cls");
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 14); 
		printf("U@\n");
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
		printf(" �⿩�� \n");
		printf(" Ư�� : �� \n");
		Sleep(2000);
		printf(" ���� �� ���ΰ� ���� ���Ӽ������̸� ��û�� ������ �ڶ��Ѵ�.  \n");
		printf(" �׻� �����ϰ� ���� �ٴϸ� ������ �Ƴ��� �ʴ� ������ ���... �ƴ� ������\n");
		Sleep(2000);
		printf("��� ������ ���Ű� �ִٴµ�..............!!!\n");
		Sleep(2000);
	}
	printf(" �� next \n");
	printf(" please enter \n"); 
	key=getch();
	if(key==13){
		system("cls");
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 12); 
		printf("!@\n");
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 15);
		printf(" ����� \n");
		printf(" Ư�� : ü�� \n");
		Sleep(2000);
		printf(" û���� �һ縣�� �ǰ��̸� �ڶ��ϴ� ü����ȸ�� �����ϴ� ���̴�. \n");
		printf(" ���� 100���� 90�ʶ�� ��û�� �ű���� �����ϰ� �ִ�. \n");
		Sleep(2000);
		printf(" �Ƿ�, �ٷ�, �Ϸ�, �������(...) �� ��� ü������ ��ҿ��� �������� �ɰ��Ѵ�.\n");
		printf(" �ٸ� ���ο� �ڽ��� ���ٰ� �Ѵ�.... �����ϰ� �밨�� �����ٺ��� ���̴�...\n");
		Sleep(2000);
	}
	return 1;	
}
