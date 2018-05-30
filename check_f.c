#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int check(int sam_f,int suhan_f,int yuni_f,int biju_f); // 호감도 모두 같은 확인 

int main()
{
	int choice=check(12,12,12,12); // 우선 임의로 호감도 지정  
	switch(choice)
	{
		case 1:
			printf("1 choice");
			break;
		case 2:
			printf("2 choice");
			break;
		case 3:
			printf("3 choice");
			break;
		case 4:
			printf("4 choice");
			break;
	}
}
int check(int sam_f,int suhan_f,int yuni_f,int biju_f) // 호감도 비교  
{
	srand(time(NULL));
	int choice; // 대화할 히로인 번호  
	int max=sam_f; // 가장 큰 값(호감도) 
	int i,j;
	int cnt_e = 0; // 비교했을 때 값이 같으면 +1 
	int index = 0; // 가장 큰 값 인덱스(번호) 
	int check[4]={sam_f,suhan_f,yuni_f,biju_f}; // 1 : sam, 2 : suhan, 3: yuni, 4: biju 
	for(i=0;i<4;i++){
		if(check[i]>max) { 	
			max=check[i]; // max 값 바꿔주기 
			index=i; // 가장 큰 값의 인덱스 번호 바꿔주기 ( 선택지 출력할 때 해당 번호 캐릭터 선택지 출력) 
			// printf("%d : %d\n",i,max); 	
		}
		else if(check[i]==max) {
			max=max; // max 값 동일 
 			cnt_e++; // 두 수가 같으므로 +1 
			// printf("%d : %d\n",i,max);
		}
		else if(check[i]<max) {
			max=max; // max 값 동일 
			// printf("%d : %d\n",i,max);
		}
	}
	if(cnt_e==4) // 4마리의 호감도가 모두 같을 경우 랜덤 돌려서 선택지 출력 
	{
		choice = rand()%4+1; // 1~4까지 랜덤 돌림 
		printf("%d\n",choice); 
		printf("%d\n",max);
		return choice; // 해당 번호 리턴  
	}
	else 
	{
		choice = index+1; // 가장 큰 값의 번호 (인덱스는 0~3이므로 +1) 
		printf("%d\n",max);
		return choice;
	}
	
}
