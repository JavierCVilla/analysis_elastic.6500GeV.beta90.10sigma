#include "../parameters.h"

#define USE_INIT_ADDITIONAL 1

void Init_additional()
{
	// directory for large-data storage (e.g. distilled ntuples)
	storageDir = "root://eostotem.cern.ch//eos/totem/user/j/jkaspar/analyses/elastic/6500GeV,beta90,10sigma/DS5/";

	// reset list of subdirectories with distilled ntuples
	distilledNtuples.clear();
	distilledNtuples.push_back("block4");
	distilledNtuples.push_back("block5");
	distilledNtuples.push_back("block6");
}
