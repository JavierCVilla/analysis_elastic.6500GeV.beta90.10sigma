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

	input_files.push_back(prefix + "TotemNTuple_9957.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9957.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9959.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9959.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9959.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9959.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9959.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9959.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9959.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9959.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9959.008.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9959.009.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9959.010.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9960.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9960.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9960.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9960.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9960.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9960.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9960.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9960.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9960.008.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9960.009.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9960.010.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9960.011.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9960.012.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9960.013.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9960.014.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9960.015.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9961.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9961.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9961.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9961.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9961.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9961.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9961.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9961.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9961.008.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9962.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.008.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.009.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.010.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.011.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.012.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.013.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.014.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.015.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.016.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.017.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.018.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.019.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9964.020.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.000.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.001.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.002.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.003.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.004.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.005.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.006.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.007.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.008.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.009.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.010.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.011.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.012.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.013.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.014.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.015.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.016.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.017.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.018.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.019.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.020.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.021.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.022.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.023.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.024.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.025.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.026.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.027.ntuple.root");
	input_files.push_back(prefix + "TotemNTuple_9971.028.ntuple.root");
}
