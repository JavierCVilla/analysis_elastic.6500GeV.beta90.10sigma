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

	input_files.push_back(prefix + "TotemNTuple_9976.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.008.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.009.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.010.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.011.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.012.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.013.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.014.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.015.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.016.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.017.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.018.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.019.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.020.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.021.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.022.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.023.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.024.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.025.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.026.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.027.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.028.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.029.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.030.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.031.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.032.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.033.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.034.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.035.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.036.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.037.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.038.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.039.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.040.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.041.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.042.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.043.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.044.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.045.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.046.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.047.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.048.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.049.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.050.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.051.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.052.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.053.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.054.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.055.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.056.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.057.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.058.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.059.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.060.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.061.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.062.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.063.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.064.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.065.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.066.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.067.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.068.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.069.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.070.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.071.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.072.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.073.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.074.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.075.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.076.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.077.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.078.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.079.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.080.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.081.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.082.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.083.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.084.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.085.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.086.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.087.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9976.088.ntuple.root");
}
