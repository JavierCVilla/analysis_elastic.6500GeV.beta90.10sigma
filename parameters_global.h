#include <string>
#include <vector>
#include <map>
#include <cmath>

double timestamp0 = 1444860000;

string storageDir;

vector<string> distilledNtuples;

vector<AlignmentSource> alignmentSources;
Analysis anal;
Environment env;

string unsmearing_file;
string unsmearing_object;

string luminosity_data_file;

//----------------------------------------------------------------------------------------------------

void Init_global()
{
	// environment settings
	env.InitNominal();

	// binning
	// TODO
	anal.t_min = 0.; anal.t_max = 3.5;
	anal.t_min_full = 0.; anal.t_max_full = 4.0;
}

//----------------------------------------------------------------------------------------------------

void Init_global_45b_56t()
{
	anal.th_y_lcut_L = 30E-6; anal.th_y_lcut_R = 33.5E-6; anal.th_y_lcut = 34.5E-6;
	anal.th_y_hcut_L = 102E-6; anal.th_y_hcut_R = 102E-6; anal.th_y_hcut = 100E-6;
}

//----------------------------------------------------------------------------------------------------

void Init_global_45t_56b()
{
	anal.th_y_lcut_L = 27E-6; anal.th_y_lcut_R = 27.5E-6; anal.th_y_lcut = 28.5E-6;
	anal.th_y_hcut_L = 102E-6; anal.th_y_hcut_R = 102E-6; anal.th_y_hcut = 100E-6;
}
