#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<locale.h>

void exerciseStats();//ü����ȸ �����̺�Ʈ
void examStats();//�߰���� �����̺�Ʈ
void exerciseHeart();//ü����ȸ ȣ�����̺�Ʈ
void examHeart();//����ȣ�����̺�Ʈ
void gameStats(),gameHeart();//�η縶�� ����, ȣ�����̺�Ʈ
void auctionStats(),auctionHeart();//��� ����, ȣ���� �̺�Ʈ

void s_1(),s_2(),s_3(),s_4(),s_5(),s_6(),s_7(),s_8();//�� ������� �̻ﵹ ����ѹ� �⿩�� �����
void k_1(),k_2(),k_3(),k_4(),k_5(),k_6(),k_7(),k_8();//������� ü����ȸ ����/ȣ����
void g_1(),g_2(),g_3(),g_4(),g_5(),g_6(),g_7(),g_8();//���� ����/ȣ����   �η縶�� ����/ȣ����
void z_1(),z_2(),z_3(),z_4(),z_5(),z_6(),z_7(),z_8();//��� ����/ȣ����

void p(int num) // ������ ��� 
{	
	switch(num)
	{
		case 1: //�ﵹ�� 
			printf("\n\n\t\t\t\t^@\n\n");
			break;
		case 2: // ���ѹ� 
			printf("\n\n\t\t\t\t\"@\n\n");
			break;
		case 3: // �⿩�� 
			printf("\n\n\t\t\t\tU@\n\n");
			break;
		case 4: // ���� 
			printf("\n\n\t\t\t\t!@\n\n");
			break; 
	}
}

int choice;//������ ����
char player[30];    //����...�ҽ��ڵ尡 �ʹ� ������...
void color(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
int main()
{
    _wsetlocale( LC_ALL, L"korean" );
   printf("�÷��̾��� �̸�?: ");
   scanf("%s",player);
    exerciseStats();
    system("pause>NULL");
    system("cls");
    exerciseHeart();
    system("pause>NULL");
    system("cls");
    examStats();
    system("pause>NULL");
    system("cls");
    examHeart();
    system("pause>NULL");
    system("cls");
    gameStats();
    system("pause>NULL");
    system("cls");
    gameHeart();
    system("pause>NULL");
    system("cls");
    auctionStats();
    system("pause>NULL");
    system("cls");
    auctionHeart();
    system("pause>NULL");
    system("cls");

}
void exerciseStats()
{
    printf("������ ü����ȸ��. �������� ���� �ɾ��?\n1.�̻ﵹ\n2.����ѹ�\n3.�⿩��\n4.�����\n\n");
    choice=0;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: system("cls");s_1();break;
        case 2: system("cls");k_1();break;
        case 3: system("cls");g_1();break;
        case 4: system("cls");z_1();break;
        default:
			printf("\n�ٽ� �Է��ϼ���");
			system("pause>NULL");
			system("cls");
			exerciseStats();
			break;
    }
}
void examStats()
{
    printf("�߰���� 1���� ���� ����. �������� ���� �ɾ��?\n1.�̻ﵹ\n2.����ѹ�\n3.�⿩��\n4.�����\n\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: system("cls");s_3();break;
        case 2: system("cls");k_3();break;
        case 3: system("cls");g_3();break;
        case 4: system("cls");z_3();break;
        default:
			printf("\n�ٽ� �Է��ϼ���\n");
			system("pause>NULL");
			system("cls");
			examStats();
			break;
    }
}
void exerciseHeart()
{
    printf("2�� 3�� ������ �ϰ� �Ǿ���\n");
    switch(choice)
    {
        case 1: system("cls");s_2();break;
        case 2: system("cls");k_2();break;
        case 3: system("cls");g_2();break;
        case 4: system("cls");z_2();break;
        default:
			printf("\n�ٽ� �Է��ϼ���\n");
			system("pause>NULL");
			system("cls");
			exerciseHeart();
			break;
    }
}
void examHeart()
{
    printf("������ ������,,,,, ���� ���� ���纸���� �Ѵ�\n");
    switch(choice)
    {
        case 1: system("cls");s_4();break;
        case 2: system("cls");k_4();break;
        case 3: system("cls");g_4();break;
        case 4: system("cls");z_4();break;
        default:
        	printf("\n�ٽ� �Է��ϼ���\n");
			system("pause>NULL");
			system("cls");
			exerciseStats();
			break;
    }
}
void gameStats()
{
    printf("��X���� ������ �Ϸ��� �Ѵ�. ������ ���� ����?\n1.�̻ﵹ\n2.����ѹ�\n3.�⿩��\n4.�����\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: system("cls");s_5();break;
        case 2: system("cls");k_5();break;
        case 3: system("cls");g_5();break;
        case 4: system("cls");z_5();break;
        default:
			printf("\n�ٽ� �Է��ϼ���\n");
			system("pause>NULL");
			system("cls");
			exerciseHeart();
			break;
    }
}
void gameHeart()
{
    printf("��X���� ���ڴ�...\n");
    switch(choice)
    {
        case 1: system("cls");s_6();break;
        case 2: system("cls");k_6();break;
        case 3: system("cls");g_6();break;
        case 4: system("cls");z_6();break;
        default : 
        	printf("\n�ٽ� �Է��ϼ���\n");
			system("pause>NULL");
			system("cls");
			examStats();
			break;
    }
}
void auctionStats()
{
    printf("�б����� ��Ű� ���۵Ƿ��� �Ѵ�. ������ ������ ���ΰ�?\n1.�̻ﵹ\n2.����ѹ�\n3.�⿩��\n4.�����\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: system("cls");s_7();break;
        case 2: system("cls");k_7();break;
        case 3: system("cls");g_7();break;
        case 4: system("cls");z_7();break;
        default:{
			printf("\n�ٽ� �Է��ϼ���\n");
			system("pause>NULL");
			system("cls");
			exerciseHeart();
			break;
		}
    }

}

void auctionHeart()
{
    printf("ģ�� �����̿� ���� ��Ÿ� �غ���!\n");
    switch(choice)
    {
        case 1: system("cls");s_8();break;
        case 2: system("cls");k_8();break;
        case 3: system("cls");g_8();break;
        case 4: system("cls");z_8();break;
        default :
        	printf("\n�ٽ� �Է��ϼ���\n");
			system("pause>NULL");
			system("cls");
			examStats();
			break;
    }

}
void s_1()
{
    color(9);
    p(1);
    color(15);
    printf("���ص� ü����ȸ��. ��ΰ� �𿩼� ���������ϳ�.... %s��/�� ��� ������?\n",player);
    printf("1.�ò����� �߳��� ��.\n2.�������� ������ ����� �������� �ؼ� �����ο��� Ȱ��ȭ��Ű��.\n");
    scanf("%d",&choice);

    if(choice==1)
    	printf("��...���� ���ٱ�! ��� �ž� ? �� ~ !(���� -10)\n");
    else if(choice==2)
        printf("���... �ǿܷ� ������ ���� ������ �ֱ���. ������ �����. ���θ� ���������� �ʴ� ���� ���� �߿�����.(����+10)\n");
    else
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	s_1();
    }
}
void k_1()
{
    color(10);
    p(2);
    color(15);
    printf("�ױ��� �ݸ޴� �츮 �� ������̺��� �δٱ�\n");
    printf("1.ü����ȸ�� �������� �𸣴±���\n2.�ʳ� ���� �ݼ������ٴ� �� ��԰� �־���\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("�� �� ����� �������� �𸣴±���(�۾�~��~! �ϳ��� �� ���� ��ġ)(��� -50000)\n");
    else if (choice==2)
        printf("�ƾ�.... ���� �̾��� %s��/�� ������ �� �ذ� �־��°� (��) �̰ų� �԰� ������ (���+50000)\n",player);
    else {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	k_1();
    }
}
void g_1()
{
    color(14);
    p(3);
    color(15);
    printf("�αٵα�~~ �� ���� �� ��÷ ! (�α��α��α��̱��α�,.,,,,) ��÷�ڴ�.... %s!!!\n",player);
    printf("1.���󤩶�������������\n2.(���ߵ��� ���ƺ���) �������� �̰� ����?\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("�⻵�ϴ� ����� �� ���� ������ :) (��+10)\n");
    else if(choice == 2)
        printf("oO(�� ��ȿ���ù�����) (��-10)\n");
	else {
		printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	g_1();
	}
}
void z_1()
{
    color(4);
    p(4);
    color(15);
    printf("(���Ͷ߸��� �ϴ� ��)\n(�̸�)!!! ����ƾ�� �����ϳ�!!!!�� �� ���� ������!!!!\n");
    printf("1.(����ֿ��� ���ָӴϸ� ¯���� ������)\n2.(��ũ������ ���� �ı��Ѵ�)\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("�̷� xxxx�� xx xxxxx���� xxx ��(�۾�~��!!`��~~��.... �÷��̾ ������ �ȴ�) (ü�� -20)\n");
    else if(choice == 2)
        printf("����... ��ũ���̾���.... �Ǽ��� û���� (ü��+20\n)\n");
    else
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	z_1();
	}
}
void s_2()
{
    color(9);
    p(1);
    color(15);
    printf("�̻ﵹ!\n\n");
    printf("(�̻ﵹ�� �Ѿ������� �Ѵ�...) ����~~!\n");
    printf("1.(���� ��Ƽ� �������ش�)\n2.(����� ������� ���ϰ� Ƣ����)\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("(�÷��̾��� �������� ���� �޺��� �������鼭 ������ �ı�ȿ��) ���� ������ �鵵 �ֱ���... �����, ���� (ȣ���� +15)\n");
    else if(choice == 2)
        printf("(�̻ﵹ�� �������� �Ͼ ��x�� ������ ���� ����� �����ߴ�) (ȣ���� -15, ü�� -5)\n");
    else {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	s_2();
	}
}
void k_2()
{
    color(10);
    p(2);
    color(15);
    printf("����ѹ�!!\n\n�̵� �������� �߸� ���� �Ⱦ�~!\n");
    printf("1.(�Ұ�)���� �ߵ� ���� ��\n2.�� ���ؼ�... �ƹ氡���� ����� ��ũ��带 �غ��߾�\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("���ٽ��� �� �ڽ� ���� ��!! (���𰡵� �����̵��� ����� ������...) (ȣ���� -15, ü�� -5)\n");
    else if(choice == 2)
        printf("��...��! �� ���� ������ �޴� �� �ƴ϶�! (ȣ���� +15)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	k_2();
	}
}
void g_2()
{
    color(14);
    p(3);
    color(15);
    printf("�⿩��!!\n\n%s��/�� ģ���� ������ �������̶� �پ�߰ڳ�~!\n",player);
    printf("1.�������� ���� �ƽ��ݾƿ�\n2.�λ��̶�� �����浵 ���� �޷����� ���ڳ׿�\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("����������������(ȣ���� -15, ü�� -1)\n");
    else if(choice == 2)
        printf("���...�ʹ� �������̴� ��Ӿ��^^(�÷��̾��� �������� ��Ÿ�Ѵ�) (ȣ���� +15, ü�� -1)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	g_2();
	}
}
void z_2()
{
    color(4);
    p(4);
    color(15);
    printf("\n\n�� ���� ���θ��� �͵���...�뼭..��... ���Ÿġ��! �� ���� ���Ѷ�!!!!!!!\n");
    printf("1.(�ִ��� ������ �޸���)\n2.�ƾ�...�ڳ� ����...! �ӻ��ٿ�罺����-�� 2�� nnȭ�� ������ xxx�� 3��° ���???\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("(���ִ� 100m 90���� ���� �ӷ����� ����� ���� ���� ����... ����� �����Ⱑ �Ǿ���) (ü�� -20)\n");
    else if(choice == 2)
        printf("(���۽��� ������ �������� ����Ǿ��� ���ִ� �ᱹ ���� ó������ 1���� ��ġ�� �Ǿ���.... ������.... ���� ������ ���� ��� �Ǿ���...)\n����� : �Ƴ�... %s��....\n%s : �� �׷�?\n����� : ����... (�ӹ�)(�β�) ����Ŀ� ����... �ӻ��ٿ�罺����-�� ���� ������??!??!?!?\n%s : ...! ��������! (ȣ���� +20)\n",player,player,player);
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	z_2();
	}
}
void s_3()
{
    color(9);
    p(1);
    color(15);
    printf("(���� ���� ��Ʈ�� �ٽ� �� �� ���� �ִ�)\n");
    printf("1.�� ���� Ʋ���� �ʾҾ�?\n2.3 5 3 ������ �̷�� �뷡��... ������ ������ ������� ������ (����� Ʈ������ �ϰ� �ִ�)\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("���.. ���� �׷���. �ϸ��͸� ū�� �� ���߾�. (���� +20)\n");
    else if(choice == 2)
        printf("�� �� �ٹ����ٷ�? �̿��Ұ��縮�� �ʺ��� �ȶ��ϰڴ� (���� -20)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	s_3();
	}
}
void k_3()
{
    color(10);
    p(2);
    color(15);
    printf("�� �̵��� ��� �� �԰� �� �� �Ŷ�!\n");
    printf("1.����...�ݼ�����...�ٸ����� (����)\n2.�� �׷� ������ ������ �ֿ��Ծ�߰ڳ�\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("���� ������ �ž�? ���� ���� 10% �ȿ� ��ŵ�? �� �� �ϰ� ��ġ�� �ֻ����� �ó�? (��� -20000)\n");
    else if(choice == 2)
        printf("������ �������̳� ���� �ֿ��Ծ (��� +20000)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	k_3();
	}
}
void g_3()
{
    color(14);
    p(3);
    color(15);
    printf("%s��/�� ������� ���� �ߴ�?^^\n",player);
    printf("1�׷��� �翬���� ��xġŲ\n2.���� ���� ���θ� �ϳ��� ��.�÷���;\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("���簳�� ����;; (�� -10)\n");
    else if (choice == 2)
        printf("ũ��~~ ����? �� ���� (�� +10)\n");
	else 
	{
		printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	g_3();
	}
}
void z_3()
{
    color(4);
    p(4);
    color(15);
    printf("������� ������ ü�³����\n");
    printf("1.�׷��ٰ� �λ������ϴ�?\n2.���� ���ڶ� �԰� ü�� ������\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("(�÷��̾ �й�����.) (ü�� -10)\n");
    else if(choice == 2)
        printf("(����)(����) (ü�� +10)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	z_3();
	}
}
void s_4()
{
    color(9);
    p(1);
    color(15);
    printf("�ﵹ�̶� ���� ���纻��....\n");
    printf("1. ....�� �� 0���ΰ���...\n2.!!!!! �� 100���̾�!!\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("������ �� ���� ���� ���� (ȣ���� -20)\n");
    else if(choice == 2)
        printf("������?! �����ؿ� (ȣ���� +20)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	s_4();
	}
}
void k_4()
{
    color(10);
    p(2);
    color(15);
    printf("���ѹ��� ���� ���纸�ڰ� �Ѵ�....\n");
    printf("1.�� 0���� �� ������.....\n2.���� 100���̾�..!!\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("�� ��굵 0���ݾ�? (ȣ���� -15)\n");
    else if (choice == 2)
        printf("�׷� �� �������� (ȣ���� +15)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	k_4();
	}
}
void g_4()
{
    color(14);
    p(3);
    color(15);
    printf("�̹� ���� ���� ��� ���� �� ����?....\n");
    printf("1.�˼��ؿ�...0���� �� ���ƿ�...\n2.ó������ 100�� �¾Ҿ��!!\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("���� ����ģ ������ ���� �� ����..? (ȣ���� -15)\n");
    else if(choice == 2)
        printf("��� �߉籸��, ���� ���赵 �� ���� (ȣ���� +15)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	g_4();
	}
}
void z_4()
{
    color(4);
    p(4);
    color(15);
    printf("�ڰ� �ִ� ���ָ� ���� ���� ���纻��..../n");
    printf("1.�̷�.... �̹��� 0���̳�....\n2.100���̾�..!! �ʵ� �׷�?\n");
    scanf("%d",&choice);

    if(choice==1)
        printf("��� ��ߴ� ������ �� �� ����.. (ȣ���� -15)\n");
    else if (choice == 2)
        printf("(��������) ���� �� �ó�? (ȣ���� +15)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	z_4();
	}
}
void s_5()
{
    color(9);
    p(1);
    color(15);
    printf("��....�� �ɷ����ȳ�,,,,, �Ʊ���� ��� ���� �ɸ��� �� ����\n");
    printf("1.���δ� ���ص� ��X������ ���ϴ� ���� ���� ���۰� ����(���� ��)\n2.���� ���� �ɷȴ°�? �̰� �� ���� �ɷ��ݾ�\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("(���� ��ħ) ���� ���Ƽ� ���� ���ڳ׿�. ��.��. (���� -10)\n");
    else if(choice == 2)
        printf("�׷���,,���� �̰͵� ���� ��մ°�? (���� +10)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	s_5();
	}
}
void k_5()
{
    color(10);
    p(2);
    color(15);
    printf("���� �� ���� ����ȳ� �̰� ��¼�� ���� �ʰ� �� �� �ִ� ���� ���� ��?\n");
    printf("1.ũ��,,,,���ϴ�,,,���� �ݼ����ΰ� ���⼭�� ���ϴٴ�,,\n2.(ũ��..) ��..�ϳ����̶�..! �� �ϳ����̶�..!(��)\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("(��X������ �� ���� ����.) (��� -20000)\n");
    else if (choice == 2)
        printf("���ؼ� �� ���ְڳ� (��) �̰ų� �԰� ������ ( ��� +20000)\n");
    else
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	k_5();
	}
}
void g_5()
{
    color(14);
    p(3);
    color(15);
    printf("�̹����� ��~���� �� ĭ ���̷� �� �ɷȳ� ����\n");
    printf("1.��.. �� �̷��� ���ؿ�? ���� ������ Ÿ¥�̱�� �߾��?\n2.�� �ű� �� ���̾��µ���?! �̹��� �ɷȳ׿䤻��������\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("�׷� �� ���� �ʴ°� �����̵� �������? (�� -20)\n");
    else if (choice == 2)
        printf("��? �����̳� �̹��� ���� �� ���ҳ�,, (�� +20)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	g_5();
	}
}
void z_5()
{
    color(4);
    p(4);
    color(15);
    printf("�̷� ��̾��� ������ �� ��! �̷��ٿ��� ��̳� �ϰڴ� !!\n");
    printf("1.���� ��� �ʸ� ���ϱ� �׷���? �׷��� ��� �����ϴϱ� ����ζ�����\n2.�׷� �̹� �Ǹ� ������ ���� � �ұ�?\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("�����....?(��ħ) (���� �ѹ��� ������) ( ü�� -10)\n");
    else if(choice == 2)
        printf("..! ��..���� �׷��� ��? ���� ��� �ʵ� ��� �ϰ� �;�����? (ü�� +10)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	z_5();
	}
}
void s_6()
{
    color(9);
    p(1);
    color(15);
    printf("��x���� ���ڴ�....\n");
    printf("1.����! ���� �̰��!! �� �������� ���ִ°� ���ֶ�\n2.�̱� �� �־��µ�,,,�ƽ���,,\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("������ ���� ����,, �̹��� ���ٰ� (ȣ���� +15) (ü�� +20)\n");
    else if (choice == 2)
        printf("�������� �̱�� �ٶ� �׷� �ʰ� ������ ���ִ°� �������?(����) (ȣ���� -15)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	s_6();
	}
}
void k_6()
{
    color(10);
    p(2);
    color(15);
    printf("��x���� ���ڴ�....");
    printf("1.��x�����ϸ� ���ѹ������ ���� �̰�פ����� ���ִ� �� ���ִ� �͵� �ؤ�l....(��)\n2.��...�������ݾ�....�ƽ���..\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("��..,,�̱�� ������ �׷��ϱ� �̰ų� �԰� ������ (���� �� �����⸦ �� �ȿ� ���ųִ´�) (ȣ���� +15)  (ü�� +20)");
    else if (choice == 2)
        printf("���� ��x�����ϸ� ���� �� ������ ���� �ʳ�(����) �Ƿ� �� �⸣�� ���� (ȣ���� -15)");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	k_6();
	}
}
void g_6()
{
    color(14);
    p(3);
    color(15);
    printf("��x���� ���ڴ�....");
    printf("1.���� �ƽ��ƽ��� �¸����׿� �׷� �ǹ̷� ���� ���ּ���\n2.������ ��¥ �ʹ� ���ϴ� �� �ƴϿ���? �̱� ���� ���ݾƿ�\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("�� ���� �̱�ٴ� ����Ѱ� ���� ���ٰ� (ȣ���� +20) (ü�� +20)\n");
    else if (choice == 2)
        printf("�� �̱���� �ϴٴ� ���� ���� �־��� ȣȣ�P (ȣ���� -20)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	g_6();
	}
}
void z_6()
{
    color(4);
    p(4);
    color(15);
    printf("��x���� ���ڴ�....");
    printf("1.����! �ᱹ ���� �̰ܹ��ȳ�! �̱� ������� ���� ���ٰ���? �׸��� ��Ϸ� ����!\n2.���� �������ݾ�.. ���� ���� �̻��ѵ�,, ���� ���Ӽ��� ����?!\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("���� ��� �ְ��� �� �������� ���� �����ٰ�,,, �׷��� ���������� ������ �� (ȣ���� +15) (ü�� +20)\n");
    else if (choice == 2)
        printf("�� �׷��Թۿ� �Ⱥ��ž�? �Ǹ��̳� ���� (ȣ���� -20)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	z_6();
	}
}
void s_7()
{
    color(9);
    p(1);
    color(15);
    printf("�л��źп��� �̷� �� �ص� �Ǵ°ž�? �ɸ��� �������� �� �����ž�\n");
    printf("1.���� �λ��� �� �� ���� ��ȸ�ε� �̷� �� ��ܾ���!\n2.��...���� �׷�����? \n");
    scanf("%d",&choice);
    if(choice==1)
        printf("(�׷����� ���� ���� ���� ���,,�̸� (���� -10)\n");
    else if(choice == 2)
        printf("�翬���� ��Ŵ� �����ѰŶ��! (���� +10)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	s_7();
	}
}
void k_7()
{
    color(10);
    p(2);
    color(15);
    printf("���Ⱑ �ٷ� �� ������! ���� ���ؼ� �� ���� ������ �� ���� ���ٱ�!\n");
    printf("1.����...�ݼ����� �ٸ���...�׷� ���� ���ϴ� �͵� �ϳ� ���� �� �־�?(�ʷ��ʷ�)\n2.�;�...�η��� ���� �׷� �� �ѹ� ��ƺ��� �ʹ�\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("�� ���ſ� ���̳� ġ���� ��� ���پ� ����� (��� -50000)\n");
    else if (choice == 2)
        printf("��..�츮�� ������� �Ǹ� �׷��� ���ݺ��� �������ٵ� �? (��� +50000)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	k_7();
	}
}
void g_7()
{
    color(14);
    p(3);
    color(15);
    printf("���� ���� ���� �� ���� ���� ���� ���� ����\n");
    printf("1....������ ������ ���غ��� ���� ���� ���� �ƴ���? \n2.�������� ���� ���� ���� ���� ���� �� ���ƿ� Ÿ���ǰ�?\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("��� ���ϴ� ���� ���� �� �»����� ���翴�ٱ� (�� -10)\n");
    else if (choice == 2)
        printf("Ÿ�� ���ϱ ���� �����׵� ���� �����ٱ�? (�� +10)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	g_7();
	}
}
void z_7()
{
    color(4);
    p(4);
    color(15);
    printf("(����) ���Ϸ� ��ⱸ�� ��ſ� ������?! ���� �� ��� ��!!!!\n");
    printf("1.���� �װ� ��ſ� ���� �� �� �� �ְھ�? ������ �� ������\n2.���� ��¥��? �ǿܷ� �� ���� �� �� �ְھ�\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("���� ���� ��ⱸ�� �� �� �°� �ͳ�? (ü�� -10)\n");
    else if(choice == 2)
        printf("���� �� ���� ���� �����̵� �ƴϴ�,,! ���� ���� �Ǹ� �����׵� �����ٰ� (ü�� +10)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	z_7();
	}
}
void s_8()
{
    color(9);
    p(1);
    color(15);
    printf("��ſ� ������ ���Դ�.\n");
    printf("1.��! ���� ������ �� �ʿ��� ���ݾ�? (�÷��̾ ����) �� ���� ����\n2.��? ��ſ� �������� �͵� ������ (������)\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("��¥��? ����,,, ������ �ʿ��Ѱ� ����,, (ȣ���� +15)\n");
    else if(choice == 2)
        printf("...... ���� �� ���� ��Կ�! (ȣ���� -15)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	s_8();
	}
}
void k_8()
{
    color(10);
    p(2);
    color(15);
    printf("��ſ� ���������� ���Դ�");
    printf("1.���� ���򿡵� ���������� �����±��� (�÷��̾ ����) �� ����! ��.. �̷��� �Ⱦ��Ϸ���?\n2.�ʴ� ���� ���������� �ý��ؼ� �Ⱦ�����? ���� ���̾Ƹ�� ������ �ϳ� �ٰ�\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("! ��,,,.,��!!! �翬���� �̷� �� ���� ������ �� �˾�? (�����) (ȣ���� +20)\n");
    else if(choice == 2 )
        printf("�̷� ������!!! �츮���� ���̾Ƹ�� ������ �θ��� �ηȴٰ�! (ȣ���� -20)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	k_8();
	}
}
void g_8()
{
    color(14);
    p(3);
    color(15);
    printf("�⿩�ϰ� �ְ��� Ÿ¥(?)���� ���� ����ǰ�� ��ſ� ���´�");
    printf("1.�� ���� ����? �̿� ���� �����Կ��� ���� �帱�Կ� (�÷��̾ ����) �����\n2.(�⿩���� �� ����ǰ�� ������ ����ģ��.) ��ſ��� ���� ���� ���ǵ��� ���׿�\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("......�̷� �� ������ ������ �����ϴٴ� ����� ������? (ȣ���� -10)\n");
    else if(choice == 2)
        printf("�ְ��� ����� �� �� ���� ���ϴ� �� �ϳ� ������ ������ ���� (ȣ���� +10)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	g_8();
	}
}
void z_8()
{
    color(4);
    p(4);
    color(15);
    printf("��ſ� ��ⱸ�� ���Դ�");
    printf("1.�� ���� �ʰ� ��� �;��ߴµ� �� ������ݾ�? (�÷��̾ ����) �� ����\n2.��ⱸ�� ������ ���� �ٵ� �ʴ� �̹� ���ݾ�? �ٸ��ų� ����\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("��,,,���� ���� �̷��� �� �൵ ����µ� (ȣ���� +10)\n");
    else if(choice == 2)
        printf("( ....���� �;����ǵ�...) (ȣ���� -10)\n");
    else 
    {
    	printf("�ٽ� �Է��ϼ���\n");
    	Sleep(2000);
    	z_8();
	}
}
