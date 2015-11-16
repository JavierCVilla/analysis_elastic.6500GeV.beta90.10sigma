#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

std::string input_ntuple_name;

void InitInputFiles()
{
	input_ntuple_name = "TotemNtuple";

	input_files.clear();

	// 2015_10_15, fill 4499 (DS3)

	/*
	//std::string prefix = "root://eostotem.cern.ch//eos/totem/data/cmstotem/2015/90m/Totem/Ntuple/version1/";
	std::string prefix = "root://eostotem.cern.ch//eos/totem/user/j/jkaspar/reco/alignment_version2_sr_el/";

	std::vector<std::string> EVBs = { "11_1" };

	for (const auto &evb : EVBs)
	{
		input_files.push_back(prefix + "9919_EVB" + evb + ".0-9_ntuple.root");

		input_files.push_back(prefix + "9920_EVB" + evb + ".0-9_ntuple.root");
		input_files.push_back(prefix + "9920_EVB" + evb + ".10-19_ntuple.root");
		input_files.push_back(prefix + "9920_EVB" + evb + ".20-29_ntuple.root");
		input_files.push_back(prefix + "9920_EVB" + evb + ".30-39_ntuple.root");
		input_files.push_back(prefix + "9920_EVB" + evb + ".40-49_ntuple.root");
		input_files.push_back(prefix + "9920_EVB" + evb + ".50-59_ntuple.root");
		input_files.push_back(prefix + "9920_EVB" + evb + ".60-69_ntuple.root");
		input_files.push_back(prefix + "9920_EVB" + evb + ".70-79_ntuple.root");
		input_files.push_back(prefix + "9920_EVB" + evb + ".80-89_ntuple.root");
		input_files.push_back(prefix + "9920_EVB" + evb + ".90-99_ntuple.root");
		input_files.push_back(prefix + "9920_EVB" + evb + ".100-109_ntuple.root");
		input_files.push_back(prefix + "9920_EVB" + evb + ".110-119_ntuple.root");

		//input_files.push_back(prefix + "9922_EVB" + evb + ".0-9_ntuple.root");
		//input_files.push_back(prefix + "9922_EVB" + evb + ".10-19_ntuple.root");
		//input_files.push_back(prefix + "9922_EVB" + evb + ".20-29_ntuple.root");
		//input_files.push_back(prefix + "9922_EVB" + evb + ".30-39_ntuple.root");
		input_files.push_back(prefix + "9922_EVB" + evb + ".40-49_ntuple.root");
		//input_files.push_back(prefix + "9922_EVB" + evb + ".50-59_ntuple.root");
	}
	*/

	std::string prefix = "root://eostotem.cern.ch//eos/totem/data/cmstotem/2015/90m/Totem/Ntuple/version2/4499/";
 
	input_files.push_back(prefix + "TotemNTuple_9919.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9919.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9919.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9919.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9919.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9919.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9919.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9919.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9919.008.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.008.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.009.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.010.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.011.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.012.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.013.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.014.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.015.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.016.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.017.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.018.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.019.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.020.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.021.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.022.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.023.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.024.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.025.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.026.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.027.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.028.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.029.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.030.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.031.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.032.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.033.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.034.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.035.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.036.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.037.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.038.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.039.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.040.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.041.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.042.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.043.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.044.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.045.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.046.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.047.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.048.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.049.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.050.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.051.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.052.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.053.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.054.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.055.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.056.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.057.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.058.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.059.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.060.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.061.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.062.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.063.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.064.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.065.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.066.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.067.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.068.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.069.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.070.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.071.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.072.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.073.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.074.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.075.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.076.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.077.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.078.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9920.079.ntuple.root");
}
