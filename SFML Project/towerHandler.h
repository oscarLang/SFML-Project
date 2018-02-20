#ifndef TOWERHANDLER_H
#define TOWERHANDLER_H
#include "towers.h"
using namespace std;
class TowerHandler
{
private:
	Towers* *towers;
	int capacity;
	int nrOfTowers;
	void initiate(int from = 0);
	void expand();
	void freeMemory();
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
public:
	TowerHandler(int capacity = 10);
	TowerHandler(const TowerHandler &orgObj);
	virtual ~TowerHandler();
	TowerHandler &operator=(const TowerHandler &orgObj);
	void addTowerOne(int damage, int fireRate,float x,float y);
	//void addTowerTwo(int damage, int fireRate);
	


};

#endif // !TOWERHANDLER_H
