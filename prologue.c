#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

int prologue()
{
	int key;
	printf("- ���ѷα� - \n");
	Sleep(1000); 
	printf(" �� next \n");
	printf(" please enter \n"); 
	key=getch();
	if(key==13){
		system("cls");
		printf("�縳 ����-�� ����б��� �� �ΰ��� ������ �´�. \n\n");
		Sleep(2000);
		printf("�׷����� �� �б� �л��� ��� �����̾���, ������ �����Ա���....\n\n");
		Sleep(2000);
		printf("�׷��� �츮�� ���ΰ��� ģ���ϰ� �����ִ� ������ �л��鿡�� ���������� ���� �����ϴµ�..... \n\n");
		Sleep(2000);
		printf("�� start game \n"); 
		printf(" please enter \n");
		key=getch();
		if(key==13) return 1;
	}
	return 1;
}

int main()
{
	prologue();	
} 
