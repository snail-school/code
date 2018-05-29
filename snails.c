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
	system("COLOR F0");
	printf("주인공이 전학오고 4마리의 달팽이가 주인공에게 다가오는데...\n");
	Sleep(1000); 
	printf(" ▶ next \n");
	printf(" please enter \n"); 
	key=getch();
	if(key==13){
		system("cls");
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 1+15*16); // 1=BLUE (글자), 15=WHITE (배경) 
		printf("^@\n");
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0+15*16); // 0=BLACK (글자) 
		printf(" 이삼돌 \n");
		printf(" 특기 : 지력 \n"); 
		Sleep(2000);
		printf("태어나서 한 번도 전교 1등을 놓쳐 본 적이 없으며\n");
		printf("올림피아드는 상을 싹쓸이한다. \n");
		Sleep(2000);
		printf("네모뿔테 안경을 썼으며 아름다운 공설미인이다.\n");
		printf("깐깐하고 엄격한 성격이지만 사실 다정한 뒷면을 가지고 있다^^.\n");
		Sleep(2000);
	}
	printf(" ▶ next \n");
	printf(" please enter \n"); 
	key=getch();
	if(key==13){
		system("cls");
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 2+15*16); // 2=GREEN 
		printf("^@\n");
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0+15*16);
		printf(" 김 수한무  \n");
		printf(" 특기 : 재력 \n");
		Sleep(2000);
		printf("사립 스네-일고등학교 이사장의 삼대독녀이자 장차 학교를 \n");
		printf("(비리로) 물려받을 상속자이다. \n");
		Sleep(2000);
		printf("프라이드가 매우 높고 지기 싫어하는 성격이다.\n");
		printf("주인공에게 짓궃게 대하지만, 점점 마음을 열기 시작하는데.....:o .\n");
		Sleep(2000);
	}
	printf(" ▶ next \n");
	printf(" please enter \n"); 
	key=getch();
	if(key==13){
		system("cls");
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 6+15*16); // 6=YELLOW
		printf("^@\n");
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0+15*16);
		printf(" 기여니 \n");
		printf(" 특기 : 운 \n");
		Sleep(2000);
		printf(" 전학 온 주인공 반의 담임선생님이며 엄청난 동안을 자랑한다.  \n");
		printf(" 항상 다정하게 웃고 다니며 조언을 아끼지 않는 다정한 사라ㅁ... 아니 달팽이\n");
		Sleep(2000);
		printf("사실 숨겨진 과거가 있다는데..............!!!\n");
		Sleep(2000);
	}
	printf(" ▶ next \n");
	printf(" please enter \n"); 
	key=getch();
	if(key==13){
		system("cls");
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 4+15*16); // 4=RED
		printf("^@\n");
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0+15*16);
		printf(" 장비주 \n");
		printf(" 특기 : 체력 \n");
		Sleep(2000);
		printf(" 청춘을 불사르는 건강미를 자랑하는 체육대회를 재패하는 자이다. \n");
		printf(" 무려 100미터 90초라는 엄청난 신기록을 보유하고 있다. \n");
		Sleep(2000);
		printf(" 악력, 근력, 완력, 껍데기력(...) 등 모든 체력적인 요소에서 전교생을 능가한다.\n");
		printf(" 다만 공부에 자신이 없다고 한다.... 털털하고 용감한 열혈바보인 것이다...\n");
		Sleep(2000);
	}
	return 1;	
}
