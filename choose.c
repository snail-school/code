#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<locale.h>

void exerciseStats();//체육대회 스탯이벤트
void examStats();//중간고사 스탯이벤트
void exerciseHeart();//체육대회 호감도이벤트
void examHeart();//시험호감도이벤트
void gameStats(),gameHeart();//부루마블 스탯, 호감도이벤트
void auctionStats(),auctionHeart();//경매 스탯, 호감도 이벤트

void s_1(),s_2(),s_3(),s_4(),s_5(),s_6(),s_7(),s_8();//각 순서대로 이삼돌 김수한무 기여니 장비주
void k_1(),k_2(),k_3(),k_4(),k_5(),k_6(),k_7(),k_8();//순서대로 체육대회 스탯/호감도
void g_1(),g_2(),g_3(),g_4(),g_5(),g_6(),g_7(),g_8();//시험 스탯/호감도   부루마블 스탯/호감도
void z_1(),z_2(),z_3(),z_4(),z_5(),z_6(),z_7(),z_8();//경매 스탯/호감도

void p(int num) // 달팽이 출력 
{	
	switch(num)
	{
		case 1: //삼돌이 
			printf("\n\n\t\t\t\t^@\n\n");
			break;
		case 2: // 수한무 
			printf("\n\n\t\t\t\t\"@\n\n");
			break;
		case 3: // 기여니 
			printf("\n\n\t\t\t\tU@\n\n");
			break;
		case 4: // 비주 
			printf("\n\n\t\t\t\t!@\n\n");
			break; 
	}
}

int choice;//선택지 선택
char player[30];    //으윽...소스코드가 너무 더럽다...
void color(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
int main()
{
    _wsetlocale( LC_ALL, L"korean" );
   printf("플레이어의 이름?: ");
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
    printf("오늘은 체육대회날. 누구에게 말을 걸어볼까?\n1.이삼돌\n2.김수한무\n3.기여니\n4.장비주\n\n");
    choice=0;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: system("cls");s_1();break;
        case 2: system("cls");k_1();break;
        case 3: system("cls");g_1();break;
        case 4: system("cls");z_1();break;
        default:
			printf("\n다시 입력하세요");
			system("pause>NULL");
			system("cls");
			exerciseStats();
			break;
    }
}
void examStats()
{
    printf("중간고사 1교시 시작 직전. 누구에게 말을 걸어볼까?\n1.이삼돌\n2.김수한무\n3.기여니\n4.장비주\n\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: system("cls");s_3();break;
        case 2: system("cls");k_3();break;
        case 3: system("cls");g_3();break;
        case 4: system("cls");z_3();break;
        default:
			printf("\n다시 입력하세요\n");
			system("pause>NULL");
			system("cls");
			examStats();
			break;
    }
}
void exerciseHeart()
{
    printf("2인 3각 게임을 하게 되었다\n");
    switch(choice)
    {
        case 1: system("cls");s_2();break;
        case 2: system("cls");k_2();break;
        case 3: system("cls");g_2();break;
        case 4: system("cls");z_2();break;
        default:
			printf("\n다시 입력하세요\n");
			system("pause>NULL");
			system("cls");
			exerciseHeart();
			break;
    }
}
void examHeart()
{
    printf("시험이 끝나고,,,,, 시험 답을 맞춰보려고 한다\n");
    switch(choice)
    {
        case 1: system("cls");s_4();break;
        case 2: system("cls");k_4();break;
        case 3: system("cls");g_4();break;
        case 4: system("cls");z_4();break;
        default:
        	printf("\n다시 입력하세요\n");
			system("pause>NULL");
			system("cls");
			exerciseStats();
			break;
    }
}
void gameStats()
{
    printf("부X마블 게임을 하려고 한다. 누구와 같이 하지?\n1.이삼돌\n2.김수한무\n3.기여니\n4.장비주\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: system("cls");s_5();break;
        case 2: system("cls");k_5();break;
        case 3: system("cls");g_5();break;
        case 4: system("cls");z_5();break;
        default:
			printf("\n다시 입력하세요\n");
			system("pause>NULL");
			system("cls");
			exerciseHeart();
			break;
    }
}
void gameHeart()
{
    printf("부X마블 승자는...\n");
    switch(choice)
    {
        case 1: system("cls");s_6();break;
        case 2: system("cls");k_6();break;
        case 3: system("cls");g_6();break;
        case 4: system("cls");z_6();break;
        default : 
        	printf("\n다시 입력하세요\n");
			system("pause>NULL");
			system("cls");
			examStats();
			break;
    }
}
void auctionStats()
{
    printf("학교에서 경매가 시작되려고 한다. 누구와 참가할 것인가?\n1.이삼돌\n2.김수한무\n3.기여니\n4.장비주\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: system("cls");s_7();break;
        case 2: system("cls");k_7();break;
        case 3: system("cls");g_7();break;
        case 4: system("cls");z_7();break;
        default:{
			printf("\n다시 입력하세요\n");
			system("pause>NULL");
			system("cls");
			exerciseHeart();
			break;
		}
    }

}

void auctionHeart()
{
    printf("친한 달팽이와 같이 경매를 해보자!\n");
    switch(choice)
    {
        case 1: system("cls");s_8();break;
        case 2: system("cls");k_8();break;
        case 3: system("cls");g_8();break;
        case 4: system("cls");z_8();break;
        default :
        	printf("\n다시 입력하세요\n");
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
    printf("올해도 체육대회야. 모두가 모여서 왁자지껄하네.... %s은/는 어떻게 생각해?\n",player);
    printf("1.시끄럽고 발냄새 나.\n2.엔돌핀의 생산은 기분을 좋아지게 해서 전전두엽을 활성화시키지.\n");
    scanf("%d",&choice);

    if(choice==1)
    	printf("난...발이 없다구! 놀리는 거야 ? 흥 ~ !(지력 -10)\n");
    else if(choice==2)
        printf("어머... 의외로 지적인 면을 가지고 있구나. 마음에 들었어. 공부를 게을리하지 않는 것은 정말 중요하지.(지력+10)\n");
    else
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	s_1();
    }
}
void k_1()
{
    color(10);
    p(2);
    color(15);
    printf("그까짓 금메달 우리 집 개목걸이보다 싸다구\n");
    printf("1.체육대회의 소중함을 모르는구나\n2.너네 집이 금수저였다는 걸 까먹고 있었어\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("넌 네 목숨의 소중함을 모르는구나(퍼어~억~! 하나도 안 아픈 펀치)(재력 -50000)\n");
    else if (choice==2)
        printf("아앗.... 정말 미안해 %s이/가 가난한 걸 잊고 있었는걸 (쑻) 이거나 먹고 떨어져 (재력+50000)\n",player);
    else {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	k_1();
    }
}
void g_1()
{
    color(14);
    p(3);
    color(15);
    printf("두근두근~~ ♥ 행운권 ☆ 추첨 ! (두구두구두구ㅜ구두구,.,,,,) 당첨자는.... %s!!!\n",player);
    printf("1.우라라ㄹ락ㅏ가하하핚ㄱ\n2.(관중들을 돌아보며) 느이집엔 이거 읎지?\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("기뻐하는 모습이 참 보기 좋구나 :) (운+10)\n");
    else if(choice == 2)
        printf("oO(저 불효막시무스가) (운-10)\n");
	else {
		printf("다시 입력하세요\n");
    	Sleep(2000);
    	g_1();
	}
}
void z_1()
{
    color(4);
    p(4);
    color(15);
    printf("(박터뜨리기 하는 중)\n(이름)!!! 프로틴이 부족하냐!!!!좀 더 세게 던져라!!!!\n");
    printf("1.(장비주에게 콩주머니를 짱세게 던진다)\n2.(덩크슛으로 박을 파괴한다)\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("이런 xxxx할 xx xxxxx같은 xxx 가(퍼억~퍽!!`퍽~~퍽.... 플레이어가 개떡이 된다) (체력 -20)\n");
    else if(choice == 2)
        printf("멋진... 덩크슛이었다.... 악수를 청하지 (체력+20\n)\n");
    else
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	z_1();
	}
}
void s_2()
{
    color(9);
    p(1);
    color(15);
    printf("이삼돌!\n\n");
    printf("(이삼돌이 넘어지려고 한다...) 워메~~!\n");
    printf("1.(손을 잡아서 일으켜준다)\n2.(당신은 ㅅㄱ라고 말하고선 튀었다)\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("(플레이어의 뒤쪽으로 강한 햇빛이 비춰지면서 오지는 후광효과) 은근 다정한 면도 있구나... 놀랐어, 고마워 (호감도 +15)\n");
    else if(choice == 2)
        printf("(이삼돌은 기적같이 일어나 수x의 정석을 던져 당신을 가격했다) (호감도 -15, 체력 -5)\n");
    else {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	s_2();
	}
}
void k_2()
{
    color(10);
    p(2);
    color(15);
    printf("김수한무!!\n\n이딴 거적때기 발목에 묶기 싫어~!\n");
    printf("1.(소곤)묶을 발도 없는 게\n2.널 위해서... 아방가르드 양식의 실크밴드를 준비했어\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("세바스찬 이 자식 끌고 가!! (보디가드 달팽이들이 당신을 끌고간다...) (호감도 -15, 체력 -5)\n");
    else if(choice == 2)
        printf("흐...흥! 따 딱히 고마워서 받는 건 아니라구! (호감도 +15)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	k_2();
	}
}
void g_2()
{
    color(14);
    p(3);
    color(15);
    printf("기여니!!\n\n%s은/는 친구가 없으니 선생님이랑 뛰어야겠네~!\n",player);
    printf("1.선생님이 제일 아싸잖아요\n2.인생이라는 마라톤도 같이 달렸으면 좋겠네요\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("凸凸凸凸凸凸凸凸(호감도 -15, 체력 -1)\n");
    else if(choice == 2)
        printf("어머...너무 낭만적이당 어머어멍^^(플레이어의 옆구리를 강타한다) (호감도 +15, 체력 -1)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	g_2();
	}
}
void z_2()
{
    color(4);
    p(4);
    color(15);
    printf("\n\n내 앞을 가로막는 것들은...용서..용... 용사타치여! 다 길을 비켜라!!!!!!!\n");
    printf("1.(최대한 빠르게 달린다)\n2.아앗...코노 대사와...! 앙상블☆용사스네이-루 2기 nn화에 나오는 xxx의 3번째 대사???\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("(비주는 100m 90초의 어마어마한 속력으로 당신을 질질 끌고 갔다... 당신은 누데기가 되었다) (체력 -20)\n");
    else if(choice == 2)
        printf("(갑작스런 공감대 형성으로 동요되었던 비주는 결국 난생 처음으로 1등을 놓치게 되었다.... 하지만.... 더욱 소중한 것을 얻게 되었다...)\n장비주 : 아노... %s쿤....\n%s : 왜 그래?\n장비주 : 오늘... (머뭇)(부끄) 방과후에 나랑... 앙상블☆용사스네이-루 보지 않을래??!??!?!?\n%s : ...! 물론이지! (호감도 +20)\n",player,player,player);
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	z_2();
	}
}
void s_3()
{
    color(9);
    p(1);
    color(15);
    printf("(수학 정리 노트를 다시 한 번 보고 있다)\n");
    printf("1.이 증명 틀리지 않았어?\n2.3 5 3 구조를 이루는 노래는... 링딩동 링딩동 링디기디기 링딩딩 (당신은 트롤짓을 하고 있다)\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("어머.. 정말 그러네. 하마터면 큰일 날 뻔했어. (지력 +20)\n");
    else if(choice == 2)
        printf("입 좀 다물어줄래? 미역불가사리도 너보단 똑똑하겠다 (지력 -20)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	s_3();
	}
}
void k_3()
{
    color(10);
    p(2);
    color(15);
    printf("난 이딴거 없어도 잘 먹고 잘 살 거라구!\n");
    printf("1.역시...금수저는...다르구나 (측은)\n2.난 그럼 옆에서 열심히 주워먹어야겠네\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("뭘로 생각한 거야? 나도 전교 10% 안에 들거든? 날 빽 믿고 깝치는 애새끼로 봤냐? (재력 -20000)\n");
    else if(choice == 2)
        printf("착실한 시종놈이네 옛다 주워먹어랴 (재력 +20000)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	k_3();
	}
}
void g_3()
{
    color(14);
    p(3);
    color(15);
    printf("%s은/는 시험공부 많이 했니?^^\n",player);
    printf("1그럼요 당연하죠 네x치킨\n2.요즘 누가 공부를 하나요 촌.시럽게;\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("아재개그 극혐;; (운 -10)\n");
    else if (choice == 2)
        printf("크으~~ ㅇㅈ? ㅇ ㅇㅈ (운 +10)\n");
	else 
	{
		printf("다시 입력하세요\n");
    	Sleep(2000);
    	g_3();
	}
}
void z_3()
{
    color(4);
    p(4);
    color(15);
    printf("시험공부 같은거 체력낭비라구\n");
    printf("1.그렇다고 인생낭비하니?\n2.여기 과자라도 먹고 체력 보충해\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("(플레이어를 패버린다.) (체력 -10)\n");
    else if(choice == 2)
        printf("(감동)(찌잉) (체력 +10)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	z_3();
	}
}
void s_4()
{
    color(9);
    p(1);
    color(15);
    printf("삼돌이랑 답을 맞춰본다....\n");
    printf("1. ....나 왜 0점인거지...\n2.!!!!! 나 100점이야!!\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("다음에 잘 보면 되죠 ㅎㅎ (호감도 -20)\n");
    else if(choice == 2)
        printf("정말요?! 축하해요 (호감도 +20)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	s_4();
	}
}
void k_4()
{
    color(10);
    p(2);
    color(15);
    printf("수한무가 답을 맞춰보자고 한다....\n");
    printf("1.나 0점인 것 같은데.....\n2.내가 100점이야..!!\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("넌 재산도 0이잖아? (호감도 -15)\n");
    else if (choice == 2)
        printf("그런 거 껌값이지 (호감도 +15)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	k_4();
	}
}
void g_4()
{
    color(14);
    p(3);
    color(15);
    printf("이번 시험 점수 어떻게 나온 것 같니?....\n");
    printf("1.죄송해요...0점인 것 같아요...\n2.처음으로 100점 맞았어요!!\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("내가 가르친 보람이 없는 것 같네..? (호감도 -15)\n");
    else if(choice == 2)
        printf("어머 잘됬구나, 다음 시험도 잘 보렴 (호감도 +15)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	g_4();
	}
}
void z_4()
{
    color(4);
    p(4);
    color(15);
    printf("자고 있던 비주를 깨워 답을 맞춰본다..../n");
    printf("1.이런.... 이번에 0점이네....\n2.100점이야..!! 너도 그래?\n");
    scanf("%d",&choice);

    if(choice==1)
        printf("어떻게 운동했던 나보다 못 볼 수가.. (호감도 -15)\n");
    else if (choice == 2)
        printf("(말돌려서) 시험 잘 봤네? (호감도 +15)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	z_4();
	}
}
void s_5()
{
    color(9);
    p(1);
    color(15);
    printf("앗....또 걸려버렸네,,,,, 아까부터 계속 나만 걸리는 것 같아\n");
    printf("1.공부는 잘해도 부X마블은 못하는 구나 운이 나쁜가 보네(웃음 꾹)\n2.나도 많이 걸렸는걸? 이것 봐 나도 걸렸잖아\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("(깊은 빡침) 운이 좋아서 정말 좋겠네요. 정.말. (지력 -10)\n");
    else if(choice == 2)
        printf("그러네,,후후 이것도 나름 재밌는걸? (지력 +10)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	s_5();
	}
}
void k_5()
{
    color(10);
    p(2);
    color(15);
    printf("내가 또 땅을 사버렸네 이걸 어쩌나 이제 너가 살 수 있는 땅은 없는 걸?\n");
    printf("1.크읔,,,,분하다,,,설마 금수저인게 여기서도 통하다니,,\n2.(크윽..) 땅..하나만이라도..! 땅 하나만이라도..!(비굴)\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("(부X마블에서 떼 돈을 번다.) (재력 -20000)\n");
    else if (choice == 2)
        printf("비굴해서 못 봐주겠네 (휙) 이거나 먹고 떨어져 ( 재력 +20000)\n");
    else
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	k_5();
	}
}
void g_5()
{
    color(14);
    p(3);
    color(15);
    printf("이번에도 아~쉽게 한 칸 차이로 안 걸렸네 ㅎㅎ\n");
    printf("1.으.. 왜 이렇게 잘해요? 무슨 전생에 타짜이기라도 했어요?\n2.엇 거기 제 땅이었는데요?! 이번엔 걸렸네요ㅋㅋㅋㅋㅋ\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("그런 건 묻지 않는게 달팽이된 도리라고? (운 -20)\n");
    else if (choice == 2)
        printf("음? 정말이네 이번만 운이 안 좋았네,, (운 +20)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	g_5();
	}
}
void z_5()
{
    color(4);
    p(4);
    color(15);
    printf("이런 재미없는 게임을 왜 해! 이럴바에는 운동이나 하겠다 !!\n");
    printf("1.에이 계속 너만 지니까 그렇지? 그렇게 운동만 좋아하니까 우락부락하지\n2.그럼 이번 판만 끝내고 같이 운동 할까?\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("뭐라고....?(빡침) (강한 한방을 날린다) ( 체력 -10)\n");
    else if(choice == 2)
        printf("..! 저..정말 그래도 돼? 뭐야 사실 너도 운동이 하고 싶었구나? (체력 +10)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	z_5();
	}
}
void s_6()
{
    color(9);
    p(1);
    color(15);
    printf("부x마블 승자는....\n");
    printf("1.오예! 내가 이겼다!! 나 매점에서 맛있는거 사주라\n2.이길 수 있었는데,,,아쉽다,,\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("축하해 ㅎㅎ 에휴,, 이번만 사줄게 (호감도 +15) (체력 +20)\n");
    else if (choice == 2)
        printf("다음번엔 이기길 바라 그럼 너가 나한테 맛있는거 사줘야지?(웃음) (호감도 -15)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	s_6();
	}
}
void k_6()
{
    color(10);
    p(2);
    color(15);
    printf("부x마블 승자는....");
    printf("1.부x마블하면 수한무라더니 내가 이겼네ㅋㅋㅋ 맛있는 거 사주는 것도 잊ㅈl....(컥)\n2.아...져버렸잖아....아쉽다..\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("흥..,,이긴건 축하해 그러니까 이거나 먹고 떨어져 (과자 한 무더기를 입 안에 쑤셔넣는다) (호감도 +15)  (체력 +20)");
    else if (choice == 2)
        printf("역시 부x마블하면 나지 내 적수도 되지 않네(웃음) 실력 더 기르고 오라구 (호감도 -15)");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	k_6();
	}
}
void g_6()
{
    color(14);
    p(3);
    color(15);
    printf("부x마블 승자는....");
    printf("1.정말 아슬아슬한 승리였네요 그런 의미로 과자 사주세요\n2.선생님 진짜 너무 잘하는 거 아니에요? 이길 수가 없잖아요\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("날 상대로 이기다니 대단한걸 좋아 사줄게 (호감도 +20) (체력 +20)\n");
    else if (choice == 2)
        printf("날 이기려고 하다니 아직 한참 멀었지 호호홓 (호감도 -20)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	g_6();
	}
}
void z_6()
{
    color(4);
    p(4);
    color(15);
    printf("부x마블 승자는....");
    printf("1.예이! 결국 내가 이겨버렸네! 이긴 기념으로 과자 사줄거지? 그리고 운동하러 가자!\n2.에잇 져버렸잖아.. 내가 진게 이상한데,, 뭔가 속임수라도 썼지?!\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("역시 운동이 최고지 난 원래부터 관심 없었다고,,, 그래도 과자정도야 사주지 뭐 (호감도 +15) (체력 +20)\n");
    else if (choice == 2)
        printf("날 그렇게밖에 안본거야? 실망이네 정말 (호감도 -20)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	z_6();
	}
}
void s_7()
{
    color(9);
    p(1);
    color(15);
    printf("학생신분에서 이런 거 해도 되는거야? 걸리면 퇴학으로 안 끝날거야\n");
    printf("1.에이 인생의 한 번 뿐인 기회인데 이럴 때 즐겨야지!\n2.아...역시 그렇겠지? \n");
    scanf("%d",&choice);
    if(choice==1)
        printf("(그런가요 저는 별로 관심 없어서,,이만 (지력 -10)\n");
    else if(choice == 2)
        printf("당연하지 경매는 위험한거라고! (지력 +10)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	s_7();
	}
}
void k_7()
{
    color(10);
    p(2);
    color(15);
    printf("여기가 바로 내 무대지! 내가 원해서 못 가진 물건은 한 개도 없다구!\n");
    printf("1.역시...금수저는 다르네...그럼 내가 원하는 것도 하나 해줄 수 있어?(초롱초롱)\n2.와아...부럽다 나도 그런 삶 한번 살아보고 싶다\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("그 역거운 눈이나 치우지 어디에 빌붙어 살려고 (재력 -50000)\n");
    else if (choice == 2)
        printf("흠..우리집 사용인이 되면 그래도 지금보다 괜찮을텐데 어때? (재력 +50000)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	k_7();
	}
}
void g_7()
{
    color(14);
    p(3);
    color(15);
    printf("나도 가끔 아주 싼 값에 얻을 때가 있지 후훗\n");
    printf("1....선생님 솔직히 말해봐요 원래 직업 교사 아니죠? \n2.선생님은 가끔 보면 정말 운이 좋은 것 같아요 타고난건가?\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("어머 못하는 말이 없어 난 태생부터 교사였다구 (운 -10)\n");
    else if (choice == 2)
        printf("타고난 거일까나 후훗 너한테도 조금 나눠줄까? (운 +10)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	g_7();
	}
}
void z_7()
{
    color(4);
    p(4);
    color(15);
    printf("(벌떡) 웬일로 운동기구가 경매에 나왔지?! 저건 꼭 사야 돼!!!!\n");
    printf("1.에이 네가 경매에 나온 걸 살 수 있겠어? 무리일 것 같은데\n2.오오 진짜네? 의외로 싼 값에 살 수 있겠어\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("저기 나온 운동기구로 한 대 맞고 싶냐? (체력 -10)\n");
    else if(choice == 2)
        printf("저걸 못 따면 나는 달팽이도 아니다,,! 만약 따게 되면 너한테도 빌려줄게 (체력 +10)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	z_7();
	}
}
void s_8()
{
    color(9);
    p(1);
    color(15);
    printf("경매에 족보가 나왔다.\n");
    printf("1.엇! 저거 너한테 꼭 필요한 거잖아? (플레이어가 얻음) 자 여기 족보\n2.응? 경매에 족보같은 것도 나오네 (무관심)\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("진짜로? 고마워,,, 너한테 필요한거 사지,, (호감도 +15)\n");
    else if(choice == 2)
        printf("...... 제가 그 족보 살게요! (호감도 -15)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	s_8();
	}
}
void k_8()
{
    color(10);
    p(2);
    color(15);
    printf("경매에 사탕반지가 나왔다");
    printf("1.오오 요즘에도 사탕반지가 나오는구나 (플레이어가 얻음) 자 여기! 아.. 이런거 싫어하려나?\n2.너는 저런 사탕반지는 시시해서 싫어하지? 내가 다이아몬드 반지라도 하나 줄게\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("! 흐,,,.,흥!!! 당연하지 이런 거 내가 좋아할 줄 알아? (뺏어가며) (호감도 +20)\n");
    else if(choice == 2 )
        printf("이런 무식한!!! 우리집엔 다이아몬드 반지가 널리고 널렸다고! (호감도 -20)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	k_8();
	}
}
void g_8()
{
    color(14);
    p(3);
    color(15);
    printf("기여니가 최고의 타짜(?)였을 때의 소집품이 경매에 나온다");
    printf("1.어 저게 뭐지? 이왕 본거 선생님에게 저거 드릴게요 (플레이어가 얻음) 여기요\n2.(기여니의 옛 소집품을 못보고 지나친다.) 경매에는 여러 가지 물건들이 많네요\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("......이런 이 물건을 나에게 선물하다니 ‘운’이 없구나? (호감도 -10)\n");
    else if(choice == 2)
        printf("최고의 행사라고도 할 수 있지 원하는 거 하나 정도는 가지렴 ㅎㅎ (호감도 +10)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	g_8();
	}
}
void z_8()
{
    color(4);
    p(4);
    color(15);
    printf("경매에 운동기구가 나왔다");
    printf("1.어 저거 너가 사고 싶어했는데 못 샀던거잖아? (플레이어가 얻음) 자 여기\n2.운동기구도 나오는 구나 근데 너는 이미 많잖아? 다른거나 보자\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("어,,,고마워 굳이 이렇게 안 줘도 됬었는데 (호감도 +10)\n");
    else if(choice == 2)
        printf("( ....갖고 싶었던건데...) (호감도 -10)\n");
    else 
    {
    	printf("다시 입력하세요\n");
    	Sleep(2000);
    	z_8();
	}
}
