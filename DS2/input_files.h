#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

std::string input_ntuple_name;

void InitInputFiles()
{
	input_ntuple_name = "TotemNtuple";

	input_files.clear();

	// 2015_10_15, fill 4496 (DS2)

	/*
	//std::string prefix = "root://eostotem.cern.ch//eos/totem/data/cmstotem/2015/90m/Totem/Ntuple/version1/";
	std::string prefix = "root://eostotem.cern.ch//eos/totem/user/j/jkaspar/reco/alignment_version2_sr_el/";

	std::vector<std::string> EVBs = { "11_1" };

	for (const auto &evb : EVBs)
	{
		input_files.push_back(prefix + "9893_EVB" + evb + ".0-9_ntuple.root");

		input_files.push_back(prefix + "9895_EVB" + evb + ".0-9_ntuple.root");

		input_files.push_back(prefix + "9896_EVB" + evb + ".0-9_ntuple.root");
		input_files.push_back(prefix + "9896_EVB" + evb + ".10-21_ntuple.root");
		input_files.push_back(prefix + "9896_EVB" + evb + ".22-29_ntuple.root");

		input_files.push_back(prefix + "9898_EVB" + evb + ".0-9_ntuple.root"); 
		input_files.push_back(prefix + "9898_EVB" + evb + ".10-19_ntuple.root");
		input_files.push_back(prefix + "9898_EVB" + evb + ".20-29_ntuple.root");
	}
	*/

	std::string prefix = "root://eostotem.cern.ch//eos/totem/data/cmstotem/2015/90m/Totem/Ntuple/version2/4496/";

	input_files.push_back(prefix + "TotemNTuple_9893.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9893.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9893.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9893.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9893.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9893.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9893.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9893.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9894.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9894.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9894.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9894.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9894.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9894.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9894.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9894.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9894.008.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9894.009.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9894.010.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9894.011.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9894.012.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9894.013.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9895.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9895.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9895.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9895.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9895.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9895.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.008.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.009.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.010.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.011.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.012.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.013.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.014.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.015.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.016.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.017.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.018.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.019.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.020.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.021.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.022.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9896.023.ntuple.root");
}
