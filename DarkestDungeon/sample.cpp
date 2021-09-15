#include <iostream>
#include <string>

using namespace std;

class unitstat
{
public:

private:
	// 피해량 관련(데미지사이의 범위 지정, 난수로 표현, 크리티컬도 난수?, )
	int DMG;
	float CRIT;
	int DEF;
	int CRITDMG = 2;
	// 기본 데미지 공식?(데미지X(크리 터지면 크리데미지)- 방어 ) 0이하일때는 방어로 표시, 크리티컬때 크리티컬 문자표시



	// 체력관련 체력이 0이되면 DeathBlow확률 적용 스트레스 받는 상태 변화
	int HP;
	int MAXHP;


	// 스트레스 관련(100 채울경우 상태변화 200일 경우 바로 사망)
	int STRESS = 0;
	int MAXSTRESS = 200;

	// 명중률 관련 (난수 호출로 %100 했을 때 그 숫자 이상일 경우 빗나감)
	int ACC;
	int DODGE;

	// 저항력 관련 각각의 확률를 난수로 표현
	int Stun;
	int Blight;
	int Bleed;
	int Debuff;
	int Move;
	int DeathBlow;

	//스피드 관련;
	int SPD; // spd 순으로 정렬하는 알고리즘 필요


	void DungeonStart() // 원정 시작시 디폴트 초기화(인게임에서는 다르게 해야함)
	{
		HP = MAXHP;
		STRESS = 0;
		ItemEffect();
	}

	void ItemEffect()
	{

	}

};