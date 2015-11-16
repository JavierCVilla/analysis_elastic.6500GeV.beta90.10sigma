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

	input_files.push_back(prefix + "TotemNTuple_9971.029.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.030.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.031.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.032.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.033.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.034.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.035.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.036.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.037.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.038.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.039.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.040.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.041.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.042.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.043.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.044.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.045.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.046.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.047.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.048.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.049.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.050.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.051.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.052.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.053.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.054.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.055.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.056.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.057.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.058.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.059.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.060.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.061.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.062.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.063.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.064.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.065.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.066.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.067.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.068.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.069.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.070.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.071.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.072.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.073.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.074.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.075.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.076.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.077.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.078.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.079.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.080.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.081.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.082.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.083.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.084.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.085.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.086.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.087.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.088.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.089.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.090.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.091.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.092.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.093.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.094.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.095.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.096.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.097.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.098.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.099.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.100.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.101.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.102.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.103.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.104.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.105.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.106.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.107.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.108.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9972.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9972.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9972.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9972.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9972.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9973.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9973.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9973.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9973.003.ntuple.root");
}
