#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

int prologue()
{
	int key;
	printf("- 프롤로그 - \n");
	Sleep(1000); 
	printf(" ▶ next \n");
	printf(" please enter \n"); 
	key=getch();
	if(key==13){
		system("cls");
		printf("사립 스네-일 고등학교에 한 인간이 전학을 온다. \n\n");
		Sleep(2000);
		printf("그렇지만 그 학교 학생은 모두 달팽이었고, 심지어 선생님까지....\n\n");
		Sleep(2000);
		printf("그러나 우리의 주인공은 친절하고 개성있는 달팽이 학생들에게 점점마음을 열기 시작하는데..... \n\n");
		Sleep(2000);
		printf("▶ start game \n"); 
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
