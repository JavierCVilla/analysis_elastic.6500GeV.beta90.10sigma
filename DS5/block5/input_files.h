#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

std::string input_ntuple_name;

void InitInputFiles()
{
	input_ntuple_name = "TotemNtuple";

	input_files.clear();

	// 2015_10_17, fill 4509 (DS5)

	/*
	//std::string prefix = "root://eostotem.cern.ch//eos/totem/data/cmstotem/2015/90m/Totem/Ntuple/version1/";
	std::string prefix = "root://eostotem.cern.ch//eos/totem/user/j/jkaspar/reco/alignment_version2_sr_el/";

	std::vector<std::string> EVBs = { "11_1" };

	for (const auto &evb : EVBs)
	{
		//input_files.push_back(prefix + "9957_EVB" + evb + ".0-9_ntuple.root");

		input_files.push_back(prefix + "9959_EVB" + evb + ".0-9_ntuple.root");
		//input_files.push_back(prefix + "9959_EVB" + evb + ".10-19_ntuple.root");

		input_files.push_back(prefix + "9960_EVB" + evb + ".0-9_ntuple.root");
		input_files.push_back(prefix + "9960_EVB" + evb + ".10-19_ntuple.root");

		input_files.push_back(prefix + "9961_EVB" + evb + ".0-9_ntuple.root");

		input_files.push_back(prefix + "9962_EVB" + evb + ".0-9_ntuple.root");

		input_files.push_back(prefix + "9964_EVB" + evb + ".0-9_ntuple.root");
		input_files.push_back(prefix + "9964_EVB" + evb + ".10-19_ntuple.root");
		input_files.push_back(prefix + "9964_EVB" + evb + ".20-29_ntuple.root");

		input_files.push_back(prefix + "9971_EVB" + evb + ".0-9_ntuple.root");
		input_files.push_back(prefix + "9971_EVB" + evb + ".10-19_ntuple.root");
		input_files.push_back(prefix + "9971_EVB" + evb + ".20-29_ntuple.root");
		input_files.push_back(prefix + "9971_EVB" + evb + ".30-39_ntuple.root");
		input_files.push_back(prefix + "9971_EVB" + evb + ".40-49_ntuple.root");
		input_files.push_back(prefix + "9971_EVB" + evb + ".50-59_ntuple.root");
		input_files.push_back(prefix + "9971_EVB" + evb + ".60-69_ntuple.root");
		input_files.push_back(prefix + "9971_EVB" + evb + ".70-79_ntuple.root");
		input_files.push_back(prefix + "9971_EVB" + evb + ".80-89_ntuple.root");
		input_files.push_back(prefix + "9971_EVB" + evb + ".90-99_ntuple.root");
		input_files.push_back(prefix + "9971_EVB" + evb + ".100-109_ntuple.root");

		input_files.push_back(prefix + "9972_EVB" + evb + ".0-9_ntuple.root");

		input_files.push_back(prefix + "9973_EVB" + evb + ".0-9_ntuple.root");

		input_files.push_back(prefix + "9976_EVB" + evb + ".0-9_ntuple.root");
		input_files.push_back(prefix + "9976_EVB" + evb + ".10-19_ntuple.root");
		input_files.push_back(prefix + "9976_EVB" + evb + ".20-29_ntuple.root");
		input_files.push_back(prefix + "9976_EVB" + evb + ".30-39_ntuple.root");
		input_files.push_back(prefix + "9976_EVB" + evb + ".40-49_ntuple.root");
		input_files.push_back(prefix + "9976_EVB" + evb + ".50-59_ntuple.root");
		input_files.push_back(prefix + "9976_EVB" + evb + ".60-69_ntuple.root");
		input_files.push_back(prefix + "9976_EVB" + evb + ".70-79_ntuple.root");
		input_files.push_back(prefix + "9976_EVB" + evb + ".80-89_ntuple.root");
		input_files.push_back(prefix + "9976_EVB" + evb + ".90-99_ntuple.root");
		input_files.push_back(prefix + "9976_EVB" + evb + ".100-109_ntuple.root");
		input_files.push_back(prefix + "9976_EVB" + evb + ".110-119_ntuple.root");
		input_files.push_back(prefix + "9976_EVB" + evb + ".120-129_ntuple.root");

		input_files.push_back(prefix + "9978_EVB" + evb + ".0-9_ntuple.root");
		input_files.push_back(prefix + "9978_EVB" + evb + ".10-19_ntuple.root");
		input_files.push_back(prefix + "9978_EVB" + evb + ".20-29_ntuple.root");
		input_files.push_back(prefix + "9978_EVB" + evb + ".30-39_ntuple.root");
		input_files.push_back(prefix + "9978_EVB" + evb + ".40-49_ntuple.root");
		input_files.push_back(prefix + "9978_EVB" + evb + ".50-59_ntuple.root");
		input_files.push_back(prefix + "9978_EVB" + evb + ".60-69_ntuple.root");
		input_files.push_back(prefix + "9978_EVB" + evb + ".70-79_ntuple.root");
		input_files.push_back(prefix + "9978_EVB" + evb + ".80-89_ntuple.root");
		input_files.push_back(prefix + "9978_EVB" + evb + ".90-99_ntuple.root");
		input_files.push_back(prefix + "9978_EVB" + evb + ".100-109_ntuple.root");
		input_files.push_back(prefix + "9978_EVB" + evb + ".110-119_ntuple.root");
		input_files.push_back(prefix + "9978_EVB" + evb + ".120-129_ntuple.root");
		input_files.push_back(prefix + "9978_EVB" + evb + ".130-139_ntuple.root");
		//input_files.push_back(prefix + "9978_EVB" + evb + ".140-149_ntuple.root");
	}
	*/

	std::string prefix = "root://eostotem.cern.ch//eos/totem/data/cmstotem/2015/90m/Totem/Ntuple/version2/4509/";

	input_files.push_back(prefix + "TotemNTuple_9978.056.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.057.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.058.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.059.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.060.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.061.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.062.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.063.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.064.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.065.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.066.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.067.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.068.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.069.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.070.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.071.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.072.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.073.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.074.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.075.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.076.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.077.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.078.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.079.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.080.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.081.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.082.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.083.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.084.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.085.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.086.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.087.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.088.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.089.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.090.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.091.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.092.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.093.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.094.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.095.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.096.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.097.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.098.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.099.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.100.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.101.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.102.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.103.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.104.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.105.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.106.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.107.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.108.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.109.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.110.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.111.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.112.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.113.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.114.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.115.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.116.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.117.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.118.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.119.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.120.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.121.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.122.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.123.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.124.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.125.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.126.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.127.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.128.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.129.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.130.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.131.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.132.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.133.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.134.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.135.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.136.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.137.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.138.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.139.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.140.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.141.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.142.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.143.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.144.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.145.ntuple.root");
}
