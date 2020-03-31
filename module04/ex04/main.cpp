#include "Asteroid.hpp"
#include "Comet.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "MiningBarge.hpp"

int main()
{
	DeepCoreMiner dcm;
	StripMiner sm;
	Asteroid asteroid;
	Comet comet;
	std::cout << comet.getName()<< std::endl;
	
	sm.mine(&comet);
	sm.mine(&asteroid);
	dcm.mine(&comet);
	dcm.mine(&asteroid);

	std::cout << "------------\n";
	
	MiningBarge barge;
	
	DeepCoreMiner* pdcm = new DeepCoreMiner;
	StripMiner* psm = new StripMiner;
	
	barge.equip(pdcm);
	barge.equip(pdcm);
	barge.equip(psm);
	barge.equip(psm);
	
	barge.equip(&sm);

	barge.mine(&comet);
	barge.mine(&asteroid);

	MiningBarge empty;
	empty.mine(&asteroid);
	empty.equip(&sm);
	empty.mine(&comet);

	return (0);
}
