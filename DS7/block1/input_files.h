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

	input_files.push_back(prefix + "TotemNTuple_9991.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.008.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.009.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.010.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.011.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.012.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.013.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.014.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.015.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.016.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.017.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.018.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.019.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.020.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.021.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.022.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.023.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.024.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.025.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.026.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.027.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.028.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.029.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.030.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.031.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.032.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.033.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.034.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.035.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.036.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.037.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.038.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.039.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.040.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.041.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.042.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.043.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.044.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.045.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9997.046.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.008.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.009.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.010.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.011.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.012.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.013.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.014.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.015.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.016.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.017.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.018.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.019.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.020.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.021.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.022.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.023.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.024.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.025.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.026.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.027.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.028.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.029.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.030.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.031.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.032.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.033.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.034.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.035.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.036.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.037.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.038.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.039.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.040.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.041.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.042.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.043.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9998.044.ntuple.root");
}
