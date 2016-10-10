#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

std::string input_ntuple_name;

void InitInputFiles()
{
	input_ntuple_name = "TotemNtuple";

	input_files.clear();

	// 2015_10_16, fill 4505 (DS4)

	//std::string prefix = "root://eostotem.cern.ch//eos/totem/data/cmstotem/2015/90m/Totem/Ntuple/version1/";
	std::string prefix = "root://eostotem.cern.ch//eos/totem/user/j/jkaspar/reco/alignment_version2/";

	std::vector<std::string> EVBs = { "11_1" };

	for (const auto &evb : EVBs)
	{
		input_files.push_back(prefix + "9940_EVB" + evb + ".0-9_ntuple.root");
		//input_files.push_back(prefix + "9940_EVB" + evb + ".10-19_ntuple.root");
		//input_files.push_back(prefix + "9940_EVB" + evb + ".20-29_ntuple.root");
		//input_files.push_back(prefix + "9940_EVB" + evb + ".30-39_ntuple.root");
		input_files.push_back(prefix + "9940_EVB" + evb + ".40-49_ntuple.root");
		//input_files.push_back(prefix + "9940_EVB" + evb + ".50-59_ntuple.root");
		//input_files.push_back(prefix + "9940_EVB" + evb + ".60-69_ntuple.root");

		//input_files.push_back(prefix + "9950_EVB" + evb + ".0-9_ntuple.root");
		//input_files.push_back(prefix + "9950_EVB" + evb + ".10-19_ntuple.root");

		input_files.push_back(prefix + "9952_EVB" + evb + ".0-9_ntuple.root");
	}
}
