#include <iostream>
#include <string>

using namespace std;

class unitstat
{
public:

private:
	// ���ط� ����(������������ ���� ����, ������ ǥ��, ũ��Ƽ�õ� ����?, )
	int DMG;
	float CRIT;
	int DEF;
	int CRITDMG = 2;
	// �⺻ ������ ����?(������X(ũ�� ������ ũ��������)- ��� ) 0�����϶��� ���� ǥ��, ũ��Ƽ�ö� ũ��Ƽ�� ����ǥ��



	// ü�°��� ü���� 0�̵Ǹ� DeathBlowȮ�� ���� ��Ʈ���� �޴� ���� ��ȭ
	int HP;
	int MAXHP;


	// ��Ʈ���� ����(100 ä���� ���º�ȭ 200�� ��� �ٷ� ���)
	int STRESS = 0;
	int MAXSTRESS = 200;

	// ���߷� ���� (���� ȣ��� %100 ���� �� �� ���� �̻��� ��� ������)
	int ACC;
	int DODGE;

	// ���׷� ���� ������ Ȯ���� ������ ǥ��
	int Stun;
	int Blight;
	int Bleed;
	int Debuff;
	int Move;
	int DeathBlow;

	//���ǵ� ����;
	int SPD; // spd ������ �����ϴ� �˰��� �ʿ�


	void DungeonStart() // ���� ���۽� ����Ʈ �ʱ�ȭ(�ΰ��ӿ����� �ٸ��� �ؾ���)
	{
		HP = MAXHP;
		STRESS = 0;
		ItemEffect();
	}

	void ItemEffect()
	{

	}

};