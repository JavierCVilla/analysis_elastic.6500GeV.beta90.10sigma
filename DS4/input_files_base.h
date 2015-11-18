#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files_full;

std::string input_ntuple_name;

void InitInputFilesBase()
{
	input_ntuple_name = "TotemNtuple";

	input_files_full.clear();

	// 2015_10_16, fill 4505 (DS4)

	/*
	//std::string prefix = "root://eostotem.cern.ch//eos/totem/data/cmstotem/2015/90m/Totem/Ntuple/version1/";
	std::string prefix = "root://eostotem.cern.ch//eos/totem/user/j/jkaspar/reco/alignment_version2_sr_el/";

	std::vector<std::string> EVBs = { "11_1" };

	for (const auto &evb : EVBs)
	{
		input_files_full.push_back(prefix + "9940_EVB" + evb + ".0-9_ntuple.root");
		//input_files_full.push_back(prefix + "9940_EVB" + evb + ".10-19_ntuple.root");
		//input_files_full.push_back(prefix + "9940_EVB" + evb + ".20-29_ntuple.root");
		//input_files_full.push_back(prefix + "9940_EVB" + evb + ".30-39_ntuple.root");
		input_files_full.push_back(prefix + "9940_EVB" + evb + ".40-49_ntuple.root");
		//input_files_full.push_back(prefix + "9940_EVB" + evb + ".50-59_ntuple.root");
		//input_files_full.push_back(prefix + "9940_EVB" + evb + ".60-69_ntuple.root");

		//input_files_full.push_back(prefix + "9950_EVB" + evb + ".0-9_ntuple.root");
		//input_files_full.push_back(prefix + "9950_EVB" + evb + ".10-19_ntuple.root");

		input_files_full.push_back(prefix + "9952_EVB" + evb + ".0-9_ntuple.root");
	}
	*/

	std::string prefix = "root://eostotem.cern.ch//eos/totem/data/cmstotem/2015/90m/Totem/Ntuple/version2/4505/";

	input_files_full.push_back(prefix + "TotemNTuple_9940.000.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.001.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.002.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.003.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.004.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.005.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.006.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.007.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.008.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.009.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.010.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.011.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.012.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.013.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.014.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.015.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.016.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.017.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.018.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.019.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.020.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.021.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.022.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.023.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.024.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.025.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.026.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.027.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.028.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.030.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.031.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.032.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.033.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.034.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.035.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.036.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.037.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.038.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.039.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.040.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.041.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.042.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.043.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.044.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.045.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.047.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.048.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.049.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.050.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.051.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.052.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.053.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.054.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.055.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.056.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.057.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.058.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.059.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.060.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.061.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9940.062.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9950.000.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9950.001.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9950.002.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9950.003.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9950.004.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9950.005.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9950.006.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9950.007.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9950.008.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9950.009.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9950.010.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9950.011.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9950.012.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9950.013.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9950.014.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9950.015.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9952.000.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9952.001.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9952.002.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9952.003.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9952.004.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9952.005.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9952.006.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9952.007.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9952.008.ntuple.root");
	input_files_full.push_back(prefix + "TotemNTuple_9952.009.ntuple.root");
}
