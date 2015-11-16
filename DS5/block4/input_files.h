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

	input_files.push_back(prefix + "TotemNTuple_9976.089.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.090.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.091.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.092.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.093.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.094.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.095.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.096.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.097.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.098.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.099.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.100.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.101.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.102.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.103.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.104.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.105.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.106.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.107.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.108.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.109.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.110.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.111.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.112.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.113.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.114.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.115.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.116.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.117.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.118.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.119.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.120.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.121.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.008.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.009.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.010.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.011.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.012.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.013.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.014.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.015.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.016.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.017.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.018.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.019.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.020.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.021.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.022.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.023.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.024.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.025.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.026.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.027.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.028.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.029.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.030.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.031.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.032.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.033.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.034.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.035.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.036.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.037.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.038.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.039.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.040.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.041.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.042.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.043.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.044.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.045.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.046.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.047.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.048.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.049.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.050.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.051.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.052.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.053.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.054.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9978.055.ntuple.root");
}
