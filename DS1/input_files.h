#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

std::string input_ntuple_name;

void InitInputFiles()
{
	input_ntuple_name = "TotemNtuple";

	input_files.clear();

	// 2015_10_15, fill 4495 (DS1)

	/*
	//std::string prefix = "root://eostotem.cern.ch//eos/totem/data/cmstotem/2015/90m/Totem/Ntuple/version1/";
	std::string prefix = "root://eostotem.cern.ch//eos/totem/user/j/jkaspar/reco/alignment_version2_sr_el/";

	std::vector<std::string> EVBs = { "11_1" };

	for (const auto &evb : EVBs)
	{
		input_files.push_back(prefix + "9874_EVB" + evb + ".0-9_ntuple.root");

		input_files.push_back(prefix + "9875_EVB" + evb + ".0-9_ntuple.root");

		input_files.push_back(prefix + "9876_EVB" + evb + ".0-9_ntuple.root");

		input_files.push_back(prefix + "9877_EVB" + evb + ".0-9_ntuple.root");
		input_files.push_back(prefix + "9877_EVB" + evb + ".10-19_ntuple.root");

		input_files.push_back(prefix + "9879_EVB" + evb + ".0-9_ntuple.root");

		input_files.push_back(prefix + "9881_EVB" + evb + ".0-9_ntuple.root");
		
		input_files.push_back(prefix + "9883_EVB" + evb + ".0-9_ntuple.root");
		input_files.push_back(prefix + "9883_EVB" + evb + ".10-21_ntuple.root");
		input_files.push_back(prefix + "9883_EVB" + evb + ".22-35_ntuple.root");
		// TODO: uncomment
		//input_files.push_back(prefix + "9883_EVB" + evb + ".36-40_ntuple.root");
	}
	*/

	std::string prefix = "root://eostotem.cern.ch//eos/totem/data/cmstotem/2015/90m/Totem/Ntuple/version2/4495/";

	input_files.push_back(prefix + "TotemNTuple_9874.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9877.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9877.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9877.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9877.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9877.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9877.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9877.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9877.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9877.008.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9877.009.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9877.010.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9879.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9879.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9879.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9881.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9881.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9881.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9881.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9881.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9881.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9881.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9881.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.008.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.009.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.011.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.012.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.013.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.014.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.015.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.016.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.017.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.018.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.019.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.021.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.022.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.023.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.024.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.025.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.026.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.027.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.028.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.029.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.032.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.033.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.034.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.035.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.036.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.038.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.039.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9883.040.ntuple.root");
}
