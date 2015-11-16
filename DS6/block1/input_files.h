#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

std::string input_ntuple_name;

void InitInputFiles()
{
	input_ntuple_name = "TotemNtuple";

	input_files.clear();

	// 2015_10_17, fill 4510 (DS6)

	/*
	//std::string prefix = "root://eostotem.cern.ch//eos/totem/data/cmstotem/2015/90m/Totem/Ntuple/version1/";
	std::string prefix = "root://eostotem.cern.ch//eos/totem/user/j/jkaspar/reco/alignment_version2_sr_el/";

	std::vector<std::string> EVBs = { "11_1" };

	for (const auto &evb : EVBs)
	{
		input_files.push_back(prefix + "9980_EVB" + evb + ".0-9_ntuple.root");
		input_files.push_back(prefix + "9980_EVB" + evb + ".10-19_ntuple.root");
		input_files.push_back(prefix + "9980_EVB" + evb + ".20-29_ntuple.root");
		input_files.push_back(prefix + "9980_EVB" + evb + ".30-39_ntuple.root");

		input_files.push_back(prefix + "9981_EVB" + evb + ".0-9_ntuple.root");
		input_files.push_back(prefix + "9981_EVB" + evb + ".10-19_ntuple.root");

		input_files.push_back(prefix + "9985_EVB" + evb + ".0-9_ntuple.root");

		input_files.push_back(prefix + "9986_EVB" + evb + ".0-9_ntuple.root");
		input_files.push_back(prefix + "9986_EVB" + evb + ".10-19_ntuple.root");
		input_files.push_back(prefix + "9986_EVB" + evb + ".20-29_ntuple.root");
		input_files.push_back(prefix + "9986_EVB" + evb + ".30-39_ntuple.root");

		input_files.push_back(prefix + "9987_EVB" + evb + ".0-9_ntuple.root");

		input_files.push_back(prefix + "9989_EVB" + evb + ".0-9_ntuple.root");
		input_files.push_back(prefix + "9989_EVB" + evb + ".10-19_ntuple.root");
		input_files.push_back(prefix + "9989_EVB" + evb + ".20-29_ntuple.root");
	}
	*/

	std::string prefix = "root://eostotem.cern.ch//eos/totem/data/cmstotem/2015/90m/Totem/Ntuple/version2/4510/";

	input_files.push_back(prefix + "TotemNTuple_9980.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.008.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.009.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.010.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.011.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.012.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.013.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.014.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.015.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.016.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.017.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.018.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.019.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.020.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.021.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.022.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.023.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.024.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.025.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.026.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.027.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.028.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.029.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.030.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.031.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.032.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.033.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.034.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.035.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.036.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9980.037.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9981.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9981.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9981.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9981.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9981.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9981.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9981.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9981.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9981.008.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9981.009.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9981.010.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9985.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9985.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9985.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9985.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9985.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9985.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9985.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9985.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9985.008.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9985.009.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9986.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9986.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9986.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9986.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9986.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9986.006.ntuple.root");
}
