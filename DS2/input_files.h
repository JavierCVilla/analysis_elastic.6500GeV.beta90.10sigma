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

	//std::string prefix = "root://eostotem.cern.ch//eos/totem/data/cmstotem/2015/90m/Totem/Ntuple/version1/";
	std::string prefix = "root://eostotem.cern.ch//eos/totem/user/j/jkaspar/reco/alignment_version2/";

	std::vector<std::string> EVBs = { "11_1" };

	for (const auto &evb : EVBs)
	{
		input_files.push_back(prefix + "9893_EVB" + evb + ".0-9_ntuple.root");

		input_files.push_back(prefix + "9895_EVB" + evb + ".0-9_ntuple.root");

		input_files.push_back(prefix + "9896_EVB" + evb + ".0-9_ntuple.root");
		input_files.push_back(prefix + "9896_EVB" + evb + ".10-21_ntuple.root");
		input_files.push_back(prefix + "9896_EVB" + evb + ".22-29_ntuple.root");

		input_files.push_back(prefix + "9898_EVB" + evb + ".0-9_ntuple.root"); 
		// TODO: uncomment
		//input_files.push_back(prefix + "9898_EVB" + evb + ".10-19_ntuple.root");
		input_files.push_back(prefix + "9898_EVB" + evb + ".20-29_ntuple.root");
	}
}
