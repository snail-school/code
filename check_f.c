#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int check(int sam_f,int suhan_f,int yuni_f,int biju_f); // ȣ���� ��� ���� Ȯ�� 

int main()
{
	int choice=check(12,12,12,12); // �켱 ���Ƿ� ȣ���� ����  
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
int check(int sam_f,int suhan_f,int yuni_f,int biju_f) // ȣ���� ��  
{
	srand(time(NULL));
	int choice; // ��ȭ�� ������ ��ȣ  
	int max=sam_f; // ���� ū ��(ȣ����) 
	int i,j;
	int cnt_e = 0; // ������ �� ���� ������ +1 
	int index = 0; // ���� ū �� �ε���(��ȣ) 
	int check[4]={sam_f,suhan_f,yuni_f,biju_f}; // 1 : sam, 2 : suhan, 3: yuni, 4: biju 
	for(i=0;i<4;i++){
		if(check[i]>max) { 	
			max=check[i]; // max �� �ٲ��ֱ� 
			index=i; // ���� ū ���� �ε��� ��ȣ �ٲ��ֱ� ( ������ ����� �� �ش� ��ȣ ĳ���� ������ ���) 
			// printf("%d : %d\n",i,max); 	
		}
		else if(check[i]==max) {
			max=max; // max �� ���� 
 			cnt_e++; // �� ���� �����Ƿ� +1 
			// printf("%d : %d\n",i,max);
		}
		else if(check[i]<max) {
			max=max; // max �� ���� 
			// printf("%d : %d\n",i,max);
		}
	}
	if(cnt_e==4) // 4������ ȣ������ ��� ���� ��� ���� ������ ������ ��� 
	{
		choice = rand()%4+1; // 1~4���� ���� ���� 
		printf("%d\n",choice); 
		printf("%d\n",max);
		return choice; // �ش� ��ȣ ����  
	}
	else 
	{
		choice = index+1; // ���� ū ���� ��ȣ (�ε����� 0~3�̹Ƿ� +1) 
		printf("%d\n",max);
		return choice;
	}
	
}
