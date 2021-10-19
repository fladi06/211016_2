#include <iostream>

using namespace std;

class Monster
{
public:
	Monster();
	~Monster();

	void info(int a, int b, string c)
	{
		int HP = 0;
		int MP = 0;
		string Skill;
	}
	 
};

int main()
{
	Monster Monster1;
	Monster1.info(100, 50, "Thunderbalt");
	
	return 0;
}

Monster::Monster()
{
}

Monster::~Monster()
{
}

