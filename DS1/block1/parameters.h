#include "../parameters.h"

#define USE_INIT_ADDITIONAL 1

void Init_additional()
{
	// directory for large-data storage (e.g. distilled ntuples)
	storageDir = "{PWD}/DS1/block1/";

	// reset list of subdirectories with distilled ntuples
	distilledNtuples.clear();
	distilledNtuples.push_back(".");
}
