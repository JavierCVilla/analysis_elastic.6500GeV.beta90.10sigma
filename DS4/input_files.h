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

	std::string prefix = "root://eostotem.cern.ch//eos/totem/user/j/jkaspar/reco/sr,pass2/";
	input_files.push_back(prefix + "9940_EVB11_1.0-9_ntuple.root");
	input_files.push_back(prefix + "9940_EVB11_1.10-19_ntuple.root");
	input_files.push_back(prefix + "9940_EVB11_1.20-29_ntuple.root");
	input_files.push_back(prefix + "9940_EVB11_1.30-39_ntuple.root");
	input_files.push_back(prefix + "9940_EVB11_1.40-49_ntuple.root");
	input_files.push_back(prefix + "9940_EVB11_1.50-59_ntuple.root");
	input_files.push_back(prefix + "9940_EVB11_1.60-69_ntuple.root");
	input_files.push_back(prefix + "9950_EVB11_1.0-9_ntuple.root");
	input_files.push_back(prefix + "9950_EVB11_1.10-19_ntuple.root");
	input_files.push_back(prefix + "9952_EVB11_1.0-9_ntuple.root");
}
