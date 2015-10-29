#include <string>
#include <vector>
#include <map>
#include <cmath>

double timestamp0 = 1444946400;

vector<AlignmentSource> alignmentSources;
Analysis anal;
Environment env;

string unsmearing_file;
string unsmearing_object;

string luminosity_data_file;

void Init_base()
{
	// selection of bunches
	keepAllBunches = true;
	//bunchMap[94882].push_back(0);

	// alignment settings
	/*
	AlignmentSource alSrc;
	alSrc.SetAlignmentA(atNone);
	alSrc.SetAlignmentB(atNone);
	alSrc.SetAlignmentC(atNone);

	alSrc.cnst.a_L_F = 0E-3; alSrc.cnst.b_L_F = 0E-3; alSrc.cnst.c_L_F = 0E-3;
	alSrc.cnst.a_L_N = 0E-3; alSrc.cnst.b_L_N = 0E-3; alSrc.cnst.c_L_N = 0E-3;
	alSrc.cnst.a_R_N = 0E-3; alSrc.cnst.b_R_N = 0E-3; alSrc.cnst.c_R_N = 0E-3;
	alSrc.cnst.a_R_F = 0E-3; alSrc.cnst.b_R_F = 0E-3; alSrc.cnst.c_R_F = 0E-3;
	
	alignmentSources.push_back(alSrc);
	*/

	// environment settings
	env.InitNominal();

	// binning
	// TODO
	anal.t_min = 0.; anal.t_max = 3.0;
	anal.t_min_full = 0.; anal.t_max_full = 3.5;
	
	// approximate (time independent) resolutions
	// TODO
	anal.si_th_y_1arm = 1.7E-6 / sqrt(2.);
	anal.si_th_y_1arm_unc = 0.E-6 / sqrt(2.);

	anal.si_th_y_2arm = anal.si_th_y_1arm / sqrt(2.);
	anal.si_th_y_2arm_unc = 0E-6;

	anal.si_th_x_1arm_L = 8E-6;
	anal.si_th_x_1arm_R = 8E-6;
	anal.si_th_x_1arm_unc = 0E-6;

	anal.si_th_x_2arm = 0E-6;
	anal.si_th_x_2arm_unc = 0E-6;

	// analysis settings
	anal.th_x_lcut = -1.;	
	anal.th_x_hcut = +1.;
	
#if 0
	anal.use_time_dependent_resolutions = false;

	anal.use_3outof4_efficiency_fits = false;
	anal.use_pileup_efficiency_fits = false;
	anal.inefficiency_3outof4 = 0.;				// diagonal dependent
	anal.inefficiency_shower_near = 0.03;
	anal.inefficiency_pile_up = 0.;				// diagonal dependent
	anal.inefficiency_trigger = 0.;

	anal.bckg_corr = 1.;
	
	anal.L_int_eff = 0.;	// mb^-1, diagonal dependent
	
	anal.eff_th_y_min = 200E-6; // TODO
	
	anal.t_min_fit = 0.027; // TODO
#endif

	anal.alignment_t0 = 83000.;		// beginning of the first time-slice
	anal.alignment_ts = 5.*60.;		// time-slice in s
	
	anal.alignmentYRanges["L_2_F"] = Analysis::AlignmentYRange(-22.0, -10.0, 9.0, 22.0);
	anal.alignmentYRanges["L_2_N"] = Analysis::AlignmentYRange(-20.0, - 9.0, 8.4, 20.0);
	anal.alignmentYRanges["L_1_F"] = Analysis::AlignmentYRange(-19.3, - 8.8, 8.0, 19.6);

	anal.alignmentYRanges["R_1_F"] = Analysis::AlignmentYRange(-20.0, - 7.4, 8.0, 20.0);
	anal.alignmentYRanges["R_2_N"] = Analysis::AlignmentYRange(-20.5, - 7.6, 8.4, 20.8);
	anal.alignmentYRanges["R_2_F"] = Analysis::AlignmentYRange(-23.0, - 8.2, 9.2, 24.0);

#if 0
	// TODO
	unsmearing_file = "";	// diagonal dependent
	//unsmearing_object = "cf,<binning>/exp3/corr_final";
	//unsmearing_object = "cf,<binning>/exp3+exp4/corr_final";
	unsmearing_object = "ff";

	// TODO
	luminosity_data_file = "../fill_3549_lumiCalc2.py_V04-02-04_lumibylsXing.csv";
#endif
}

//----------------------------------------------------------------------------------------------------

void Init_45b_56t()
{
	// analysis settings
	anal.cut1_a = 1.; anal.cut1_c = -4.9E-6; anal.cut1_si = 9.5E-6;
	anal.cut2_a = 1.; anal.cut2_c = -0.1E-6; anal.cut2_si = 2.8E-6;
	
	anal.cut5_a = 0.107200; anal.cut5_c = -0.010; anal.cut5_si = 0.016;
	anal.cut6_a = 0.105559; anal.cut6_c = -0.002; anal.cut6_si = 0.019;

	anal.cut7_a = 168.; anal.cut7_c = +0.012; anal.cut7_si = 0.012;

	anal.th_y_lcut_L = 28E-6; anal.th_y_lcut_R = 32E-6; anal.th_y_lcut = 34E-6;
	anal.th_y_hcut_L = 104E-6; anal.th_y_hcut_R = 104E-6; anal.th_y_hcut = 102E-6;

#if 0
	// TODO
	//unsmearing_file = "unfolding_fit_45b_56t_old.root";

	anal.inefficiency_3outof4 = 0.0; // TODO
	anal.inefficiency_pile_up = 0.0; // TODO

	anal.L_int_eff = 79.42E3;	// TODO	
#endif
}

//----------------------------------------------------------------------------------------------------

void Init_45t_56b()
{
	// analysis settings
	anal.cut1_a = 1.; anal.cut1_c = +0.5E-6; anal.cut1_si = 10.0E-6;
	anal.cut2_a = 1.; anal.cut2_c = +0E-6; anal.cut2_si = 2.8E-6;
	
	anal.cut5_a = 0.10671; anal.cut5_c = -0.009; anal.cut5_si = 0.018;
	anal.cut6_a = 0.10564; anal.cut6_c = +0.006; anal.cut6_si = 0.018;

	anal.cut7_a = 169.; anal.cut7_c = +0.013; anal.cut7_si = 0.012;

	anal.th_y_lcut_L = 25.5E-6; anal.th_y_lcut_R = 27.2E-6; anal.th_y_lcut = 28.2E-6;
	anal.th_y_hcut_L = 104E-6; anal.th_y_hcut_R = 104E-6; anal.th_y_hcut = 102E-6;

#if 0
	// TODO
	//unsmearing_file = "unfolding_fit_45b_56t_old.root";

	anal.inefficiency_3outof4 = 0.0; // TODO
	anal.inefficiency_pile_up = 0.0; // TODO

	anal.L_int_eff = 79.42E3;	// TODO	
#endif
}
