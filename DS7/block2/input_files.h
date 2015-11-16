#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

std::string input_ntuple_name;

void InitInputFiles()
{
	input_ntuple_name = "TotemNtuple";

	input_files.clear();

	// 2015_10_18, fill 4511 (DS7)

	/*
	//std::string prefix = "root://eostotem.cern.ch//eos/totem/data/cmstotem/2015/90m/Totem/Ntuple/version1/";
	std::string prefix = "root://eostotem.cern.ch//eos/totem/user/j/jkaspar/reco/alignment_version2_sr_el/";

	std::vector<std::string> EVBs = { "11_1" };

	for (const auto &evb : EVBs)
	{
		//input_files.push_back(prefix + "9991_EVB" + evb + ".0-9_ntuple.root");

		input_files.push_back(prefix + "9997_EVB" + evb + ".0-9_ntuple.root");
		//input_files.push_back(prefix + "9997_EVB" + evb + ".10-19_ntuple.root");
		input_files.push_back(prefix + "9997_EVB" + evb + ".20-29_ntuple.root");
		//input_files.push_back(prefix + "9997_EVB" + evb + ".30-39_ntuple.root");
		input_files.push_back(prefix + "9997_EVB" + evb + ".40-49_ntuple.root");

		input_files.push_back(prefix + "9998_EVB" + evb + ".0-9_ntuple.root");
		input_files.push_back(prefix + "9998_EVB" + evb + ".10-19_ntuple.root");
		input_files.push_back(prefix + "9998_EVB" + evb + ".20-29_ntuple.root");
		input_files.push_back(prefix + "9998_EVB" + evb + ".30-39_ntuple.root");
		input_files.push_back(prefix + "9998_EVB" + evb + ".40-49_ntuple.root");
		input_files.push_back(prefix + "9998_EVB" + evb + ".50-59_ntuple.root");
		input_files.push_back(prefix + "9998_EVB" + evb + ".60-69_ntuple.root");
		input_files.push_back(prefix + "9998_EVB" + evb + ".70-79_ntuple.root");
		input_files.push_back(prefix + "9998_EVB" + evb + ".80-89_ntuple.root");
		input_files.push_back(prefix + "9998_EVB" + evb + ".90-99_ntuple.root");
		input_files.push_back(prefix + "9998_EVB" + evb + ".100-109_ntuple.root");
		input_files.push_back(prefix + "9998_EVB" + evb + ".110-119_ntuple.root");
		input_files.push_back(prefix + "9998_EVB" + evb + ".120-129_ntuple.root");
	}
	*/
	
	std::string prefix = "root://eostotem.cern.ch//eos/totem/data/cmstotem/2015/90m/Totem/Ntuple/version2/4511/";

	input_files.push_back(prefix + "TotemNTuple_9998.045.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.046.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.047.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.048.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.049.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.050.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.051.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.052.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.053.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.054.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.055.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.056.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.057.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.058.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.059.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.060.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.061.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.062.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.063.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.064.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.065.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.066.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.067.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.068.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.069.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.070.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.071.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.072.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.073.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.074.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.075.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.076.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.077.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.078.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.079.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.080.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.081.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.082.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.083.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.084.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.085.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.086.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.087.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.088.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.089.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.090.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.091.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.092.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.093.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.094.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.095.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.096.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.097.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.098.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.099.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.100.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.101.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.102.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.103.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.104.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.106.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.107.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.108.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.109.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.110.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.111.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.112.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.113.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.114.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.115.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.116.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.117.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.118.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.119.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.120.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.121.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.122.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.123.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.124.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.125.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.126.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.127.ntuple.root");
}
